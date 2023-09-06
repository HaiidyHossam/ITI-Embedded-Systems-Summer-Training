/*
 * TASK_SERVO.c
 *
 * Created: 9/6/2023 1:37:29 AM
 * Author :Haiidy Hossam
 */ 


#define F_CPU 8000000
#include <stdio.h>
#include "STDTYPE.h"
#include "UTILS.h"
#include <util/delay.h>
#include "TIMER1_interface.h"
#include "DIO_interface.h"
#include "LCD_Interface.h"
#include "KPAD_interface.h"

int main(void)
{
	u8 x=0;
	u8 Deg=0;
DIO_SetPortDirection(Port_C,Port_output);
DIO_SetPinDirection(Port_B,Pin_0,output);
DIO_SetPinDirection(Port_B,Pin_1,output);
DIO_SetPinDirection(Port_B,Pin_2,output);


 KEYPAD_INIT (Port_A);
LCD_Init();
DIO_SetPinDirection(Port_D,Pin_5,output);
SERVO_TIMER1_mode14_Init();

x=KEYPAD_GETCHAR(Port_A);

//SERVO_Set_Angle(90);
    while (1) 
    {
		
		x=KEYPAD_GETCHAR(Port_A);
		if(x!=254 && x!='*' ){
		_delay_ms(300);
		LCD_printNumber(x); Deg = x + Deg*10;}
		
			
		
		if(x=='*'){
		SERVO_Set_Angle(Deg); 	}
		//_delay_ms(1000);
		
    }
}

