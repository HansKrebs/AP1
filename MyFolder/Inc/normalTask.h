/*
 * normalTask.h
 *
 *  Created on: 21.04.2021
 *      Author: Hans
 */

#ifndef INC_NORMALTASK_H_
#define INC_NORMALTASK_H_

extern void StartNormalTask(void *argument);
extern void InitNormalTask(osEventFlagsId_t *fTEvHnd);

#define NORMAL_TASK_EVENT 0x02


#endif /* INC_NORMALTASK_H_ */
