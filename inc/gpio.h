/***********************************************************************	
 *
 * @core	      STM32L4
 * @author      Emrah BUDAK
 * @copyright   2019 eb
 *
 * Version:     1.0.0
 * Author:      @emrahbudak
 * Author URI:  https://github.com/STM32lib/STM32L4_GPIO.git
 *
***********************************************************************/

#ifndef __GPIO_H
#define __GPIO_H

/////////////////					GPIOA					////////////////////
//GPIOA 0
//GPIOA 1
//GPIOA 2
//GPIOA 3
//GPIOA 4
//GPIOA 5
//GPIOA 6
//GPIOA 7
//GPIOA 8
//GPIOA 9
//GPIOA 10
//GPIOA 11
//GPIOA 12
//GPIOA 13	SWDIO
//GPIOA 14	SWDCLK
//GPIOA 15

/////////////////					GPIOB					////////////////////
//GPIOB 0
//GPIOB 1

#define LED_Init()		GPIOB->MODER 		= (GPIOA->MODER & ~(GPIO_MODER_MODE3)) | (GPIO_MODER_MODE3_0);							// GPIOB 3 OUTPUT
#define LED_Speed()		GPIOB->OSPEEDR 	= (GPIOA->OSPEEDR & ~(GPIO_OSPEEDR_OSPEED3)) | (GPIO_OSPEEDR_OSPEED3_1);		// GPIOB 3 High Speed
#define LED_Low()			(GPIOB->ODR &= ~GPIO_ODR_OD3)
#define LED_High()		(GPIOB->ODR |= GPIO_ODR_OD3)
#define LED_Toggle()	(GPIOB->ODR ^= GPIO_ODR_OD3)

//GPIOB 4
//GPIOB 5
//GPIOB 6
//GPIOB 7

/////////////////					GPIOC					////////////////////
//GPIOC 14
//GPIOC 15

void GPIO_Init(void);

#endif /* __GPIO_H */

/************************ (C) COPYRIGHT emrahbudak *****END OF FILE****/
