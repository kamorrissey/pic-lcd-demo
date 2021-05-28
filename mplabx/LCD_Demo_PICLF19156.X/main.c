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
#include "display.h"

float UTIL_SupplyVoltage(void);


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
        LED_SetHigh();
        float supply_voltage = UTIL_SupplyVoltage();
        DISPLAY_ShowNumber((int16_t)(supply_voltage*100.0 + 0.5), 2);
        LED_SetLow();
        __delay_ms(1000);
#if 0
        // Blink LED and LCD
        LED_SetHigh();
        DISPLAY_AllPixels_On();
        __delay_ms(1000);
        
        LED_SetLow();
        DISPLAY_AllPixels_Off();
        __delay_ms(1000);
        
        LED_SetHigh();
        DISPLAY_ShowDemoTemp();
        __delay_ms(1000);
        
        LED_SetLow();
        DISPLAY_AllPixels_Off();
        __delay_ms(1000);        
        
        LED_SetHigh();
        DISPLAY_ShowNumber(1, 0);
        __delay_ms(1000);
        
        LED_SetLow();
        DISPLAY_AllPixels_Off();
        __delay_ms(1000);        
        
        LED_SetHigh();
        DISPLAY_ShowNumber(1, 1);
        __delay_ms(1000);
        
        LED_SetLow();
        DISPLAY_AllPixels_Off();
        __delay_ms(1000);        
        
        LED_SetHigh();
        DISPLAY_ShowNumber(1, 2);
        __delay_ms(1000);
        
        LED_SetLow();
        DISPLAY_AllPixels_Off();
        __delay_ms(1000);        
        
        LED_SetHigh();
        DISPLAY_ShowNumber(1, 3);
        __delay_ms(1000);
        
        LED_SetLow();
        DISPLAY_AllPixels_Off();
        __delay_ms(1000);
#endif        
    }
}

float UTIL_SupplyVoltage(void)
{
    ADCC_StartConversion(channel_FVR_Buffer1);
    while(!ADCC_IsConversionDone());
    uint16_t adc = ADCC_GetConversionResult();
    float supply_voltage = (float)( 1.024 * 4096.0 / adc );
    return supply_voltage;
}

/**
 End of File
*/