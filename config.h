/*****************************************************************************/
/* Author: Jure Valjavec                                                     */	
/* Date: 04.11.2016                                                          */
/* File: config.h                                                            */
/*****************************************************************************/

#ifndef CONFIG_H
#define CONFIG_H

/* Application configuration                                                 */
#define APP_USE_GCLK			1
#define APP_USE_PM				0
#define APP_USE_SYSCTRL		0
#define APP_USE_WDT				0
#define APP_USE_RTC				0
#define APP_USE_EIC				0
#define APP_USE_PORT			0
#define APP_USE_SERCOM		0
#define APP_USE_UART			0
#define APP_USE_SPI				0
#define APP_USE_I2C				0
#define APP_USE_TC				0

/* Device main header files                                                  */
#include "SAMD20.h"
#include "main.h"
#include "types.h"

/* Conditionally include                                                     */
#if (APP_USE_GCLK)
#include "gclk.h"
#endif

#if (APP_USE_PM)
#include "pm.h"
#endif

#if (APP_USE_SYSCTRL)
#include "sysctrl.h"
#endif

#if (APP_USE_WDT)
#include "wdt.h"
#endif

#if (APP_USE_RTC)
#include "rtc.h"
#endif

#if (APP_USE_EIC)
#include "eic.h"
#endif

#endif /*CONFIG_H*/
