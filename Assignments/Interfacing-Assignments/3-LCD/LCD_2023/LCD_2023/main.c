/*
 * LCD_2023.c
 *
 * Created: 8/27/2023 10:05:35 PM
 * Author : Haiidy Hossam
 */ 
#define F_CPU  8000000
#include <avr/delay.h>
#include "STDTYPE.h"
#include "UTILS.h"
#include "DIO_interface.h"
#include "LCD_Config.h"
#include "LCD_Interface.h"

int main(void)
{
	DIO_SetPortDirection(Port_C,Port_output);
	DIO_SetPortDirection(Port_B,Port_output);
	LCD_Init();
	 u8 x=0;
	 u8 y=0;
	
    /* Replace with your application code */
    while (1) 
    {
	
		LCD_Clear();
		_delay_ms(500);
		GOTOXY(x,y);
		LCD_Send_Data('H');
		_delay_ms(500);
		x=!x;
		y+=1;
		GOTOXY(x,y);
		LCD_Send_Data('a');
		_delay_ms(500);
		x=!x;
		y+=1;
		GOTOXY(x,y);
		LCD_Send_Data('i');
		_delay_ms(500);
		x=!x;
		y+=1;
		GOTOXY(x,y);
		LCD_Send_Data('d');
		_delay_ms(500);
		x=!x;
		y+=1;
		GOTOXY(x,y);
	    LCD_Send_Data('y');
		_delay_ms(500);
		x=!x;
		y+=1;
		
		
		LCD_Clear();
		
		if(y==15) y=0;
		
    }
}

