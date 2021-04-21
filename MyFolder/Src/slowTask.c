/*
 * slowTask.c
 *
 *  Created on: 21.04.2021
 *      Author: Hans
 */
/* Includes ------------------------------------------------------------------*/
#include "main.h"
#include "cmsis_os.h"
#include "slowTask.h"

static osEventFlagsId_t *myEvHdl = NULL;

void InitSlowTask(osEventFlagsId_t *fTEvHnd)
{
	myEvHdl = fTEvHnd;
}


void StartSlowTask(void *argument)
{
	while(!myEvHdl)
		;
	/* Infinite loop */
	for(;;)
	{
	    osEventFlagsWait (*myEvHdl , SLOW_TASK_EVENT, 0, 1500);
	    osEventFlagsClear (*myEvHdl , SLOW_TASK_EVENT);

		HAL_GPIO_TogglePin(USER_LED_GPIO_Port,USER_LED_Pin);
	}
}
