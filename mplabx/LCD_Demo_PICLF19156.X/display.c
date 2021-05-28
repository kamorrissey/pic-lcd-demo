#include "display.h"
#include "mcc_generated_files/lcd.h"

void DISPLAY_AllPixels_On(void)
{
    LCD_DisplayOn_DIG1_SYM00Num(); // digit 1 on
    LCD_DisplayOn_DIG2_SYM01Num(); // digit 2 on
    LCD_DisplayOn_DIG3_SYM02Num(); // digit 3 on
    LCD_DisplayOn_DIG4_SYM03Num(); // digit 4 on
    DP1_SYM04ON; // decimal point 1 on
    DP2_SYM05ON; // decimal point 2 on
    DP3_SYM06ON; // decimal point 3 on
    COLON_SYM07ON; // colon on
}

void DISPLAY_AllPixels_Off(void)
{
    LCD_DisplayOff_DIG1_SYM00Num(); // digit 1 off
    LCD_DisplayOff_DIG2_SYM01Num(); // digit 2 off
    LCD_DisplayOff_DIG3_SYM02Num(); // digit 3 off
    LCD_DisplayOff_DIG4_SYM03Num(); // digit 4 off
    DP1_SYM04OFF; // decimal point 1 off
    DP2_SYM05OFF; // decimal point 2 off
    DP3_SYM06OFF; // decimal point 3 off
    COLON_SYM07OFF; // colon off
}

void DISPLAY_DP1_On(void)
{
    DP1_SYM04ON;
}

void DISPLAY_DP1_Off(void)
{
    DP1_SYM04OFF;
}

void DISPLAY_DP2_On(void)
{
    DP2_SYM05ON;
}

void DISPLAY_DP2_Off(void)
{
    DP2_SYM05OFF;
}

void DISPLAY_DP3_On(void)
{
    DP3_SYM06ON;
}

void DISPLAY_DP3_Off(void)
{
    DP3_SYM06OFF;
}

void DISPLAY_COLON_On(void)
{
    COLON_SYM07ON;
}

void DISPLAY_COLON_Off(void)
{
    COLON_SYM07OFF;
}

unsigned char DISPLAY_CharToSegments(unsigned char ch)
{
    switch (ch)
    {
    case ' ':
    default:
        return 0;
    case '0':
        return ( SEG_A_BIT | SEG_B_BIT | SEG_C_BIT | SEG_D_BIT | SEG_E_BIT | SEG_F_BIT );
    case '1':
        return ( SEG_B_BIT | SEG_C_BIT );
    case '2':
        return ( SEG_A_BIT | SEG_B_BIT | SEG_D_BIT | SEG_E_BIT | SEG_G_BIT );
    case '3':
        return ( SEG_A_BIT | SEG_B_BIT | SEG_C_BIT | SEG_D_BIT | SEG_G_BIT );
    case '4': 
        return ( SEG_B_BIT | SEG_C_BIT | SEG_F_BIT | SEG_G_BIT );
    case '5':
        return ( SEG_A_BIT | SEG_C_BIT | SEG_D_BIT | SEG_F_BIT | SEG_G_BIT );
    case '6':
        return ( SEG_A_BIT | SEG_C_BIT | SEG_D_BIT | SEG_E_BIT | SEG_F_BIT | SEG_G_BIT );
    case '7':
        return ( SEG_A_BIT | SEG_B_BIT | SEG_C_BIT );
    case '8':
        return ( SEG_A_BIT | SEG_B_BIT | SEG_C_BIT | SEG_D_BIT | SEG_E_BIT | SEG_F_BIT | SEG_G_BIT );
    case '9':
        return ( SEG_A_BIT | SEG_B_BIT | SEG_C_BIT | SEG_D_BIT | SEG_F_BIT | SEG_G_BIT );
    case 'b':
    case 'L':
    case 'o':
    case 'H':
    case 'i':
    case 'r':
    case 'd':
    case 'Y':
        return ( SEG_A_BIT | SEG_B_BIT | SEG_C_BIT | SEG_D_BIT | SEG_E_BIT | SEG_F_BIT | SEG_G_BIT );
        break;
    }        
}

void DISPLAY_DIG1_Segments(unsigned char segs)
{
    if ( segs & SEG_A_BIT )
    {
        DIG1_SYM00AON;
    }
    else
    {
        DIG1_SYM00AOFF;
    }
    if ( segs & SEG_B_BIT )
    {
        DIG1_SYM00BON;
    }
    else
    {
        DIG1_SYM00BOFF;
    }
    if ( segs & SEG_C_BIT )
    {
        DIG1_SYM00CON;
    }
    else
    {
        DIG1_SYM00COFF;
    }
    if ( segs & SEG_D_BIT )
    {
        DIG1_SYM00DON;
    }
    else
    {
        DIG1_SYM00DOFF;
    }
    if ( segs & SEG_E_BIT )
    {
        DIG1_SYM00EON;
    }
    else
    {
        DIG1_SYM00EOFF;
    }
    if ( segs & SEG_F_BIT )
    {
        DIG1_SYM00FON;
    }
    else
    {
        DIG1_SYM00FOFF;
    }
    if ( segs & SEG_G_BIT )
    {
        DIG1_SYM00GON;
    }
    else
    {
        DIG1_SYM00GOFF;
    }
}

void DISPLAY_DIG2_Segments(unsigned char segs)
{
    if ( segs & SEG_A_BIT )
    {
        DIG2_SYM01AON;
    }
    else
    {
        DIG2_SYM01AOFF;
    }
    if ( segs & SEG_B_BIT )
    {
        DIG2_SYM01BON;
    }
    else
    {
        DIG2_SYM01BOFF;
    }
    if ( segs & SEG_C_BIT )
    {
        DIG2_SYM01CON;
    }
    else
    {
        DIG2_SYM01COFF;
    }
    if ( segs & SEG_D_BIT )
    {
        DIG2_SYM01DON;
    }
    else
    {
        DIG2_SYM01DOFF;
    }
    if ( segs & SEG_E_BIT )
    {
        DIG2_SYM01EON;
    }
    else
    {
        DIG2_SYM01EOFF;
    }
    if ( segs & SEG_F_BIT )
    {
        DIG2_SYM01FON;
    }
    else
    {
        DIG2_SYM01FOFF;
    }
    if ( segs & SEG_G_BIT )
    {
        DIG2_SYM01GON;
    }
    else
    {
        DIG2_SYM01GOFF;
    }
}

void DISPLAY_DIG3_Segments(unsigned char segs)
{
    if ( segs & SEG_A_BIT )
    {
        DIG3_SYM02AON;
    }
    else
    {
        DIG3_SYM02AOFF;
    }
    if ( segs & SEG_B_BIT )
    {
        DIG3_SYM02BON;
    }
    else
    {
        DIG3_SYM02BOFF;
    }
    if ( segs & SEG_C_BIT )
    {
        DIG3_SYM02CON;
    }
    else
    {
        DIG3_SYM02COFF;
    }
    if ( segs & SEG_D_BIT )
    {
        DIG3_SYM02DON;
    }
    else
    {
        DIG3_SYM02DOFF;
    }
    if ( segs & SEG_E_BIT )
    {
        DIG3_SYM02EON;
    }
    else
    {
        DIG3_SYM02EOFF;
    }
    if ( segs & SEG_F_BIT )
    {
        DIG3_SYM02FON;
    }
    else
    {
        DIG3_SYM02FOFF;
    }
    if ( segs & SEG_G_BIT )
    {
        DIG3_SYM02GON;
    }
    else
    {
        DIG3_SYM02GOFF;
    }
}

void DISPLAY_DIG4_Segments(unsigned char segs)
{
    if ( segs & SEG_A_BIT )
    {
        DIG4_SYM03AON;
    }
    else
    {
        DIG4_SYM03AOFF;
    }
    if ( segs & SEG_B_BIT )
    {
        DIG4_SYM03BON;
    }
    else
    {
        DIG4_SYM03BOFF;
    }
    if ( segs & SEG_C_BIT )
    {
        DIG4_SYM03CON;
    }
    else
    {
        DIG4_SYM03COFF;
    }
    if ( segs & SEG_D_BIT )
    {
        DIG4_SYM03DON;
    }
    else
    {
        DIG4_SYM03DOFF;
    }
    if ( segs & SEG_E_BIT )
    {
        DIG4_SYM03EON;
    }
    else
    {
        DIG4_SYM03EOFF;
    }
    if ( segs & SEG_F_BIT )
    {
        DIG4_SYM03FON;
    }
    else
    {
        DIG4_SYM03FOFF;
    }
    if ( segs & SEG_G_BIT )
    {
        DIG4_SYM03GON;
    }
    else
    {
        DIG4_SYM03GOFF;
    }
}

void DISPLAY_ShowDemoTemp(void)
{
    DISPLAY_DIG1_Segments(DISPLAY_CharToSegments(' '));
    DISPLAY_DIG2_Segments(DISPLAY_CharToSegments('9'));
    DISPLAY_DIG3_Segments(DISPLAY_CharToSegments('8'));
    DISPLAY_DIG4_Segments(DISPLAY_CharToSegments('6'));
    DISPLAY_DP1_Off();
    DISPLAY_DP2_Off();
    DISPLAY_DP3_On();
    DISPLAY_COLON_Off();
}

void DISPLAY_ShowNumber(int16_t value, uint8_t decimal_places)
{
    if ( value < 0 || 9999 < value )
    {
        return;
    }
    if ( decimal_places < 0 || 3 < decimal_places )
    {
        return;
    }
    int16_t temp_val = value;
    uint8_t d4 = temp_val % 10;
    temp_val /= 10;
    uint8_t d3 = temp_val % 10;
    temp_val /= 10;
    uint8_t d2 = temp_val % 10;
    temp_val /= 10;
    uint8_t d1 = temp_val;
    
    uint8_t can_blank = 1;
    if (d1 == 0 && decimal_places <= 2 && can_blank)
    {
        LCD_DisplayOff_DIG1_SYM00Num();
    }
    else
    {
        LCD_DIG1_SYM00Num(d1);
        can_blank = 0;
    }
    if (d2 == 0 && decimal_places <= 1 && can_blank)
    {
        LCD_DisplayOff_DIG2_SYM01Num();
    }
    else
    {
        LCD_DIG2_SYM01Num(d2);
        can_blank = 0;
    }
    if (d3 == 0 && decimal_places == 0 && can_blank)
    {
        LCD_DisplayOff_DIG3_SYM02Num();
    }
    else
    {
        LCD_DIG3_SYM02Num(d3);
    }
    LCD_DIG4_SYM03Num(d4);
    
    DISPLAY_COLON_Off();
    switch (decimal_places)
    {
        default:
        case 0:
            DISPLAY_DP1_Off();
            DISPLAY_DP2_Off();
            DISPLAY_DP3_Off();
            break;
        case 1:
            DISPLAY_DP1_Off();
            DISPLAY_DP2_Off();
            DISPLAY_DP3_On();
            break;
        case 2:
            DISPLAY_DP1_Off();
            DISPLAY_DP2_On();
            DISPLAY_DP3_Off();
            break;
        case 3:
            DISPLAY_DP1_On();
            DISPLAY_DP2_Off();
            DISPLAY_DP3_Off();
            break;
    }
}
