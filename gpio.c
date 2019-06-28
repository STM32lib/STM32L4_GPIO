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

#include "main.h"

void GPIO_Init(void)
{
	RCC->AHB2ENR |=  RCC_AHB2ENR_GPIOBEN; // GPIOB CLOCK ENABLED
	
	LED_Low();
	LED_Init();
	LED_Speed();
	
} 

/************************ (C) COPYRIGHT emrahbudak *****END OF FILE****/
