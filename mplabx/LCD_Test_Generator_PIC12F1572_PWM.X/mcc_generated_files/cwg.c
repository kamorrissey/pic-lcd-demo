/**
   CWG Generated Driver File
 
   @Company
     Microchip Technology Inc.
 
   @File Name
     cwg.c
 
   @Summary
     This is the generated driver implementation file for the CWG driver using PIC10 / PIC12 / PIC16 / PIC18 MCUs
 
   @Description
     This source file provides implementations for driver APIs for CWG.
     Generation Information :
         Product Revision  :  PIC10 / PIC12 / PIC16 / PIC18 MCUs - 1.81.7
         Device            :  PIC12F1572
         Driver Version    :  2.01
     The generated drivers are tested against the following:
         Compiler          :  XC8 2.31 and above or later
         MPLAB             :  MPLAB X 5.45
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
 
 /**
   Section: Included Files
 */

#include <xc.h>
#include "cwg.h"

/**
  Section: CWG APIs
*/

void CWG_Initialize(void)
{
    // Set the CWG to the options selected in PIC10 / PIC12 / PIC16 / PIC18 MCUs
    // G1IS PWM1OUT; G1ASDLA inactive_state; G1ASDLB inactive_state; 
    CWG1CON1 = 0x02;

    // G1ASDSC1 disabled; G1ARSEN disabled; G1ASDSFLT disabled; G1ASE no_auto_shutdown; 
    CWG1CON2 = 0x00;

    // CWG1DBR 0_counts; 
    CWG1DBR = 0x00;

    // CWG1DBF 0_counts; 
    CWG1DBF = 0x00;

    // G1EN disabled; G1POLB normal_polarity; G1OEB enabled; G1POLA normal_polarity; G1OEA enabled; G1CS0 HFINTOSC; 
    CWG1CON0 = 0x61;

}

void CWG_LoadRiseDeadbandCount(uint8_t dutyValue)
{
    CWG1DBR = dutyValue;
}

void CWG_LoadFallDeadbandCount(uint8_t dutyValue)
{
    CWG1DBF = dutyValue;
}

void CWG_AutoShutdownEventSet()
{
    CWG1CON2bits.G1ASE = 1;
}

void CWG_AutoShutdownEventClear()
{
    CWG1CON2bits.G1ASE = 0;
}
/**
 End of File
*/
