#include "Dio.h"

uint8 DIO_ReadPort(uint8 port_index,uint8 pins_mask)
{
	uint8 x;
	if(port_index == PORT_A )
		x = (GPIO_PORTA_DATA_R & pins_mask);
	else if(port_index == PORT_B )
		x = (GPIO_PORTB_DATA_R & pins_mask);
	else if(port_index == PORT_C )
		x = (GPIO_PORTC_DATA_R & pins_mask);
	else if(port_index == PORT_D )
		x = (GPIO_PORTD_DATA_R & pins_mask);
	else if(port_index == PORT_E )
		x = (GPIO_PORTE_DATA_R & pins_mask);
	else if(port_index == PORT_F )
		x = (GPIO_PORTF_DATA_R & pins_mask);
	
	return x;
}

