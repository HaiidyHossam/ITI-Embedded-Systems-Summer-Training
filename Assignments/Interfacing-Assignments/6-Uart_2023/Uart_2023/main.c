/*
 * Uart_2023.c
 *
 * Created: 8/30/2023 2:03:55 PM
 * Author : Haiidy Hossam
 */ 
#define F_CPU 8000000
#include "STDTYPE.h"
#include "UTILS.h"
#include <util/delay.h>
#include "DIO_interface.h"
#include "GIE_interface.h"
#include "UART_interface.h"

int main(void)
{
	/*this lab without using interrupt  */
	u8 x;
	//led
	DIO_SetPinDirection(Port_A,Pin_0,output);
	//rx pin 
	DIO_SetPinDirection(Port_D,Pin_0,input);

	//tx pin
	DIO_SetPinDirection(Port_D,Pin_1,output);
	UART_INIT();
    /* Replace with your application code */
    while (1) 
    {
		x=UART_RECEIVE();
		UART_SEND(x);
		switch(x){
			case 'A':
			DIO_SetPinValue(Port_A,Pin_0,HIGH);
			break;
			case 'B':
			DIO_SetPinValue(Port_A,Pin_0,LOW);
			break;
			default:
			break;
		}
    }
}

