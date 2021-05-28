/* 
 * File:   display.h
 * Author: kamor
 *
 * Created on May 23, 2021, 9:06 AM
 */

#ifndef DISPLAY_H
#define	DISPLAY_H

#ifdef	__cplusplus
extern "C" {
#endif
    
#include <stdint.h>
    
enum segment_bits
{
    SEG_A_BIT = 0b00000001,
    SEG_B_BIT = 0b00000010,
    SEG_C_BIT = 0b00000100,
    SEG_D_BIT = 0b00001000,
    SEG_E_BIT = 0b00010000,
    SEG_F_BIT = 0b00100000,
    SEG_G_BIT = 0b01000000,
};

void DISPLAY_AllPixels_On(void);
void DISPLAY_AllPixels_Off(void);
void DISPLAY_DP1_On(void);
void DISPLAY_DP1_Off(void);
void DISPLAY_DP2_On(void);
void DISPLAY_DP2_Off(void);
void DISPLAY_DP3_On(void);
void DISPLAY_DP3_Off(void);
void DISPLAY_COLON_On(void);
void DISPLAY_COLON_Off(void);

unsigned char DISPLAY_CharToSegments(unsigned char ch);
void DISPLAY_DIG1_Segments(unsigned char segs);
void DISPLAY_DIG2_Segments(unsigned char segs);
void DISPLAY_DIG3_Segments(unsigned char segs);
void DISPLAY_DIG4_Segments(unsigned char segs);

void DISPLAY_ShowDemoTemp(void);

void DISPLAY_ShowNumber(int16_t value, uint8_t decimal_places);

void DISPLAY_BatteryLow(void);

#ifdef	__cplusplus
}
#endif

#endif	/* DISPLAY_H */

