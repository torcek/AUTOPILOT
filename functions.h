/*
 * functions.h
 *
 *  Created on: Jun 29, 2015
 *      Author: Grzegorz W�JCIK
 */

#ifndef FUNCTIONS_H_
#define FUNCTIONS_H_

#include <stddef.h>
#include "stm32f4xx.h"

#include "FreeRTOS_Source/include/FreeRTOS.h"
#include "FreeRTOS_Source/include/task.h"
#include "FreeRTOS_Source/include/semphr.h"

/* Private define ------------------------------------------------------------*/
/* Private macro -------------------------------------------------------------*/
/* Private variables ---------------------------------------------------------*/
/* Global variables ----------------------------------------------------------*/
volatile uint8_t GV_SystemReady;	// 0 = NOT READY, 1 = OK
volatile uint16_t GV_SystemCounter;	// System time counter, incrementing within Systick handler



/* Private functions ---------------------------------------------------------*/
FlagStatus SYSTEM_ClockCheck(void);
void vhLED_initGPIO(void);
void vTaskLED1(void * pvParameters);
void vTaskLED2(void * pvParameters);
void vStartLEDTasks(unsigned portBASE_TYPE uxPriority);

#endif /* FUNCTIONS_H_ */


