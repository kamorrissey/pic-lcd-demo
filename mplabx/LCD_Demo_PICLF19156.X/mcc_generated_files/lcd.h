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

#define DIG1_SYM00A      LCDDATA18bits.S07C3
#define DIG1_SYM00B      LCDDATA12bits.S07C2
#define DIG1_SYM00C      LCDDATA6bits.S07C1
#define DIG1_SYM00D      LCDDATA0bits.S06C0
#define DIG1_SYM00E      LCDDATA6bits.S06C1
#define DIG1_SYM00F      LCDDATA18bits.S06C3
#define DIG1_SYM00G      LCDDATA12bits.S06C2
#define DIG2_SYM01A      LCDDATA18bits.S02C3
#define DIG2_SYM01B      LCDDATA12bits.S02C2
#define DIG2_SYM01C      LCDDATA6bits.S02C1
#define DIG2_SYM01D      LCDDATA0bits.S03C0
#define DIG2_SYM01E      LCDDATA6bits.S03C1
#define DIG2_SYM01F      LCDDATA18bits.S03C3
#define DIG2_SYM01G      LCDDATA12bits.S03C2
#define DIG3_SYM02A      LCDDATA18bits.S00C3
#define DIG3_SYM02B      LCDDATA12bits.S00C2
#define DIG3_SYM02C      LCDDATA6bits.S00C1
#define DIG3_SYM02D      LCDDATA0bits.S01C0
#define DIG3_SYM02E      LCDDATA6bits.S01C1
#define DIG3_SYM02F      LCDDATA18bits.S01C3
#define DIG3_SYM02G      LCDDATA12bits.S01C2
#define DIG4_SYM03A      LCDDATA19bits.S08C3
#define DIG4_SYM03B      LCDDATA13bits.S08C2
#define DIG4_SYM03C      LCDDATA7bits.S08C1
#define DIG4_SYM03D      LCDDATA1bits.S09C0
#define DIG4_SYM03E      LCDDATA7bits.S09C1
#define DIG4_SYM03F      LCDDATA19bits.S09C3
#define DIG4_SYM03G      LCDDATA13bits.S09C2
#define DP1_SYM04      LCDDATA0bits.S07C0
#define DP2_SYM05      LCDDATA0bits.S02C0
#define DP3_SYM06      LCDDATA0bits.S00C0
#define COLON_SYM07      LCDDATA1bits.S08C0


/**
    Defines: To Turn on a pixel (a segment from a digit or a special character)
*/
#define DIG1_SYM00AON     DIG1_SYM00A = 1
#define DIG1_SYM00BON     DIG1_SYM00B = 1
#define DIG1_SYM00CON     DIG1_SYM00C = 1
#define DIG1_SYM00DON     DIG1_SYM00D = 1
#define DIG1_SYM00EON     DIG1_SYM00E = 1
#define DIG1_SYM00FON     DIG1_SYM00F = 1
#define DIG1_SYM00GON     DIG1_SYM00G = 1
#define DIG2_SYM01AON     DIG2_SYM01A = 1
#define DIG2_SYM01BON     DIG2_SYM01B = 1
#define DIG2_SYM01CON     DIG2_SYM01C = 1
#define DIG2_SYM01DON     DIG2_SYM01D = 1
#define DIG2_SYM01EON     DIG2_SYM01E = 1
#define DIG2_SYM01FON     DIG2_SYM01F = 1
#define DIG2_SYM01GON     DIG2_SYM01G = 1
#define DIG3_SYM02AON     DIG3_SYM02A = 1
#define DIG3_SYM02BON     DIG3_SYM02B = 1
#define DIG3_SYM02CON     DIG3_SYM02C = 1
#define DIG3_SYM02DON     DIG3_SYM02D = 1
#define DIG3_SYM02EON     DIG3_SYM02E = 1
#define DIG3_SYM02FON     DIG3_SYM02F = 1
#define DIG3_SYM02GON     DIG3_SYM02G = 1
#define DIG4_SYM03AON     DIG4_SYM03A = 1
#define DIG4_SYM03BON     DIG4_SYM03B = 1
#define DIG4_SYM03CON     DIG4_SYM03C = 1
#define DIG4_SYM03DON     DIG4_SYM03D = 1
#define DIG4_SYM03EON     DIG4_SYM03E = 1
#define DIG4_SYM03FON     DIG4_SYM03F = 1
#define DIG4_SYM03GON     DIG4_SYM03G = 1
#define DP1_SYM04ON     DP1_SYM04 = 1
#define DP2_SYM05ON     DP2_SYM05 = 1
#define DP3_SYM06ON     DP3_SYM06 = 1
#define COLON_SYM07ON     COLON_SYM07 = 1

/**
    Defines: To Turn off a pixel (a segment from a digit or a special character)
*/
#define DIG1_SYM00AOFF    DIG1_SYM00A = 0
#define DIG1_SYM00BOFF    DIG1_SYM00B = 0
#define DIG1_SYM00COFF    DIG1_SYM00C = 0
#define DIG1_SYM00DOFF    DIG1_SYM00D = 0
#define DIG1_SYM00EOFF    DIG1_SYM00E = 0
#define DIG1_SYM00FOFF    DIG1_SYM00F = 0
#define DIG1_SYM00GOFF    DIG1_SYM00G = 0
#define DIG2_SYM01AOFF    DIG2_SYM01A = 0
#define DIG2_SYM01BOFF    DIG2_SYM01B = 0
#define DIG2_SYM01COFF    DIG2_SYM01C = 0
#define DIG2_SYM01DOFF    DIG2_SYM01D = 0
#define DIG2_SYM01EOFF    DIG2_SYM01E = 0
#define DIG2_SYM01FOFF    DIG2_SYM01F = 0
#define DIG2_SYM01GOFF    DIG2_SYM01G = 0
#define DIG3_SYM02AOFF    DIG3_SYM02A = 0
#define DIG3_SYM02BOFF    DIG3_SYM02B = 0
#define DIG3_SYM02COFF    DIG3_SYM02C = 0
#define DIG3_SYM02DOFF    DIG3_SYM02D = 0
#define DIG3_SYM02EOFF    DIG3_SYM02E = 0
#define DIG3_SYM02FOFF    DIG3_SYM02F = 0
#define DIG3_SYM02GOFF    DIG3_SYM02G = 0
#define DIG4_SYM03AOFF    DIG4_SYM03A = 0
#define DIG4_SYM03BOFF    DIG4_SYM03B = 0
#define DIG4_SYM03COFF    DIG4_SYM03C = 0
#define DIG4_SYM03DOFF    DIG4_SYM03D = 0
#define DIG4_SYM03EOFF    DIG4_SYM03E = 0
#define DIG4_SYM03FOFF    DIG4_SYM03F = 0
#define DIG4_SYM03GOFF    DIG4_SYM03G = 0
#define DP1_SYM04OFF    DP1_SYM04 = 0
#define DP2_SYM05OFF    DP2_SYM05 = 0
#define DP3_SYM06OFF    DP3_SYM06 = 0
#define COLON_SYM07OFF    COLON_SYM07 = 0
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
    Displays on all the defined pixels for digit DIG1_SYM00

  @Description
    This routine displays on all the defined pixels for digit DIG1_SYM00

  @Returns
    None

  @Param
    None
  
  @Example
        <code>
        void LCD_DisplayOn_DIG1_SYM00Num();
        </code>
*/
void LCD_DisplayOn_DIG1_SYM00Num(void);

/**
  @Summary
    Displays off all the defined pixels for digit DIG1_SYM00

  @Description
    This routine displays off all the defined pixels for digit DIG1_SYM00

  @Returns
    None

  @Param
    None
  
  @Example
        <code>
        void LCD_DisplayOff_DIG1_SYM00Num();
        </code>
*/
void LCD_DisplayOff_DIG1_SYM00Num(void);    
/**
  @Summary
    Display a char for digit DIG1_SYM00

  @Description
    This routine displays a specific char for lcd's digit DIG1_SYM00

  @Returns
    None

  @Param
    The needed char
  
  @Example
        <code>
        void LCD_DIG1_SYM00Num ('5');
        </code>      
*/
void LCD_DIG1_SYM00Num (unsigned char num);
/**
  @Summary
    Displays on all the defined pixels for digit DIG2_SYM01

  @Description
    This routine displays on all the defined pixels for digit DIG2_SYM01

  @Returns
    None

  @Param
    None
  
  @Example
        <code>
        void LCD_DisplayOn_DIG2_SYM01Num();
        </code>
*/
void LCD_DisplayOn_DIG2_SYM01Num(void);

/**
  @Summary
    Displays off all the defined pixels for digit DIG2_SYM01

  @Description
    This routine displays off all the defined pixels for digit DIG2_SYM01

  @Returns
    None

  @Param
    None
  
  @Example
        <code>
        void LCD_DisplayOff_DIG2_SYM01Num();
        </code>
*/
void LCD_DisplayOff_DIG2_SYM01Num(void);    
/**
  @Summary
    Display a char for digit DIG2_SYM01

  @Description
    This routine displays a specific char for lcd's digit DIG2_SYM01

  @Returns
    None

  @Param
    The needed char
  
  @Example
        <code>
        void LCD_DIG2_SYM01Num ('5');
        </code>      
*/
void LCD_DIG2_SYM01Num (unsigned char num);
/**
  @Summary
    Displays on all the defined pixels for digit DIG3_SYM02

  @Description
    This routine displays on all the defined pixels for digit DIG3_SYM02

  @Returns
    None

  @Param
    None
  
  @Example
        <code>
        void LCD_DisplayOn_DIG3_SYM02Num();
        </code>
*/
void LCD_DisplayOn_DIG3_SYM02Num(void);

/**
  @Summary
    Displays off all the defined pixels for digit DIG3_SYM02

  @Description
    This routine displays off all the defined pixels for digit DIG3_SYM02

  @Returns
    None

  @Param
    None
  
  @Example
        <code>
        void LCD_DisplayOff_DIG3_SYM02Num();
        </code>
*/
void LCD_DisplayOff_DIG3_SYM02Num(void);    
/**
  @Summary
    Display a char for digit DIG3_SYM02

  @Description
    This routine displays a specific char for lcd's digit DIG3_SYM02

  @Returns
    None

  @Param
    The needed char
  
  @Example
        <code>
        void LCD_DIG3_SYM02Num ('5');
        </code>      
*/
void LCD_DIG3_SYM02Num (unsigned char num);
/**
  @Summary
    Displays on all the defined pixels for digit DIG4_SYM03

  @Description
    This routine displays on all the defined pixels for digit DIG4_SYM03

  @Returns
    None

  @Param
    None
  
  @Example
        <code>
        void LCD_DisplayOn_DIG4_SYM03Num();
        </code>
*/
void LCD_DisplayOn_DIG4_SYM03Num(void);

/**
  @Summary
    Displays off all the defined pixels for digit DIG4_SYM03

  @Description
    This routine displays off all the defined pixels for digit DIG4_SYM03

  @Returns
    None

  @Param
    None
  
  @Example
        <code>
        void LCD_DisplayOff_DIG4_SYM03Num();
        </code>
*/
void LCD_DisplayOff_DIG4_SYM03Num(void);    
/**
  @Summary
    Display a char for digit DIG4_SYM03

  @Description
    This routine displays a specific char for lcd's digit DIG4_SYM03

  @Returns
    None

  @Param
    The needed char
  
  @Example
        <code>
        void LCD_DIG4_SYM03Num ('5');
        </code>      
*/
void LCD_DIG4_SYM03Num (unsigned char num);
#endif /*_LCD_H*/