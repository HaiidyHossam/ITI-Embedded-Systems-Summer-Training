/*
 * spi_slave_2023.c
 *
 * Created: 8/31/2023 3:02:06 PM
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
	u8 x=0;
	SPI_INIT_SLAVE();
	DIO_SetPinDirection(Port_A,Pin_0,output);
    /* Replace with your application code */
    while (1) 
    {
		x=SPI_TR_RC(0);
		switch(x){
			case 10:
			DIO_SetPinValue(Port_A,Pin_0,HIGH);
			break;
			case 20:
			DIO_SetPinValue(Port_A,Pin_0,LOW);
			break;
		}
    }
}

