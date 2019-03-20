 /******************************************************************************
 * Service: Main Function
 *
 * File Name: main.h
 *
 * Description: Source code of main function
 * 
 *
 *******************************************************************************/


#include "Button.h"
#include "lcd.h"
#include "delay.h"
/*******************************************************************************
 *                      Preprocessor Macros                                    *
 *******************************************************************************/

#define INCREMENT SWITCH_0
#define DECREMENT SWITCH_1
#define RESET SWITCH_2

void SystemInit(void)
{
		return;
}

int main(void)
{
	uint32 printed_value = 0;
	uint8 reset_isPressed =0;
	uint8 decrement_isPressed =0;
	Switch_init(INCREMENT|DECREMENT|RESET);
	LCD_init();
	
	while(1)
	{
		if(Is_Pressed(RESET) == PRESSED)
		{
			_delay_ms(20);
			if(Is_Pressed(RESET) == PRESSED)
			{			
				reset_isPressed = 1;
			}
		}
		
		else if(Is_Pressed(RESET) == NOT_PRESSED && reset_isPressed )
		{
			_delay_ms(20);
			if(Is_Pressed(RESET) == NOT_PRESSED &&reset_isPressed )
			{
				LCD_clearScreen();
				printed_value = 0;
				LCD_intgerToString(printed_value);
				reset_isPressed = 0;
			}
						
			
		}
		
			else if(Is_Pressed(INCREMENT) == PRESSED)
		{
			_delay_ms(20);
			if(Is_Pressed(INCREMENT) == PRESSED)
			{
				while(Is_Pressed(INCREMENT) == PRESSED)
				{
					LCD_clearScreen();
					printed_value ++;
					LCD_intgerToString(printed_value);
					_delay_ms(200);
				}
			}
						
			
		}
		
			else if(Is_Pressed(DECREMENT) == PRESSED )
		{
			_delay_ms(20);
			if(Is_Pressed(DECREMENT) == PRESSED && !decrement_isPressed)
			{
				LCD_clearScreen();
				printed_value --;
				LCD_intgerToString(printed_value);
				decrement_isPressed = 1;
			}		
		}
		
		else 
		{
			decrement_isPressed = 0;
			
		}
			
	}
	
	
}
