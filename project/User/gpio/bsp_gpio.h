#ifndef __GPIO_H
#define	__GPIO_H

#include "stm32f10x.h"


/* GPIO��Ŷ��� */
#define A 1
#define B 2
#define C 3
#define D 4
#define E 5
#define F 6
#define G 7

#define	GPIO_H(p,i)		 {p->BSRR=i;}	 //���Ϊ�ߵ�ƽ		
#define GPIO_L(p,i)		 {p->BRR=i;}	 //����͵�ƽ
#define GPIO_T(p,i)      {p->ODR ^=i;}   //�����ת״̬

/* ʼ��Ĭ���ٶ�Ϊ50MHz */
#define GPIO_A_G_Init_Default(GPIO,GPIO_Pin,GPIO_Mode) GPIO_A_G_Init(GPIO,GPIO_Pin,GPIO_Mode,GPIO_Speed_50MHz)  

void GPIO_A_G_Init(uint8_t GPIO,uint16_t GPIO_Pin,GPIOMode_TypeDef GPIO_Mode,GPIOSpeed_TypeDef GPIO_Speed);
/* IO��ʼ�� */
void GPIOA_Init(uint16_t GPIO_Pin,GPIOMode_TypeDef GPIO_Mode,GPIOSpeed_TypeDef GPIO_Speed);
void GPIOB_Init(uint16_t GPIO_Pin,GPIOMode_TypeDef GPIO_Mode,GPIOSpeed_TypeDef GPIO_Speed);
void GPIOC_Init(uint16_t GPIO_Pin,GPIOMode_TypeDef GPIO_Mode,GPIOSpeed_TypeDef GPIO_Speed);
void GPIOD_Init(uint16_t GPIO_Pin,GPIOMode_TypeDef GPIO_Mode,GPIOSpeed_TypeDef GPIO_Speed);
void GPIOE_Init(uint16_t GPIO_Pin,GPIOMode_TypeDef GPIO_Mode,GPIOSpeed_TypeDef GPIO_Speed);
void GPIOG_Init(uint16_t GPIO_Pin,GPIOMode_TypeDef GPIO_Mode,GPIOSpeed_TypeDef GPIO_Speed);

#endif /* __GPIO_H */
