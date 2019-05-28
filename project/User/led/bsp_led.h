#ifndef __LED_H
#define	__LED_H

#include "stm32f10x.h"
#include "bsp_gpio.h" 


/* 定义LED连接的GPIO端口, 用户只需要修改下面的代码即可改变控制的LED引脚 */
// R-红色
#define LED1_PORT    	B			            /* GPIO端口 */
#define LED1_PIN		GPIO_Pin_13			    /* led的GPIO */

void LED_GPIO_Config(void);

#endif /* __LED_H */
