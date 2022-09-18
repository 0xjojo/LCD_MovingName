/*
 * LCD_Final_1.c
 *
 * Created: 9/8/2022 8:54:51 PM
 * Author : gehad
 */ 

#include "STD_types.h"
#include "DIO_int.h"
#include "LCD_int.h"
#include "LED_int.h"
#include "SEG_int.h"
#define F_CPU 16000000UL
#include <util/delay.h>
#include <avr/io.h>
int main(void)
{
    DIO_voidInit();
    LCD_voidInit();
    
    LCD_voidSendString("0xjojo");
    u8 LCD_U8_SHIFT_RIGHT = 0;
    //u8 LCD_U8_SHIFT_LEFT = 0;
    while (1)
    {
	    while(LCD_U8_SHIFT_RIGHT<10)
	    {
		    LCD_voidShiftRight();
		    _delay_ms(500);
		    LCD_U8_SHIFT_RIGHT++;
	    }
	    /*while(LCD_U8_SHIFT_LEFT<10)
	    {
		    LCD_voidShiftLeft();
		    _delay_ms(500);
		    LCD_U8_SHIFT_LEFT++;
	    }*/
	    
	    LCD_U8_SHIFT_RIGHT=0;
	    //LCD_U8_SHIFT_LEFT=0;
    }
}



