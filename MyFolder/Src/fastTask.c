/*
 * fastTask.c
 *
 *  Created on: 20.04.2021
 *      Author: Hans
 */

/* Includes ------------------------------------------------------------------*/
#include "main.h"
#include "cmsis_os.h"
#include "fastTask.h"
#include "normalTask.h"
//extern osEventFlagsId_t fastTaskEventHandle;

static osEventFlagsId_t *myEvHdl = NULL;

void InitFastTask(osEventFlagsId_t *fTEvHnd)
{
	myEvHdl = fTEvHnd;

}

void StartFastTask(void *argument)
{
	uint32_t tim=0;
	while(!myEvHdl)
		;
	/* Infinite loop */
	for(;;)
	{
		osEventFlagsWait (*myEvHdl , FAST_TASK_EVENT, 0, 15);
	    osEventFlagsClear (*myEvHdl , FAST_TASK_EVENT);
		tim++;
		if(tim >= FAST_TO_NORMAL_TASK){
			tim= 0;
			osEventFlagsSet(*myEvHdl, NORMAL_TASK_EVENT);
		}
	}
}
