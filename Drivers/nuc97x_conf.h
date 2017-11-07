/*
 * File      : nuc97x_conf.h
 * This file is part of Suzhou Allen
 * COPYRIGHT (C) 2006 - 2017, Allen Development Team
 *
 * Change Logs:
 * Date           Author       Notes
 * 2017��11��3��     Urey      first version
 */


#ifndef _NUC970_CONF_H_
#define _NUC970_CONF_H_

#ifdef __cplusplus
extern "C" {
#endif

#include <stdint.h>

#include "nuc97x.h"
#include "nuc97x_sys.h"
#include "nuc97x_gpio.h"
#include "nuc97x_interrupt.h"
#include "nuc97x_i2c.h"
#include "nuc97x_i2s.h"
#include "nuc97x_spi.h"
#include "nuc97x_etimer.h"
#include "nuc97x_timer.h"
#include "nuc97x_uart.h"
#include "nuc97x_ethernet.h"
#include "nuc97x_lcd.h"
//#include "nuc970_usbd.h"
//#include "nuc97x_sdio.h"

/*
 * UART config
 */

/*
 * SPI config
 */
#define SPI0_USING_GPIOB
#define SPI1_USING_GPIOB
//#define SPI1_USING_GPIOI


#ifdef __cplusplus
}
#endif

#endif /* _NUC970_CONF_H_ */
