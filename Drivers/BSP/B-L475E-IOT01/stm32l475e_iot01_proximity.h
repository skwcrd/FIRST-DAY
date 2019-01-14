/*
 * stm32l475e_iot01_proximity.h
 *
 *  Created on: Jan 10, 2019
 *      Author: SK
 */

#ifndef __STM32L475E_IOT01_PROXIMITY_H
#define __STM32L475E_IOT01_PROXIMITY_H

#ifdef __cplusplus
 extern "C" {
#endif

 /* Includes ------------------------------------------------------------------*/
#include "stm32l475e_iot01.h"
#include "../Components/vl53l0x/vl53l0x_api.h"
#include "../Components/vl53l0x/vl53l0x_def.h"
#include "../Components/vl53l0x/vl53l0x_tof.h"

#define PROXIMITY_I2C_ADDRESS         	( ( uint16_t )0x0052 )
#define VL53L0X_ID                    	( ( uint16_t )0xEEAA )
#define VL53L0X_XSHUT_Pin 				GPIO_PIN_6
#define VL53L0X_XSHUT_GPIO_Port 		GPIOC

void BSP_PROXIMITY_Init ( void );
void BSP_PROXIMITY_MspInit ( void );
uint16_t BSP_PROXIMITY_GetDistance ( void );

extern void     SENSOR_IO_Init(void);

#ifdef __cplusplus
}
#endif

#endif /* __STM32L475E_IOT01_PROXIMITY_H */
