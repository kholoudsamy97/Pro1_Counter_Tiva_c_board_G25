 /******************************************************************************
 * Module: DIO
 *
 * File Name: Dio.h
 *
 * Description: Header file for Dio driver
 *
 *******************************************************************************/

#ifndef DIO_H
#define DIO_H

#include"tm4c123gh6pm.h"
#include"std_types.h"

/*******************************************************************************
 *                      Preprocessor Macros                                    *
 *******************************************************************************/
/* Ports index */

#define PORT_A (1u)
#define PORT_B (2u)
#define PORT_C (4u)
#define PORT_D (8u)
#define PORT_E (16u)
#define PORT_F (32u)

/*******************************************************************************
 *                              Module Data Types                              *
 *******************************************************************************/
 
/* Enum for Dio_LevelType */
typedef enum
{
  STD_LOW,
	STD_HIGH
}Dio_LevelType;

/*******************************************************************************
 *                      Functions Prototypes                                   *
 *******************************************************************************/
/* Function to return the value of the specified DIO pins in certain channel.*/
uint8 DIO_ReadPort(uint8 port_index,uint8 pins_mask);
/* Function to set a level of specified DIO pins in certain channel.*/
void DIO_WritePort(uint8 port_index,uint8 pins_mask,Dio_LevelType pins_level);

/* Function to flip the level of specified DIO pins in certain channel.*/
void DIO_FlipPort(uint8 port_index,uint8 pins_mask);

#endif 
