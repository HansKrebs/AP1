/*
 * normalTask.c
 *
 *  Created on: 21.04.2021
 *      Author: Hans
 */
/* Includes ------------------------------------------------------------------*/
#include "main.h"
#include "cmsis_os.h"
#include "slowTask.h"
#include "normalTask.h"

static osEventFlagsId_t *myEvHdl = NULL;

void InitNormalTask(osEventFlagsId_t *fTEvHnd)
{
	myEvHdl = fTEvHnd;
}

void StartNormalTask(void *argument)
{
	uint32_t tim=0;
	while(!myEvHdl)
		;
	/* Infinite loop */
	for(;;)
	{
	    osEventFlagsWait (*myEvHdl , NORMAL_TASK_EVENT, 0, 150);
	    osEventFlagsClear (*myEvHdl , NORMAL_TASK_EVENT);
		tim++;
		if(tim >= NORMAL_TO_SLOW_TASK){
			tim= 0;
			osEventFlagsSet(*myEvHdl, SLOW_TASK_EVENT);
		}
	}
}
