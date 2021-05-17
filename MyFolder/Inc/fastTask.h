/*
 * fastTask.h
 *
 *  Created on: 20.04.2021
 *      Author: Hans
 */


#ifndef INC_FASTTASK_H_
#define INC_FASTTASK_H_
/** @addtogroup myTasks
  * @{
  */
 /** @addtogroup fastTasks
   * @{
   */
/**
  * @brief HHH allffnvöaorvaoidvjj
   */

extern void StartFastTask(void *argument);
extern void InitFastTask(osEventFlagsId_t *fTEvHnd);

#define FAST_TASK_EVENT 0x01
#define FAST_TO_NORMAL_TASK 10

 /**
   * @}
   */
/**
  * @}
  */

#endif /* INC_FASTTASK_H_ */
