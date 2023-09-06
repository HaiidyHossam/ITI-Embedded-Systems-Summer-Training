#include "UTILS.h"
#include "STDTYPE.h"
#include "DIO_interface.h"
#include "KPAD_config.h"
#include "KPAD_interface.h"
u8 KEYPAD_R[] = {R0 ,R1 ,R2 ,R3};
u8 KEYPAD_C[] = {C0 ,C1 ,C2 ,C3};

void KEYPAD_INIT(u8 kpd_port)
{
	 DIO_SetPinDirection(kpd_port ,R0 , input);
	 DIO_SetPinDirection(kpd_port ,R1 , input);
	 DIO_SetPinDirection(kpd_port ,R2 ,input);
	 DIO_SetPinDirection(kpd_port ,R3 , input);
	
	 DIO_SetPinDirection(kpd_port ,C0 , output);
	 DIO_SetPinDirection(kpd_port ,C1 ,  output);
	 DIO_SetPinDirection(kpd_port ,C2 , output);
	 DIO_SetPinDirection(kpd_port ,C3 ,  output);
	
	DIO_SetPortValue(kpd_port , 0xff);
	
}

u8 KEYPAD_GETCHAR(u8 kpd_port)
{
	
	
	int i ,j;
	for (i = 0 ; i < 4 ; i++)
	{
		DIO_SetPinValue(kpd_port , KEYPAD_C[0],HIGH );
		DIO_SetPinValue(kpd_port , KEYPAD_C[1],HIGH );
		DIO_SetPinValue(kpd_port , KEYPAD_C[2],HIGH );
		DIO_SetPinValue(kpd_port , KEYPAD_C[3] ,HIGH);
		
		DIO_SetPinValue(kpd_port , KEYPAD_C[i] , LOW);
		
		for (j = 0 ;j < 4 ;j++)
		{
			
			if (DIO_GetPinValue (kpd_port , KEYPAD_R[j])==LOW)
			{
				
				while(DIO_GetPinValue (kpd_port , KEYPAD_R[j])==LOW){
					DIO_GetPinValue(kpd_port , KEYPAD_R[j]);
				}
				
				switch(i)
				{
					case (0):
					if(j == 0) return 7;
					else if(j == 1) return 4;
					else if(j == 2) return 1;
					else if(j == 3) return 'c';
					break;
					case (1):
					if(j == 0) return 8;
					else if(j == 1) return 5;
					else if(j == 2) return 2;
					else if(j == 3) return 0;
					break;
					case (2):
					if(j == 0) return 9;
					else if(j == 1) return 6;
					else if(j == 2) return 3;
					else if(j == 3) return '=';
					break;
					case (3):
					if(j == 0) return '/';
					else if(j == 1) return '*';
					else if(j == 2) return '-';
					else if(j == 3) return '+';
					break;
				}
				
			}
			
			
		}
		
	}
	
	return 254;
}
/*

u8 KPD_u8GetPressedKey(void){
	u8 Local_u8KPDArr[4][4]= KPD_u8ARR;
	u8 Local_keyPressed=101;
	u8 Local_u8ColumnId =0;
	u8 Local_u8RowId =0;
	u8 Local_u8State = 1;
	
	u8 Local_u8ColArr[]={KPD_u8COLUMN0_PIN,KPD_u8COLUMN1_PIN,KPD_u8COLUMN2_PIN,KPD_u8COLUMN3_PIN};
		
		u8 Local_u8RowArr[]={KPD_u8ROW0_PIN,KPD_u8ROW1_PIN,KPD_u8ROW2_PIN,KPD_u8ROW3_PIN};
			//loop through columns
	for(Local_u8ColumnId=0;Local_u8ColumnId<4;Local_u8ColumnId++){
		//set each column with 0 one time per loop
		DIO_VidSetPinValue(KPD_u8PORT,LOW,Local_u8ColArr[Local_u8ColumnId]);
		//check each row according to column state
		for(Local_u8RowId=0;Local_u8RowId<4;Local_u8RowId++){
			//check if row get 0 value
			DIO_VidGetPinValue (KPD_u8PORT,Local_u8RowArr[Local_u8RowId] , &Local_u8State);
			//if key pressed
if(Local_u8State ==LOW){
	//get number which represents col and row
	Local_keyPressed=Local_u8KPDArr[Local_u8ColumnId][Local_u8RowId];
	//check if someone press without realise
	while(Local_u8State==LOW){
		DIO_VidGetPinValue (KPD_u8PORT,Local_u8RowArr[Local_u8RowId] , &Local_u8State);
	}
	DIO_VidSetPinValue(KPD_u8PORT,HIGH,Local_u8ColArr[Local_u8ColumnId]);
	
	return Local_keyPressed;
		}
		
	}
	DIO_VidSetPinValue(KPD_u8PORT,HIGH,Local_u8ColArr[Local_u8ColumnId]);
	
}
//no one presssed
return Local_keyPressed;
		}*/