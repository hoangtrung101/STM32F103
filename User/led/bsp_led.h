#ifndef __LED_H_
#define	__LED_H_



#include "stm32f10x.h"
 
 
 
/****************************** LED �������ò�������***************************************/
#define             macLED1_GPIO_APBxClock_FUN              RCC_APB2PeriphClockCmd
#define             macLED1_GPIO_CLK                        RCC_APB2Periph_GPIOC
#define             macLED1_GPIO_PORT                       GPIOC
#define             macLED1_GPIO_PIN                        GPIO_Pin_6

#define             macLED2_GPIO_APBxClock_FUN              RCC_APB2PeriphClockCmd
#define             macLED2_GPIO_CLK                        RCC_APB2Periph_GPIOC
#define             macLED2_GPIO_PORT                       GPIOC
#define             macLED2_GPIO_PIN                        GPIO_Pin_7

#define             macLED3_GPIO_APBxClock_FUN              RCC_APB2PeriphClockCmd
#define             macLED3_GPIO_CLK                        RCC_APB2Periph_GPIOD
#define             macLED3_GPIO_PORT                       GPIOD
#define             macLED3_GPIO_PIN                        GPIO_Pin_6



/****************************** LED �����궨��***************************************/
#define             macLED1_ON()                            GPIO_ResetBits ( macLED1_GPIO_PORT, macLED1_GPIO_PIN )
#define             macLED1_OFF()                           GPIO_SetBits ( macLED1_GPIO_PORT, macLED1_GPIO_PIN )
#define             macLED1_TOGGLE()                        GPIO_ReadOutputDataBit ( macLED1_GPIO_PORT, macLED1_GPIO_PIN ) ? \
                                                            GPIO_ResetBits ( macLED1_GPIO_PORT, macLED1_GPIO_PIN ) : GPIO_SetBits ( macLED1_GPIO_PORT, macLED1_GPIO_PIN )

#define             macLED2_ON()                            GPIO_ResetBits ( macLED2_GPIO_PORT, macLED2_GPIO_PIN )
#define             macLED2_OFF()                           GPIO_SetBits ( macLED2_GPIO_PORT, macLED2_GPIO_PIN )
#define             macLED2_TOGGLE()                        GPIO_ReadOutputDataBit ( macLED2_GPIO_PORT, macLED2_GPIO_PIN ) ? \
                                                            GPIO_ResetBits ( macLED2_GPIO_PORT, macLED2_GPIO_PIN ) : GPIO_SetBits ( macLED2_GPIO_PORT, macLED2_GPIO_PIN )

#define             macLED3_ON()                            GPIO_ResetBits ( macLED3_GPIO_PORT, macLED3_GPIO_PIN )
#define             macLED3_OFF()                           GPIO_SetBits ( macLED3_GPIO_PORT, macLED3_GPIO_PIN )
#define             macLED3_TOGGLE()                        GPIO_ReadOutputDataBit ( macLED3_GPIO_PORT, macLED3_GPIO_PIN ) ? \
                                                            GPIO_ResetBits ( macLED3_GPIO_PORT, macLED3_GPIO_PIN ) : GPIO_SetBits ( macLED3_GPIO_PORT, macLED3_GPIO_PIN )



/************************** PAD ��������********************************/
void                               LED_Init                         ( void );
 
 

#endif /* __LED_H_ */
