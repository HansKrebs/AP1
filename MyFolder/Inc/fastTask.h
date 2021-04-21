/*
 * fastTask.h
 *
 *  Created on: 20.04.2021
 *      Author: Hans
 */

#ifndef INC_FASTTASK_H_
#define INC_FASTTASK_H_

extern void StartFastTask(void *argument);
extern void InitFastTask(osEventFlagsId_t *fTEvHnd);

#define FAST_TASK_EVENT 0x01


#endif /* INC_FASTTASK_H_ */
