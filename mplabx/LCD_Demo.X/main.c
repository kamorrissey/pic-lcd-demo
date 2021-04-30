/**
  Generated Main Source File

  Company:
    Microchip Technology Inc.

  File Name:
    main.c

  Summary:
    This is the main file generated using PIC10 / PIC12 / PIC16 / PIC18 MCUs

  Description:
    This header file provides implementations for driver APIs for all modules selected in the GUI.
    Generation Information :
        Product Revision  :  PIC10 / PIC12 / PIC16 / PIC18 MCUs - 1.81.7
        Device            :  PIC16LF19156
        Driver Version    :  2.00
*/

/*
    (c) 2018 Microchip Technology Inc. and its subsidiaries. 
    
    Subject to your compliance with these terms, you may use Microchip software and any 
    derivatives exclusively with Microchip products. It is your responsibility to comply with third party 
    license terms applicable to your use of third party software (including open source software) that 
    may accompany Microchip software.
    
    THIS SOFTWARE IS SUPPLIED BY MICROCHIP "AS IS". NO WARRANTIES, WHETHER 
    EXPRESS, IMPLIED OR STATUTORY, APPLY TO THIS SOFTWARE, INCLUDING ANY 
    IMPLIED WARRANTIES OF NON-INFRINGEMENT, MERCHANTABILITY, AND FITNESS 
    FOR A PARTICULAR PURPOSE.
    
    IN NO EVENT WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE, 
    INCIDENTAL OR CONSEQUENTIAL LOSS, DAMAGE, COST OR EXPENSE OF ANY KIND 
    WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF MICROCHIP 
    HAS BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE FORESEEABLE. TO 
    THE FULLEST EXTENT ALLOWED BY LAW, MICROCHIP'S TOTAL LIABILITY ON ALL 
    CLAIMS IN ANY WAY RELATED TO THIS SOFTWARE WILL NOT EXCEED THE AMOUNT 
    OF FEES, IF ANY, THAT YOU HAVE PAID DIRECTLY TO MICROCHIP FOR THIS 
    SOFTWARE.
*/

#include "mcc_generated_files/mcc.h"

/* Forward References */
void DISPLAY_AllSegments_On(void);
void DISPLAY_AllSegments_Off(void);


/*
                         Main application
 */
void main(void)
{
    // initialize the device
    SYSTEM_Initialize();

    // When using interrupts, you need to set the Global and Peripheral Interrupt Enable bits
    // Use the following macros to:

    // Enable the Global Interrupts
    //INTERRUPT_GlobalInterruptEnable();

    // Enable the Peripheral Interrupts
    //INTERRUPT_PeripheralInterruptEnable();

    // Disable the Global Interrupts
    //INTERRUPT_GlobalInterruptDisable();

    // Disable the Peripheral Interrupts
    //INTERRUPT_PeripheralInterruptDisable();

    while (1)
    {
        // Blink LED and all pixels of LCD 1/2 sec on, 1/2 sec off
        RC1 = 1;
        DISPLAY_AllSegments_On();
        __delay_ms(500);
        RC1 = 0;
        DISPLAY_AllSegments_Off();
        __delay_ms(500);
    }
}

void DISPLAY_AllSegments_On(void)
{
    LCD_DisplayOn_MACRO_SYM00Num(); // digit 1 on
    LCD_DisplayOn_MACRO_SYM01Num(); // digit 2 on
    LCD_DisplayOn_MACRO_SYM02Num(); // digit 3 on
    LCD_DisplayOn_MACRO_SYM03Num(); // digit 4 on
    MACRO_SYM04ON; // decimal point 1 on
    MACRO_SYM05ON; // decimal point 2 on
    MACRO_SYM06ON; // decimal point 3 on
    MACRO_SYM07ON; // colon on
}

void DISPLAY_AllSegments_Off(void)
{
    LCD_DisplayOff_MACRO_SYM00Num(); // digit 1 off
    LCD_DisplayOff_MACRO_SYM01Num(); // digit 2 off
    LCD_DisplayOff_MACRO_SYM02Num(); // digit 3 off
    LCD_DisplayOff_MACRO_SYM03Num(); // digit 4 off
    MACRO_SYM04OFF; // decimal point 1 off
    MACRO_SYM05OFF; // decimal point 2 off
    MACRO_SYM06OFF; // decimal point 3 off
    MACRO_SYM07OFF; // colon off
}
/**
 End of File
*/