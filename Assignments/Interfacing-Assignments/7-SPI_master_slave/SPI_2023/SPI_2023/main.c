/*
 * SPI_2023.c
 *
 * Created: 8/31/2023 2:00:44 PM
 * Author : Haiidy Hossam
 */ 

#define F_CPU 8000000
#include "STDTYPE.h"
#include "UTILS.h"
#include "SPI_interface.h"
#include "DIO_interface.h"
#include <util/delay.h>


int main(void)
{
	//DIO_SetPinDirection(Port_B,Pin_0,output); //select slave 1
	SPI_INIT_MASTER();
	u8 dum=0;
	
	
    /* Replace with your application code */
    while (1) 
    {
		DIO_SetPinValue(Port_B,Pin_4,LOW);
		dum=SPI_TR_RC(10);
		DIO_SetPinValue(Port_B,Pin_4,HIGH);
		_delay_ms(500);
		
		DIO_SetPinValue(Port_B,Pin_4,LOW);
		dum=SPI_TR_RC(20);
		DIO_SetPinValue(Port_B,Pin_4,HIGH);
		_delay_ms(500);
		
    }
}

