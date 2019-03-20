
#include "Dio.h"

void DIO_FlipPort(uint8 port_index, uint8 pins_mask) {
	if (port_index == PORT_A)
	{
		GPIO_PORTA_DATA_R = (GPIO_PORTA_DATA_R ^ pins_mask);
	}
	if (port_index == PORT_B)
	{
		GPIO_PORTB_DATA_R = (GPIO_PORTB_DATA_R ^ pins_mask);
	}
	if (port_index == PORT_C)
	{
		GPIO_PORTC_DATA_R = (GPIO_PORTC_DATA_R ^ pins_mask);
	}
	if (port_index == PORT_D)
	{
		GPIO_PORTD_DATA_R = (GPIO_PORTD_DATA_R ^ pins_mask);
	}
	if (port_index == PORT_E)
	{
		GPIO_PORTE_DATA_R = (GPIO_PORTE_DATA_R ^ pins_mask);
	}
	if (port_index == PORT_F)
	{
		GPIO_PORTF_DATA_R = (GPIO_PORTF_DATA_R ^ pins_mask);
	}
}
