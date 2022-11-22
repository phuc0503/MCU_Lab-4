/*
 * sched.h
 *
 *  Created on: Nov 22, 2022
 *      Author: DELL
 */

#ifndef INC_SCHED_H_
#define INC_SCHED_H_

#include <stdint.h>
#include "main.h"
#define TICK	10
#define SCH_MAX_TASKS	40
#define NO_TASK_ID		0

typedef struct{
	void (*pTask)(void);

	uint32_t Delay;

	uint32_t Period;

	uint8_t RunMe;

	uint32_t TaskID;
} sTask;

sTask SCH_tasks_G[SCH_MAX_TASKS];

void SCH_Init(void);

void SCH_Add_Task ( void (*pFunction)(), uint32_t DELAY, uint32_t PERIOD);

void SCH_Update(void);

void SCH_Dispatch_Tasks(void);


#endif /* INC_SCHED_H_ */
