
#include "UTILS.h"
#include "STDTYPE.h"
#include "DIO_interface.h"
#include "SEG_interface.h"



void SEG_vidDisplay(u8 PORT,u8 num){
	
	switch(num){
		case 0:
		DIO_SetPortValue(PORT,0b00111111);
		
		break;

		case 1:
		DIO_SetPortValue(PORT,0b00000110);
		
		break;

		case 2:
		DIO_SetPortValue(PORT,0b01011011);
		
		break;

		case 3:
		DIO_SetPortValue(PORT,0b01001111);
		
		break;

		case 4:
		DIO_SetPortValue(PORT,0b01100110);
		break;

		case 5:
		DIO_SetPortValue(PORT,0b01101101);
		break;

		case 6:
		DIO_SetPortValue(PORT,0b01111101);
		break;

		case 7:
		DIO_SetPortValue(PORT,0b00000111);
		break;

		case 8:
		DIO_SetPortValue(PORT,0b01111111);
		break;

		case 9:
		DIO_SetPortValue(PORT,0b01101111);
		break; 
		
			default:
			DIO_SetPortValue(PORT,0b00111111);
			break; 
	}
	
	
	
}