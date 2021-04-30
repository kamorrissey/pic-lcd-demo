/**
  LCD Generated Driver API Header File
  
  @Company
    Microchip Technology Inc.

  @File Name
    lcd.h
	
  @Summary
    This is the generated header file for the LCD driver using PIC10 / PIC12 / PIC16 / PIC18 MCUs

  @Description
    This header file provides APIs for driver for LCD.
    Generation Information :
        Product Revision  :  PIC10 / PIC12 / PIC16 / PIC18 MCUs - 1.81.7
        Device            :  PIC16LF19156
        Driver Version    :  2.01
    The generated drivers are tested against the following:
        Compiler          :  XC8 2.31 and above
        MPLAB 	          :  MPLAB X 5.45
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

#ifndef LCD_H
#define LCD_H

/**
  Section: Included Files
*/

#include <xc.h>
#include <stdbool.h>
    
/**
    Section: Defines
*/ 
   
/**
    Defines: the segments pins
*/
#define SEG00      LCDSE0bits.SE00
#define SEG01      LCDSE0bits.SE01
#define SEG02      LCDSE0bits.SE02
#define SEG03      LCDSE0bits.SE03
#define SEG04      LCDSE0bits.SE04
#define SEG05      LCDSE0bits.SE05
#define SEG06      LCDSE0bits.SE06
#define SEG07      LCDSE0bits.SE07
#define SEG08      LCDSE1bits.SE08
#define SEG09      LCDSE1bits.SE09
#define SEG10      LCDSE1bits.SE10
#define SEG11      LCDSE1bits.SE11
#define SEG12      LCDSE1bits.SE12
#define SEG13      LCDSE1bits.SE13
#define SEG14      LCDSE1bits.SE14
#define SEG15      LCDSE1bits.SE15
#define SEG16      LCDSE2bits.SE16
#define SEG17      LCDSE2bits.SE17
#define SEG18      LCDSE2bits.SE18
#define SEG19      LCDSE2bits.SE19
#define SEG20      LCDSE2bits.SE20
#define SEG21      LCDSE2bits.SE21
#define SEG22      LCDSE2bits.SE22
#define SEG23      LCDSE2bits.SE23
#define SEG24      LCDSE3bits.SE24
#define SEG25      LCDSE3bits.SE25
#define SEG26      LCDSE3bits.SE26
#define SEG27      LCDSE3bits.SE27
#define SEG28      LCDSE3bits.SE28
#define SEG29      LCDSE3bits.SE29
#define SEG30      LCDSE3bits.SE30
#define SEG31      LCDSE3bits.SE31
#define SEG32      LCDSE4bits.SE32
#define SEG33      LCDSE4bits.SE33
#define SEG34      LCDSE4bits.SE34
#define SEG35      LCDSE4bits.SE35
#define SEG36      LCDSE4bits.SE36
#define SEG37      LCDSE4bits.SE37
#define SEG38      LCDSE4bits.SE38
#define SEG39      LCDSE4bits.SE39
#define SEG40      LCDSE5bits.SE40
#define SEG41      LCDSE5bits.SE41
#define SEG42      LCDSE5bits.SE42
#define SEG43      LCDSE5bits.SE43
#define SEG44      LCDSE5bits.SE44
#define SEG45      LCDSE5bits.SE45

#define MACRO_SYM00A      LCDDATA18bits.S07C3
#define MACRO_SYM00B      LCDDATA12bits.S07C2
#define MACRO_SYM00C      LCDDATA6bits.S07C1
#define MACRO_SYM00D      LCDDATA0bits.S06C0
#define MACRO_SYM00E      LCDDATA6bits.S06C1
#define MACRO_SYM00F      LCDDATA18bits.S06C3
#define MACRO_SYM00G      LCDDATA12bits.S06C2
#define MACRO_SYM01A      LCDDATA18bits.S02C3
#define MACRO_SYM01B      LCDDATA12bits.S02C2
#define MACRO_SYM01C      LCDDATA6bits.S02C1
#define MACRO_SYM01D      LCDDATA0bits.S03C0
#define MACRO_SYM01E      LCDDATA6bits.S03C1
#define MACRO_SYM01F      LCDDATA18bits.S03C3
#define MACRO_SYM01G      LCDDATA12bits.S03C2
#define MACRO_SYM02A      LCDDATA18bits.S00C3
#define MACRO_SYM02B      LCDDATA12bits.S00C2
#define MACRO_SYM02C      LCDDATA6bits.S00C1
#define MACRO_SYM02D      LCDDATA0bits.S01C0
#define MACRO_SYM02E      LCDDATA6bits.S01C1
#define MACRO_SYM02F      LCDDATA18bits.S01C3
#define MACRO_SYM02G      LCDDATA12bits.S01C2
#define MACRO_SYM03A      LCDDATA19bits.S08C3
#define MACRO_SYM03B      LCDDATA13bits.S08C2
#define MACRO_SYM03C      LCDDATA7bits.S08C1
#define MACRO_SYM03D      LCDDATA1bits.S09C0
#define MACRO_SYM03E      LCDDATA7bits.S09C1
#define MACRO_SYM03F      LCDDATA19bits.S09C3
#define MACRO_SYM03G      LCDDATA13bits.S09C2
#define MACRO_SYM04      LCDDATA0bits.S07C0
#define MACRO_SYM05      LCDDATA0bits.S02C0
#define MACRO_SYM06      LCDDATA0bits.S00C0
#define MACRO_SYM07      LCDDATA1bits.S08C0


/**
    Defines: To Turn on a pixel (a segment from a digit or a special character)
*/
#define MACRO_SYM00AON     MACRO_SYM00A = 1
#define MACRO_SYM00BON     MACRO_SYM00B = 1
#define MACRO_SYM00CON     MACRO_SYM00C = 1
#define MACRO_SYM00DON     MACRO_SYM00D = 1
#define MACRO_SYM00EON     MACRO_SYM00E = 1
#define MACRO_SYM00FON     MACRO_SYM00F = 1
#define MACRO_SYM00GON     MACRO_SYM00G = 1
#define MACRO_SYM01AON     MACRO_SYM01A = 1
#define MACRO_SYM01BON     MACRO_SYM01B = 1
#define MACRO_SYM01CON     MACRO_SYM01C = 1
#define MACRO_SYM01DON     MACRO_SYM01D = 1
#define MACRO_SYM01EON     MACRO_SYM01E = 1
#define MACRO_SYM01FON     MACRO_SYM01F = 1
#define MACRO_SYM01GON     MACRO_SYM01G = 1
#define MACRO_SYM02AON     MACRO_SYM02A = 1
#define MACRO_SYM02BON     MACRO_SYM02B = 1
#define MACRO_SYM02CON     MACRO_SYM02C = 1
#define MACRO_SYM02DON     MACRO_SYM02D = 1
#define MACRO_SYM02EON     MACRO_SYM02E = 1
#define MACRO_SYM02FON     MACRO_SYM02F = 1
#define MACRO_SYM02GON     MACRO_SYM02G = 1
#define MACRO_SYM03AON     MACRO_SYM03A = 1
#define MACRO_SYM03BON     MACRO_SYM03B = 1
#define MACRO_SYM03CON     MACRO_SYM03C = 1
#define MACRO_SYM03DON     MACRO_SYM03D = 1
#define MACRO_SYM03EON     MACRO_SYM03E = 1
#define MACRO_SYM03FON     MACRO_SYM03F = 1
#define MACRO_SYM03GON     MACRO_SYM03G = 1
#define MACRO_SYM04ON     MACRO_SYM04 = 1
#define MACRO_SYM05ON     MACRO_SYM05 = 1
#define MACRO_SYM06ON     MACRO_SYM06 = 1
#define MACRO_SYM07ON     MACRO_SYM07 = 1

/**
    Defines: To Turn off a pixel (a segment from a digit or a special character)
*/
#define MACRO_SYM00AOFF    MACRO_SYM00A = 0
#define MACRO_SYM00BOFF    MACRO_SYM00B = 0
#define MACRO_SYM00COFF    MACRO_SYM00C = 0
#define MACRO_SYM00DOFF    MACRO_SYM00D = 0
#define MACRO_SYM00EOFF    MACRO_SYM00E = 0
#define MACRO_SYM00FOFF    MACRO_SYM00F = 0
#define MACRO_SYM00GOFF    MACRO_SYM00G = 0
#define MACRO_SYM01AOFF    MACRO_SYM01A = 0
#define MACRO_SYM01BOFF    MACRO_SYM01B = 0
#define MACRO_SYM01COFF    MACRO_SYM01C = 0
#define MACRO_SYM01DOFF    MACRO_SYM01D = 0
#define MACRO_SYM01EOFF    MACRO_SYM01E = 0
#define MACRO_SYM01FOFF    MACRO_SYM01F = 0
#define MACRO_SYM01GOFF    MACRO_SYM01G = 0
#define MACRO_SYM02AOFF    MACRO_SYM02A = 0
#define MACRO_SYM02BOFF    MACRO_SYM02B = 0
#define MACRO_SYM02COFF    MACRO_SYM02C = 0
#define MACRO_SYM02DOFF    MACRO_SYM02D = 0
#define MACRO_SYM02EOFF    MACRO_SYM02E = 0
#define MACRO_SYM02FOFF    MACRO_SYM02F = 0
#define MACRO_SYM02GOFF    MACRO_SYM02G = 0
#define MACRO_SYM03AOFF    MACRO_SYM03A = 0
#define MACRO_SYM03BOFF    MACRO_SYM03B = 0
#define MACRO_SYM03COFF    MACRO_SYM03C = 0
#define MACRO_SYM03DOFF    MACRO_SYM03D = 0
#define MACRO_SYM03EOFF    MACRO_SYM03E = 0
#define MACRO_SYM03FOFF    MACRO_SYM03F = 0
#define MACRO_SYM03GOFF    MACRO_SYM03G = 0
#define MACRO_SYM04OFF    MACRO_SYM04 = 0
#define MACRO_SYM05OFF    MACRO_SYM05 = 0
#define MACRO_SYM06OFF    MACRO_SYM06 = 0
#define MACRO_SYM07OFF    MACRO_SYM07 = 0
/**
  Section: Interface Routines
*/

/**
  @Summary
    Initializes the LCD module

  @Description
    This routine should only be called once during system initialization.    

  @Preconditions
    None.

  @Param
    None.

  @Returns
    None.

  @Example
    <code>
    LCD_Initialize();
    </code>     
*/
void LCD_Initialize(void);

/**
    @Summary
        Enable LCD module
        
    @Description
        This routine enables LCD module.   
        
    @Preconditions
        None.

    @Param
        None.

    @Returns
        None.
      
    @Example
        <code>
        LCD_Enable();
        </code>     
*/
void LCD_Enable (void);

/**
    @Summary
        Disable LCD module
        
    @Description
        This routine disables LCD module.   
        
    @Preconditions
        None.

    @Param
        None.

    @Returns
        None.
      
    @Example
        <code>
        LCD_Disable();
        </code>     
*/
void LCD_Disable (void);

/**
    @Summary
        Enable sleep mode for LCD module
        
    @Description
        This routine enables the sleep mode for LCD module.
        
    @Preconditions
        None.

    @Param
        None.

    @Returns
        None.
      
    @Example
        <code>
        LCD_EnableSleepMode();
        </code>     
*/
void LCD_EnableSleepMode (void);

/**
    @Summary
        Disable sleep mode for LCD module
        
    @Description
        This routine disables the sleep mode for LCD module.
        
    @Preconditions
        None.

    @Param
        None.

    @Returns
        None.
      
    @Example
        <code>
        LCD_DisableSleepMode();
        </code>     
*/
void LCD_DisableSleepMode (void);

/**
    @Summary
        Set contrast for LCD module
        
    @Description
        This routine set the contrast value for LCD module.
        
    @Preconditions
       If The internal reference source bit is 0, then the internal LCDcontrast control is unconnected.

    @Param
        Pass the contrast bits value.
        This range for this value is specific for each device.

    @Returns
        None.
      
    @Example
        <code>
        LCD_SetContrast (value);
        </code>     
*/
void LCD_SetContrast (unsigned int value);

/**
    @Summary
        Set LCD module power mode for A interval.
        
    @Description
        This routine set the LCD module reference ladder A time
        power control.
        
    @Preconditions
        None.

    @Param
        Pass the power bits value.

    @Returns
        None.
      
    @Example
        <code>
        LCD_SetIntervalAPowerMode (value);
        </code>     
*/
void LCD_SetIntervalAPowerMode (unsigned int value);

/**
    @Summary
        Set LCD module power mode for B interval.
        
    @Description
        This routine set the LCD module reference ladder B time
        power control.
        
    @Preconditions
        None.

    @Param
        Pass the power bits value.

    @Returns
        None.
      
    @Example
        <code>
        LCD_SetIntervalBPowerMode (value);
        </code>     
*/
void LCD_SetIntervalBPowerMode (unsigned int value);

/**
    @Summary
        Set LCD module power distribution.
        
    @Description
        This routine set the LCD module power distribution during
        waveform intervals.
        
    @Preconditions
        None.

    @Param
        Pass the power bits value.

    @Returns
        None.
      
    @Example
        <code>
        LCD_SetPowerDistribution (value);
        </code>     
*/
void LCD_SetPowerDistribution (unsigned int value);

/**
    @Summary
        Returns true if the LCD module is active, otherwise false.
        
    @Description
        This routine is used to determine if the LCD module is active.
        
    @Preconditions
        None.

    @Param
        Node.

    @Returns
        true  - If module is active.
        false - If module is not active.
      
    @Example
        <code>
         LCD_Initialize();
         while(!LCD_IsActive()); // wait until the module is available
        </code>     
*/
bool LCD_IsActive (void);



/**
  @Summary
    Displays on all the defined pixels for digit MACRO_SYM00

  @Description
    This routine displays on all the defined pixels for digit MACRO_SYM00

  @Returns
    None

  @Param
    None
  
  @Example
        <code>
        void LCD_DisplayOn_MACRO_SYM00Num();
        </code>
*/
void LCD_DisplayOn_MACRO_SYM00Num();

/**
  @Summary
    Displays off all the defined pixels for digit MACRO_SYM00

  @Description
    This routine displays off all the defined pixels for digit MACRO_SYM00

  @Returns
    None

  @Param
    None
  
  @Example
        <code>
        void LCD_DisplayOff_MACRO_SYM00Num();
        </code>
*/
void LCD_DisplayOff_MACRO_SYM00Num();    
/**
  @Summary
    Display a char for digit MACRO_SYM00

  @Description
    This routine displays a specific char for lcd's digit MACRO_SYM00

  @Returns
    None

  @Param
    The needed char
  
  @Example
        <code>
        void LCD_MACRO_SYM00Num ('5');
        </code>      
*/
void LCD_MACRO_SYM00Num (unsigned char num);
/**
  @Summary
    Displays on all the defined pixels for digit MACRO_SYM01

  @Description
    This routine displays on all the defined pixels for digit MACRO_SYM01

  @Returns
    None

  @Param
    None
  
  @Example
        <code>
        void LCD_DisplayOn_MACRO_SYM01Num();
        </code>
*/
void LCD_DisplayOn_MACRO_SYM01Num();

/**
  @Summary
    Displays off all the defined pixels for digit MACRO_SYM01

  @Description
    This routine displays off all the defined pixels for digit MACRO_SYM01

  @Returns
    None

  @Param
    None
  
  @Example
        <code>
        void LCD_DisplayOff_MACRO_SYM01Num();
        </code>
*/
void LCD_DisplayOff_MACRO_SYM01Num();    
/**
  @Summary
    Display a char for digit MACRO_SYM01

  @Description
    This routine displays a specific char for lcd's digit MACRO_SYM01

  @Returns
    None

  @Param
    The needed char
  
  @Example
        <code>
        void LCD_MACRO_SYM01Num ('5');
        </code>      
*/
void LCD_MACRO_SYM01Num (unsigned char num);
/**
  @Summary
    Displays on all the defined pixels for digit MACRO_SYM02

  @Description
    This routine displays on all the defined pixels for digit MACRO_SYM02

  @Returns
    None

  @Param
    None
  
  @Example
        <code>
        void LCD_DisplayOn_MACRO_SYM02Num();
        </code>
*/
void LCD_DisplayOn_MACRO_SYM02Num();

/**
  @Summary
    Displays off all the defined pixels for digit MACRO_SYM02

  @Description
    This routine displays off all the defined pixels for digit MACRO_SYM02

  @Returns
    None

  @Param
    None
  
  @Example
        <code>
        void LCD_DisplayOff_MACRO_SYM02Num();
        </code>
*/
void LCD_DisplayOff_MACRO_SYM02Num();    
/**
  @Summary
    Display a char for digit MACRO_SYM02

  @Description
    This routine displays a specific char for lcd's digit MACRO_SYM02

  @Returns
    None

  @Param
    The needed char
  
  @Example
        <code>
        void LCD_MACRO_SYM02Num ('5');
        </code>      
*/
void LCD_MACRO_SYM02Num (unsigned char num);
/**
  @Summary
    Displays on all the defined pixels for digit MACRO_SYM03

  @Description
    This routine displays on all the defined pixels for digit MACRO_SYM03

  @Returns
    None

  @Param
    None
  
  @Example
        <code>
        void LCD_DisplayOn_MACRO_SYM03Num();
        </code>
*/
void LCD_DisplayOn_MACRO_SYM03Num();

/**
  @Summary
    Displays off all the defined pixels for digit MACRO_SYM03

  @Description
    This routine displays off all the defined pixels for digit MACRO_SYM03

  @Returns
    None

  @Param
    None
  
  @Example
        <code>
        void LCD_DisplayOff_MACRO_SYM03Num();
        </code>
*/
void LCD_DisplayOff_MACRO_SYM03Num();    
/**
  @Summary
    Display a char for digit MACRO_SYM03

  @Description
    This routine displays a specific char for lcd's digit MACRO_SYM03

  @Returns
    None

  @Param
    The needed char
  
  @Example
        <code>
        void LCD_MACRO_SYM03Num ('5');
        </code>      
*/
void LCD_MACRO_SYM03Num (unsigned char num);
#endif /*_LCD_H*/