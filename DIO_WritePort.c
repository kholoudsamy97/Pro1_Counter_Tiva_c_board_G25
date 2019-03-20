#include "Dio.h"
void DIO_WritePort(uint8 port_index,uint8 pins_mask,Dio_LevelType pins_level){
	switch(port_index){
		 case PORT_A: 
									if( pins_level == 1)
										 GPIO_PORTA_DATA_R |= pins_mask;
									else 
										 GPIO_PORTA_DATA_R &= (~pins_mask);
									break;
										
			case PORT_B: 
									if( pins_level == 1)
										 GPIO_PORTB_DATA_R |= pins_mask;
									else 
										 GPIO_PORTB_DATA_R &= (~pins_mask);
									break;			
				
			case PORT_C: 
									if( pins_level == 1)
										 GPIO_PORTC_DATA_R |= pins_mask;
									else 
										 GPIO_PORTC_DATA_R &= (~pins_mask);
									break;	

       case PORT_D: 
									if( pins_level == 1)
										 GPIO_PORTD_DATA_R |= pins_mask;
									else 
										 GPIO_PORTD_DATA_R &= (~pins_mask);
									break;	

				case PORT_E: 
									if( pins_level == 1)
										 GPIO_PORTE_DATA_R |= pins_mask;
									else 
										 GPIO_PORTE_DATA_R &= (~pins_mask);
									break;	

				case PORT_F: 
									if( pins_level == 1)
										 GPIO_PORTF_DATA_R |= pins_mask;
									else 
										 GPIO_PORTF_DATA_R &= (~pins_mask);
									break;									
									
			}
}


