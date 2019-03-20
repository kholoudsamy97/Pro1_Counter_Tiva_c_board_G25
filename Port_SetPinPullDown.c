#include "Port.h"
void Port_SetPinPullDown(uint8 port_index, uint8 pins_mask, uint8 enable){
	 volatile uint8 delay = 0;
if(enable){
switch(port_index){
										case PORT_A:{ 
																	GPIO_PORTA_PDR_R |= pins_mask;
																	delay = GPIO_PORTA_PDR_R ;
																	delay++;
																	break;
																}
										case PORT_B:{ 
																	GPIO_PORTB_PDR_R |= pins_mask;
																	delay = GPIO_PORTB_PDR_R ;
																	delay++;
																	break;
																}
										case PORT_C:{ 
																	GPIO_PORTC_PDR_R |= pins_mask;
																	delay = GPIO_PORTC_PDR_R ;
																	delay++;
																	break;
																}
										case PORT_D:{ 
																	GPIO_PORTD_PDR_R |= pins_mask;
																	delay = GPIO_PORTD_PDR_R ;
																	delay++;
																	break;
																}
										case PORT_E:{ 
																	GPIO_PORTE_PDR_R |= pins_mask;
																	delay = GPIO_PORTE_PDR_R ;
																	delay++;
																	break;
																}
										case PORT_F:{ 
																	GPIO_PORTF_PDR_R |= pins_mask;
																	delay = GPIO_PORTF_PDR_R ;
																	delay++;
																	break;
																}
																	
									
									}
					}
}

