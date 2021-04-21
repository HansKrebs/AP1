/*
 * slowTask.h
 *
 *  Created on: 21.04.2021
 *      Author: Hans
 */

#ifndef INC_SLOWTASK_H_
#define INC_SLOWTASK_H_

extern void StartSlowTask(void *argument);
extern void InitSlowTask(osEventFlagsId_t *fTEvHnd);

#define SLOW_TASK_EVENT 0x04


#endif /* INC_SLOWTASK_H_ */
