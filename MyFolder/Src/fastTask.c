/*
 * fastTask.c
 *
 *  Created on: 20.04.2021
 *      Author: Hans
 */

/* Includes ------------------------------------------------------------------*/
#include "main.h"
#include "cmsis_os.h"
//#include "../fastTask.h"

void StartFastTask(void *argument)
{
	  /* Infinite loop */
	  for(;;)
	  {
	    osDelay(1000);
		HAL_GPIO_TogglePin(USER_LED_GPIO_Port,USER_LED_Pin);

	  }
}
