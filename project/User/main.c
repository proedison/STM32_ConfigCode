/**
  ******************************************************************************
  * @file    main.c
  * @author  edison
  * @version V1.0
  * @date    2019-xx-xx
  * @brief   测试led
  ******************************************************************************
  * @attention
  *
  *
  ******************************************************************************
  */ 
	
#include "stm32f10x.h"
#include "bsp_led.h"

void Delay(__IO u32 nCount); 

/*testtesttest*/
/**
  * @brief  主函数
  * @param  无  
  * @retval 无
  */
int main(void)
{	
	/* LED 端口初始化 */
	LED_GPIO_Config();	
	
	while (1)
	{
		GPIO_T(GPIOB,GPIO_Pin_13);
		Delay(0X1FFFFF);
		GPIO_T(GPIOB,GPIO_Pin_13);
		Delay(0X1FFFFF);
	}
}


void Delay(__IO uint32_t nCount)	 //简单的延时函数
{
	for(; nCount != 0; nCount--);
}

/*********************************************END OF FILE**********************/
