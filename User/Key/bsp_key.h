#ifndef __KEY_H
#define	__KEY_H



#include "stm32f10x.h"



/************************************ ≈‰÷√ KEY1 *********************************/
#define               macKEY1_GPIO_CLK                      RCC_APB2Periph_GPIOE
#define               macKEY1_GPIO_PORT    	                GPIOE			   
#define               macKEY1_GPIO_PIN		                  GPIO_Pin_5
#define               macKEY1_GPIO_Mode		                  GPIO_Mode_IPU



/************************************ ≈‰÷√ KEY2 *********************************/
#define               macKEY2_GPIO_CLK                      RCC_APB2Periph_GPIOE
#define               macKEY2_GPIO_PORT    	                GPIOE
#define               macKEY2_GPIO_PIN		                  GPIO_Pin_4
#define               macKEY2_GPIO_Mode		                  GPIO_Mode_IPU



void    Key_Initial ( void );
uint8_t Key_Scan    ( GPIO_TypeDef * GPIOx, uint16_t GPIO_Pin, uint8_t ucPushState, uint8_t * pKeyPress );


#endif /* __KEY_H */

