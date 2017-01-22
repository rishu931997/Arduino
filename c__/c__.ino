//**************************************************************************
// MSP430G2231 Room Monitor
//
// Eliminates unnecessary usage of power by turning off an AC appliance
// when a room has been vacated
//
// Relay --> P1.1
// Sharp GP2D12's --> P1.4 (A) & P1.5 (B) (220nF smoothing cap between signal and GND)
// Debug LEDs --> P1.2, P2.6, P2.7
//**************************************************************************

//#include "io430.h"
// Intrinsic functions
//#include "msp430g2231.h"

//#define     LED0                  BIT0                            // SMD RED ('Leaving' signal)
//#define     LED1                  BIT6                            // SMD GREEN ('Entering' signal)
#define     LED2                  BIT0                            // P1.0: Large BLUE
#define     LED3                  BIT1                            // P1.1: Large BLUE (XIN)
#define     LED4                  BIT2                            // P1.2 Large BLUE (XOUT)
#define     BUTTON                BIT3
#define     BUTTON_OUT            P1OUT
#define     BUTTON_DIR            P1DIR
#define     BUTTON_IN             P1IN
#define     BUTTON_IE             P1IE
#define     BUTTON_IES            P1IES
#define     BUTTON_IFG            P1IFG
#define     BUTTON_REN            P1REN

//#define     SAMPLE_SIZE           2
#define     IR_THRESHOLD          250

#define     RELAY                 BIT6

typedef unsigned int uint;
typedef unsigned short int usint;
typedef unsigned char uschar;

usint irA=0;
usint irB=0;
//usint aValue[SAMPLE_SIZE] = {0};
//usint bValue[SAMPLE_SIZE] = {0};
char visitors=0;
double action_A_Time=0;
double action_C_Time=0;
double action_D_Time=0;
double counter;
char action;
bool direction;                                                         // 1 = INTO room, 0 = OUT of room

void InitializeIO(void);
void readIR(void);
void checkSensors(void);
void timerInterrupt(usint);
void delay(usint);

int main( void )
{
  WDTCTL = WDTPW + WDTHOLD;                                       // Stop watchdog timer to prevent time out reset
  ADC10CTL0 = REFON | REF2_5V | SREF_1 | ADC10SHT_2 | ADC10ON;    // 2.5V and VSS refs , sample for 16 cycs , int ref off , ADC on , no interrupts
  ADC10AE0 = BIT4|BIT5;                                           // PA.4 (P1.4) & PA.5 (P1.5) ADC option select (Enable A4 & A5)
  
  P2SEL = 0; // Digital i/o rather than crystal
  //P2OUT = 0;
  //P2DIR = BIT6|BIT7; // Unused outputs driven low
  //P1OUT = BIT5; // VCC to 10k fixed resistor
  //P1DIR = BIT3|BIT6|BIT7; // Unused outputs driven low
  
  InitializeIO();
  
  checkSensors();
  
  return 0;
}
void InitializeIO(void)
{
  P1DIR |= LED2 + LED3 + LED4 + RELAY;
  P1OUT &= ~(LED2 + LED3 + LED4 + RELAY);
}
void InitializeButton(void)                 // Configure Push Button 
{
  BUTTON_DIR &= ~BUTTON;
  BUTTON_OUT |= BUTTON;
  BUTTON_REN |= BUTTON;
  BUTTON_IES |= BUTTON;
  BUTTON_IFG &= ~BUTTON;
  BUTTON_IE |= BUTTON;
}
void readIR() {
  // Input channel 4, trigger using ADC10SC bit , no clock division ,
  // internal ADC clock , single channel single conversions
  ADC10CTL1 = INCH_4 | SHS_0 | ADC10DIV_0 | ADC10SSEL_0 | CONSEQ_0;
  ADC10CTL0_bit.ENC = 1;                                              // Enable conversions
  ADC10CTL0_bit.ADC10SC = 1;                                          // Trigger new conversion
  while (ADC10CTL1_bit.ADC10BUSY == 1);                               // Wait for conversion
  ADC10CTL0_bit.ENC = 0;                                              // Stop Conversion
    
  irA = ADC10MEM;
    
  // Input channel 5, trigger using ADC10SC bit , no clock division ,
  // internal ADC clock , single channel single conversions
  ADC10CTL1 = INCH_5 | SHS_0 | ADC10DIV_0 | ADC10SSEL_0 | CONSEQ_0;
  ADC10CTL0_bit.ENC = 1;
  ADC10CTL0_bit.ADC10SC = 1;
  while (ADC10CTL1_bit.ADC10BUSY == 1);
  ADC10CTL0_bit.ENC = 0; 
    
  irB = ADC10MEM;
}
void checkSensors(void) {
  timerInterrupt(1);                                                   // 1 millisecond interrupt
  
  for(;;) {  
  
    readIR();
  
    if((irA > IR_THRESHOLD) && (irB < IR_THRESHOLD)) {
      action_A_Time = counter;
      //P1OUT |= LED2;
    }
  
    if((irA > IR_THRESHOLD) && (irB > IR_THRESHOLD)) {
      action_C_Time = counter;
      //P2OUT |= LED3;
    }
  
    if((irA < IR_THRESHOLD) && (irB > IR_THRESHOLD)) {
      action_D_Time = counter;
      //P2OUT |= LED4;
    } 
  
    if((action_A_Time != 0) && (action_D_Time != 0) && ((action_D_Time - action_A_Time) > 50) && ((action_D_Time - action_A_Time) < 1000) && ((action_D_Time - action_A_Time) > 0)) {          // Walking IN
      action_A_Time = 0;
      action_D_Time = 0;
      //P1OUT &= ~LED0;
      //P1OUT &= ~LED1;
      __delay_cycles(60000);
      //P1OUT |= LED1;
      if(visitors < 255) visitors++;
      if(visitors > 0) P1OUT |= RELAY;
      else P1OUT &= ~RELAY;
      __disable_interrupt();
      delay(1500);
      timerInterrupt(1);
    }
    if((action_A_Time != 0) && (action_D_Time != 0) && ((action_A_Time - action_D_Time) > 50) && ((action_A_Time - action_D_Time) < 1000) && ((action_A_Time - action_D_Time) > 0)) {          // Walking OUT
      action_A_Time = 0;
      action_D_Time = 0;
      //P1OUT &= ~LED1;
      //P1OUT &= ~LED0;
      __delay_cycles(60000);
      //P1OUT |= LED0;
      if(visitors > 0) visitors--;
      if(visitors > 0) P1OUT |= RELAY;
      else P1OUT &= ~RELAY;
      __disable_interrupt();
      delay(1500);
      timerInterrupt(1);
    }

    if(visitors < 8){
      if(visitors & BIT0) P1OUT |= LED2;
      else P1OUT &= ~LED2;
      if(visitors & BIT1) P1OUT |= LED3;
      else P1OUT &= ~LED3;
      if(visitors & BIT2) P1OUT |= LED4;
      else P1OUT &= ~LED4;
    }
    else {
      P1OUT |= LED2 + LED3 + LED4;
    }
    
    if((counter - action_A_Time) > 1000) {
      P1OUT &= ~LED2;
    }
    if((counter - action_C_Time) > 1000) {
      P2OUT &= ~LED3;
    }
    if((counter - action_D_Time) > 1000) {
      P2OUT &= ~LED4;
    }
  }
}
void timerInterrupt(usint milliseconds) {
  TACTL = MC_0;
  CCTL0 = CCIE;
  if(milliseconds <= 65) {
    TACCR0 = (usint)((milliseconds * 1000) - 1);
    TACTL = MC_1|ID_0|TASSEL_2|TACLR;
  }
  if(milliseconds > 65 && milliseconds <= 131) {
    TACCR0 = (usint)((milliseconds * 500) - 1);
    TACTL = MC_1|ID_1|TASSEL_2|TACLR;
  }
  if(milliseconds > 131 && milliseconds <= 262) {
    TACCR0 = (usint)((milliseconds * 250) - 1);
    TACTL = MC_1|ID_2|TASSEL_2|TACLR;
  }
  if(milliseconds > 262 && milliseconds <= 524) {
    TACCR0 = (usint)((milliseconds * 125) - 1);
    TACTL = MC_1|ID_3|TASSEL_2|TACLR;
  }
  __bis_SR_register(GIE);                                         // Enable global ints
}
void delay(usint timeMultiplier) {                                // Each iteration delays 1 millisecond
  TACTL = MC_0;                                                   // Stop timer
  TACCR0 = 999;                                                   // Upper limit of count for TAR
  TACTL = MC_1|ID_0|TASSEL_2|TACLR;                               // Set up and start Timer A:  "Up to CCR0" mode , no clock division, clock from SMCLK , clear timer
  for(usint m=0; m<timeMultiplier; m++) {
    while (TACTL_bit.TAIFG == 0);                                 // Wait for overflow
    TACTL_bit.TAIFG = 0;                                          // Clear overflow flag
  }
}
// Timer A0 interrupt service routine
#pragma vector=TIMERA0_VECTOR
__interrupt void Timer_A (void)
{
  //LED_OUT ^= LED0;
  counter++;
}
/*
// ADC10 interrupt service routine
#pragma vector=ADC10_VECTOR
__interrupt void ADC10_ISR(void)
{
  __bic_SR_register_on_exit(CPUOFF);        // Clear CPUOFF bit from 0(SR)
}
*/
