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

/**
  * @brief  主函数
  * @param  无  
  * @retval 无
  */
int main(void)
{	
	uint8_t i;
	/* LED 端口初始化 */
	LED_GPIO_Config();	 
	while (1)
	{
		
	}
}

void Delay(__IO uint32_t nCount)	 //简单的延时函数
{
	for(; nCount != 0; nCount--);
}

/*********************************************END OF FILE**********************/
