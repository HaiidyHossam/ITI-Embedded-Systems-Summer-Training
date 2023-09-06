/*
 * DIO_ASSIGHNMENT22.c
 *
 * Created: 8/26/2023 8:04:23 PM
 * Author : Haiidy Hossam
 */ 

#define F_CPU 8000000
#include <util/delay.h>
#include "STDTYPE.h"
#include "UTILS.h"
#include "DIO_interface.h"

int main(void)
{
    DIO_SetPortDirection(Port_A,Port_input);
	DIO_SetPortValue(Port_A,255);	
	DIO_SetPortDirection(Port_C,Port_output);
	u8 x=0;
    while (1) 
    {
	_delay_ms(300);
	DIO_GetPortValue(Port_A,&x);
	//flashing
	if(x==1){
		DIO_SetPortValue(Port_C,255);
		_delay_ms(500);
		DIO_SetPortValue(Port_C,0);	
	}
	//sheft left
	else if(x==3){
		DIO_SetPortValue(Port_C,1);
		_delay_ms(250);
		DIO_SetPortValue(Port_C,0);
		DIO_SetPortValue(Port_C,2);
		_delay_ms(250);
		DIO_SetPortValue(Port_C,0);
		DIO_SetPortValue(Port_C,4);
		_delay_ms(250);
		DIO_SetPortValue(Port_C,0);
		DIO_SetPortValue(Port_C,8);
		_delay_ms(250);
		DIO_SetPortValue(Port_C,0);
		DIO_SetPortValue(Port_C,16);
		_delay_ms(250);
		DIO_SetPortValue(Port_C,0);
		DIO_SetPortValue(Port_C,32);
		_delay_ms(250);
		DIO_SetPortValue(Port_C,0);
		DIO_SetPortValue(Port_C,64);
		_delay_ms(250);
		DIO_SetPortValue(Port_C,0);
		DIO_SetPortValue(Port_C,128);
		_delay_ms(250);
		DIO_SetPortValue(Port_C,0);
		DIO_SetPortValue(Port_C,0);
		_delay_ms(250);
	}
	
	//sheft right
	else if(x==7){
		DIO_SetPortValue(Port_C,128);
		_delay_ms(250);
		DIO_SetPortValue(Port_C,0);
		DIO_SetPortValue(Port_C,64);
		_delay_ms(250);
		DIO_SetPortValue(Port_C,0);
		DIO_SetPortValue(Port_C,32);
		_delay_ms(250);
		DIO_SetPortValue(Port_C,0);
		DIO_SetPortValue(Port_C,16);
		_delay_ms(250);
		DIO_SetPortValue(Port_C,0);
		DIO_SetPortValue(Port_C,8);
		_delay_ms(250);
		DIO_SetPortValue(Port_C,0);
		DIO_SetPortValue(Port_C,4);
		_delay_ms(250);
		DIO_SetPortValue(Port_C,0);
		DIO_SetPortValue(Port_C,2);
		_delay_ms(250);
		DIO_SetPortValue(Port_C,0);
		DIO_SetPortValue(Port_C,1);
		_delay_ms(250);
		DIO_SetPortValue(Port_C,0);
		_delay_ms(250);
	}
	
	//snake
	else if(x==127){
		DIO_SetPortValue(Port_C,1);
		_delay_ms(250);
		DIO_SetPortValue(Port_C,3);
		_delay_ms(250);
		DIO_SetPortValue(Port_C,7);
		_delay_ms(250);
		DIO_SetPortValue(Port_C,15);
		_delay_ms(250);
		DIO_SetPortValue(Port_C,31);
		_delay_ms(250);
		DIO_SetPortValue(Port_C,63);
		_delay_ms(250);
		DIO_SetPortValue(Port_C,127);
		_delay_ms(250);
		DIO_SetPortValue(Port_C,255);
		_delay_ms(250);
		DIO_SetPortValue(Port_C,0);
		_delay_ms(250);
	}
    }
}

