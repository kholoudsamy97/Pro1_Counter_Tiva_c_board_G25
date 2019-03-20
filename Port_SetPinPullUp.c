//pullup_function

#include "port.h"

void Port_SetPinPullUp(uint8 port_index, uint8 pins_mask, uint8 enable) {
	volatile uint8 delay;
	if (enable) {
		if (port_index == PORT_A)
		{
			GPIO_PORTA_PUR_R = GPIO_PORTA_PUR_R | pins_mask;
			delay = GPIO_PORTA_PUR_R;
		}
		if (port_index == PORT_B) {
			GPIO_PORTB_PUR_R = GPIO_PORTB_PUR_R | pins_mask;
			delay = GPIO_PORTB_PUR_R;
		}
		if (port_index == PORT_C) {
			GPIO_PORTC_PUR_R = GPIO_PORTC_PUR_R | pins_mask;
			delay = GPIO_PORTC_PUR_R;
		}
		if (port_index == PORT_D) {
			GPIO_PORTD_PUR_R = GPIO_PORTD_PUR_R | pins_mask;
			delay = GPIO_PORTD_PUR_R;
		}
		if (port_index == PORT_E) {
			GPIO_PORTE_PUR_R = GPIO_PORTE_PUR_R | pins_mask;
			delay = GPIO_PORTE_PUR_R;
		}
		if (port_index == PORT_F) {
			GPIO_PORTF_PUR_R = GPIO_PORTF_PUR_R | pins_mask;
			delay = GPIO_PORTF_PUR_R;
		}
	}
	else return;
}
