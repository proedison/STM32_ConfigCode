#ifndef __LED_H
#define	__LED_H

#include "stm32f10x.h"
#include "bsp_gpio.h" 


/* ����LED���ӵ�GPIO�˿�, �û�ֻ��Ҫ�޸�����Ĵ��뼴�ɸı���Ƶ�LED���� */
// R-��ɫ
#define LED1_PORT    	B			            /* GPIO�˿� */
#define LED1_PIN		GPIO_Pin_13			    /* led��GPIO */

void LED_GPIO_Config(void);

#endif /* __LED_H */
