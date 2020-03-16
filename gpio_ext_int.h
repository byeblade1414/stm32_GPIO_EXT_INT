#ifndef _GPIO_EXT_INT_H_INCLUDED
#define _GPIO_EXT_INT_H_INCLUDED

#ifndef __STM32F10x_H
#include <stm32f10x.h>
#endif

#ifndef _SYS__STDINT_H
#define _SYS__STDINT_H
#endif


// Interrupt handler should be written in main.c file with '"irqnumber"'Handler function name
// Do not forget to clear pending register with EXTI->PR |= (1 << pinNumber)
// TEMPLATE

// EXTIx_IRQHandler() // template irq handler for exti 1 to 4, (seperated vector adress).
//{
//	EXTI->PR |= (1 << pinNumber);
//	*
//	*
//	*
//
//}

// EXTI9_5_IRQHandler() // template irq handler for exti 9 to 5 (same vector adress), distinguish by clearing appropriate pending register.
//{
//	EXTI->PR |= (1 << pinNumber);
//	*
//	*
//	*
//
//}

// EXTI15_10_IRQHandler() // template irq handler for exti 15 to 10 (same vector adress), distinguish by clearing appropriate pending register.
//{
//	EXTI->PR |= (1 << pinNumber);
//	*
//	*
//	*
//
//}




typedef enum{
	RISING = 0,
	FALLING = 1,
	RISING_FALLING = 2
}EDGE_TYPE;





void GPIO_EXT_INIT();
void GPIO_EXT_DEINIT();
void GPIO_EXT_ATTACH_INT(GPIO_TypeDef *port, uint8_t pinNumber,EDGE_TYPE edge);






#endif
