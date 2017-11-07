/*
 * File      : main.c
 * This file is part of RT-Thread RTOS
 * COPYRIGHT (C) 2006, RT-Thread Development Team
 *
 * The license and distribution terms for this file may be
 * found in the file LICENSE in this distribution or at
 * http://www.rt-thread.org/license/LICENSE
 *
 * Change Logs:
 * Date           Author		Notes
 */

#include <rtthread.h>

#include <board.h>

#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>



int main(void *parameter)
{
	printf("Hello RT-Thread !!!\n");
#ifdef RT_USING_EMWIN
    {
        extern int gui_task_start(void);
        gui_task_start();
    }
#endif
	return 0;
}


/*@}*/
