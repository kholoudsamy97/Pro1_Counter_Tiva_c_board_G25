 /******************************************************************************
 * Module: PORT
 *
 * File Name: Port.h
 *
 * Description: Header file for Port driver
 *
 *******************************************************************************/

#ifndef PORT_H
#define PORT_H

#include"tm4c123gh6pm.h"
#include"std_types.h"

/*******************************************************************************
 *                      Preprocessor Macros                                    *
 *******************************************************************************/
/*Ports index*/
//#ifndef PORTS
//#define PORTS
#define PORT_A (1u)
#define PORT_B (2u)
#define PORT_C (4u)
#define PORT_D (8u)
#define PORT_E (16u)
#define PORT_F (32u)
//#endif

#define SWITCH_0_PIN (2u)
#define SWITCH_0_PORT (PORT_F)
#define SWITCH_1_PIN (4u)
#define SWITCH_1_PORT (PORT_F)
#define SWITCH_2_PIN (8u)
#define SWITCH_2_PORT (PORT_F)

#define SWITCH_PORT(SWITCH_NUM) (PORT_F)
#define SWITCH_PIN(SWITCH_NUM)  (SWITCH_NUM)
#define GPIO_LOCK_KEY  0x4C4F434B
#define SWITCHES_PINS (SWITCH_0_PIN | SWITCH_1_PIN |SWITCH_2_PIN)
#define LCD_DATA_PORT (PORT_B)
#define LCD_CTRL_PORT (PORT_E)
/*******************************************************************************
 *                              Module Data Types                              *
 *******************************************************************************/
 
/* 													Enum for Port_PinDirectionType 
*
* In TM4C123 we define pin as input by putting 0 in its corresponding bit in DIR register.
* In TM4C123 we define pin as output by putting 1 in its corresponding bit in DIR register.
* In some microcontrollers like avr we put 1 to define pin as input and 0 for output.
* by implementing this enum the upper layer modules will use this data type to define  pins as inputs or outputs 
* without knowing this details.
* for example if we use this data type in avr we just replace PORT_PIN_IN with PORT_PIN_OUT and vice versa.
*
*/
typedef enum
{
  PORT_PIN_IN,
	PORT_PIN_OUT
}Port_PinDirectionType;

/*******************************************************************************
 *                      Functions Prototypes                                   *
 *******************************************************************************/

/* Function to initialize port
*	initialize port means : 
* 		1- activate clock for Port.
*			2- allowing writing to commit register for this port using lock register.
*			3- allowing commit to some pins in this port 
*				 (( because we implement simple driver we just allowing commit to all pins in the port))
*				 note: allowing commmit means allowing write in AFSEL,PUR,PDR,DEN registers for some pins.
*			4- disable analog on some pins (( also because this is simple driver 
*					we just disable analog function to all pins in the port , 
*					although analog function is only valid for pins that can be used as ADC input))
*			5- disable alternate functions for some pins (( here we will disable for all port))
*			6- enable digital I/O on some pins (( here we will enable it for all port))
*/
void Port_init(uint8 port_index,uint8 pins_mask);
/* Function to select some pins direction.*/
void Port_SetPinDirection(uint8 port_index, uint8 pins_mask, Port_PinDirectionType pins_direction);
/* Function to enable internal pull up resistor in some pins.*/
void Port_SetPinPullUp(uint8 port_index, uint8 pins_mask, uint8 enable);
/* Function to enable internal pull down resistor in some pins.*/
void Port_SetPinPullDown(uint8 port_index, uint8 pins_mask, uint8 enable);

#endif 
