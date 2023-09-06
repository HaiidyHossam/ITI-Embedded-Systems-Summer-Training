/*
 * DC_MOTOR.c
 *
 * Created: 9/5/2023 1:55:46 AM
 * Author : Haiidy Hossam
 */ 

#define F_CPU 8000000
#include <util/delay.h>
#include "STDTYPE.h"
#include "UTILS.h"
#include "DIO_interface.h"

void MOTOR_TURN_RIGHT (void){
	_delay_ms(300);
	DIO_SetPinValue(Port_D,Pin_0,1);
	DIO_SetPinValue(Port_D,Pin_1,0);
}
void MOTOR_TURN_LEFT (void){
	_delay_ms(300);
	DIO_SetPinValue(Port_D,Pin_0,0);
	DIO_SetPinValue(Port_D,Pin_1,1);
	
	
}
void MOTOR_STOP(void){
	DIO_SetPinValue(Port_D,Pin_0,1);
	DIO_SetPinValue(Port_D,Pin_1,1);
	
	
}
int main(void)

{
	

  DIO_SetPinDirection(Port_C,Pin_0,input);
  DIO_SetPinDirection(Port_C,Pin_1,input);
  DIO_SetPinValue(Port_C,Pin_0,1);
   DIO_SetPinValue(Port_C,Pin_1,1);
    DIO_SetPinDirection(Port_D,Pin_0,output);
    DIO_SetPinDirection(Port_D,Pin_1,output);
	
    while (1) 
    {
		
	 if(DIO_GetPinValue(Port_C,Pin_0)==0){
		 MOTOR_TURN_RIGHT();
		 
		 while(DIO_GetPinValue(Port_C,Pin_0)==0){
			 if(DIO_GetPinValue(Port_C,Pin_1)==0) MOTOR_STOP();
			 else { MOTOR_TURN_RIGHT();}
		 }
		 MOTOR_STOP();
		}
		
else if(DIO_GetPinValue(Port_C,Pin_1)==0)
		{
			
			MOTOR_TURN_LEFT();
			
			while(DIO_GetPinValue(Port_C,Pin_1)==0){
				if(DIO_GetPinValue(Port_C,Pin_0)==0) MOTOR_STOP();
				else {MOTOR_TURN_LEFT();}
			}
			MOTOR_STOP();	
		}
		else{
			MOTOR_STOP();
		}

		
    }
}

