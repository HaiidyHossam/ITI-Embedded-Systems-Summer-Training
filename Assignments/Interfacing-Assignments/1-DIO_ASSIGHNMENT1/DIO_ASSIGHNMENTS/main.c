/*
 * DIO_ASSIGHNMENTS.c
 *
 * Created: 8/25/2023 6:16:29 PM
 * Author : Haiidy Hossam
 */ 
#define F_CPU 8000000
#include <util/delay.h>
#include "STDTYPE.h"
#include "UTILS.h"
#include "DIO_interface.h"
#include "SEG_config.h"
#include "SEG_interface.h"



int main(void)
{
	DIO_SetPinDirection(Port_A,Pin_0,output);
	DIO_SetPinDirection(Port_A,Pin_1,output);
	DIO_SetPinDirection(Port_A,Pin_2,output);
	DIO_SetPortDirection(Port_C,Port_output);
	DIO_SetPortDirection(Port_D,Port_output);
	
    
    while (1) 
    {
		
		label: for(u8 i=0;i<3;i++){
			SEG_vidDisplay(SEG_u8PORT1,i);
			for(u8 j=0;j<=9;j++){
				
				SEG_vidDisplay(SEG_u8PORT2,j);
				_delay_ms(1000);
				if(i==0 && j==0){
				DIO_SetPinValue(Port_A,Pin_0,1);	
				}
				else if(i==1&&j==0){
					DIO_SetPinValue(Port_A,Pin_0,0);
					DIO_SetPinValue(Port_A,Pin_1,1);
				}
				else if(i==1&&j==3){
					DIO_SetPinValue(Port_A,Pin_1,0);
					DIO_SetPinValue(Port_A,Pin_2,1);
				}
				else if(i==2&&j==3){
					DIO_SetPinValue(Port_A,Pin_2,0);
					DIO_SetPinValue(Port_A,Pin_0,1);
				goto label;}
				
			}
		}
		
    }
}

