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

__IO uint32_t Time = 0;

void SysTick_Handler(void)
{
	Time++;
}

void DelayMs(uint32_t delay)
{
	Time = 0;
	while(Time<=delay);
}

int main(void)
{
	SystemInit();					// System Clock 2 MHz
	SysTick_Config(2000); // SysTick Timer 1ms 
	GPIO_Init();
	while(1)
	{
		LED_Toggle();
		DelayMs(250);
	}
}

/************************ (C) COPYRIGHT emrahbudak *****END OF FILE****/
