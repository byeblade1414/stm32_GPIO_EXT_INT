#include <gpio_ext_int.h>





void GPIO_EXT_INIT()
{
	RCC->APB2ENR |= RCC_APB2ENR_AFIOEN; // enable afio clock for interrupt.
}

void GPIO_EXT_DEINIT()
{
	RCC->APB2RSTR &= ~(RCC_APB2ENR_AFIOEN); // disable afio bit for interrupt.
}

void GPIO_EXT_ATTACH_INT(GPIO_TypeDef *port, uint8_t pinNumber,EDGE_TYPE edge)
{
	if(port == GPIOA)
	{
		if(pinNumber == 0)
		{
			AFIO->EXTICR[0] |= AFIO_EXTICR1_EXTI0_PA;
			NVIC_EnableIRQ(EXTI0_IRQn);
		}
		if(pinNumber == 1)
		{
			AFIO->EXTICR[0] |= AFIO_EXTICR1_EXTI1_PA;
			NVIC_EnableIRQ(EXTI1_IRQn);
		}
		if(pinNumber == 2)
		{
			AFIO->EXTICR[0] |= AFIO_EXTICR1_EXTI2_PA;
			NVIC_EnableIRQ(EXTI2_IRQn);
		}
		if(pinNumber == 3)
		{
			AFIO->EXTICR[0] |= AFIO_EXTICR1_EXTI3_PA;
			NVIC_EnableIRQ(EXTI3_IRQn);
		}
		if(pinNumber == 4)
		{
			AFIO->EXTICR[1] |= AFIO_EXTICR2_EXTI4_PA;
			NVIC_EnableIRQ(EXTI4_IRQn);
		}
		if(pinNumber == 5)
		{
			AFIO->EXTICR[1] |= AFIO_EXTICR2_EXTI5_PA;
			NVIC_EnableIRQ(EXTI9_5_IRQn);
		}
		if(pinNumber == 6)
		{
			AFIO->EXTICR[1] |= AFIO_EXTICR2_EXTI6_PA;
			NVIC_EnableIRQ(EXTI9_5_IRQn);
		}
		if(pinNumber == 7)
		{
			AFIO->EXTICR[1] |= AFIO_EXTICR2_EXTI6_PA;
			NVIC_EnableIRQ(EXTI9_5_IRQn);
		}
		if(pinNumber == 8)
		{
			AFIO->EXTICR[2] |= AFIO_EXTICR3_EXTI8_PA;
			NVIC_EnableIRQ(EXTI9_5_IRQn);
		}
		if(pinNumber == 9)
		{
			AFIO->EXTICR[2] |= AFIO_EXTICR3_EXTI9_PA;
			NVIC_EnableIRQ(EXTI9_5_IRQn);
		}
		if(pinNumber == 10)
		{
			AFIO->EXTICR[2] |= AFIO_EXTICR3_EXTI10_PA;
			NVIC_EnableIRQ(EXTI15_10_IRQn);
		}
		if(pinNumber == 11)
		{
			AFIO->EXTICR[2] |= AFIO_EXTICR3_EXTI11_PA;
			NVIC_EnableIRQ(EXTI15_10_IRQn);
		}
		if(pinNumber == 12)
		{
			AFIO->EXTICR[3] |= AFIO_EXTICR4_EXTI12_PA;
			NVIC_EnableIRQ(EXTI15_10_IRQn);
		}
		if(pinNumber == 13)
		{
			AFIO->EXTICR[3] |= AFIO_EXTICR4_EXTI13_PA;
			NVIC_EnableIRQ(EXTI15_10_IRQn);
		}
		if(pinNumber == 14)
		{
			AFIO->EXTICR[3] |= AFIO_EXTICR4_EXTI14_PA;
			NVIC_EnableIRQ(EXTI15_10_IRQn);
		}
		if(pinNumber == 15)
		{
			AFIO->EXTICR[3] |= AFIO_EXTICR4_EXTI15_PA;
			NVIC_EnableIRQ(EXTI15_10_IRQn);
		}

	}
	if(port == GPIOB)
	{
		if(pinNumber == 0)
		{
			AFIO->EXTICR[0] |= AFIO_EXTICR1_EXTI0_PB;
			NVIC_EnableIRQ(EXTI0_IRQn);
		}
		if(pinNumber == 1)
		{
			AFIO->EXTICR[0] |= AFIO_EXTICR1_EXTI1_PB;
			NVIC_EnableIRQ(EXTI1_IRQn);
		}
		if(pinNumber == 2)
		{
			AFIO->EXTICR[0] |= AFIO_EXTICR1_EXTI2_PB;
			NVIC_EnableIRQ(EXTI2_IRQn);
		}
		if(pinNumber == 3)
		{
			AFIO->EXTICR[0] |= AFIO_EXTICR1_EXTI3_PB;
			NVIC_EnableIRQ(EXTI3_IRQn);
		}
		if(pinNumber == 4)
		{
			AFIO->EXTICR[1] |= AFIO_EXTICR2_EXTI4_PB;
			NVIC_EnableIRQ(EXTI4_IRQn);
		}
		if(pinNumber == 5)
		{
			AFIO->EXTICR[1] |= AFIO_EXTICR2_EXTI5_PB;
			NVIC_EnableIRQ(EXTI9_5_IRQn);
		}
		if(pinNumber == 6)
		{
			AFIO->EXTICR[1] |= AFIO_EXTICR2_EXTI6_PB;
			NVIC_EnableIRQ(EXTI9_5_IRQn);
		}
		if(pinNumber == 7)
		{
			AFIO->EXTICR[1] |= AFIO_EXTICR2_EXTI7_PB;
			NVIC_EnableIRQ(EXTI9_5_IRQn);
		}
		if(pinNumber == 8)
		{
			AFIO->EXTICR[2] |= AFIO_EXTICR3_EXTI8_PB;
			NVIC_EnableIRQ(EXTI9_5_IRQn);
		}
		if(pinNumber == 9)
		{
			AFIO->EXTICR[2] |= AFIO_EXTICR3_EXTI9_PB;
			NVIC_EnableIRQ(EXTI9_5_IRQn);
		}
		if(pinNumber == 10)
		{
			AFIO->EXTICR[2] |= AFIO_EXTICR3_EXTI10_PB;
			NVIC_EnableIRQ(EXTI15_10_IRQn);
		}
		if(pinNumber == 11)
		{
			AFIO->EXTICR[2] |= AFIO_EXTICR3_EXTI11_PB;
			NVIC_EnableIRQ(EXTI15_10_IRQn);
		}
		if(pinNumber == 12)
		{
			AFIO->EXTICR[3] |= AFIO_EXTICR4_EXTI12_PB;
			NVIC_EnableIRQ(EXTI15_10_IRQn);
		}
		if(pinNumber == 13)
		{
			AFIO->EXTICR[3] |= AFIO_EXTICR4_EXTI13_PB;
			NVIC_EnableIRQ(EXTI15_10_IRQn);
		}
		if(pinNumber == 14)
		{
			AFIO->EXTICR[3] |= AFIO_EXTICR4_EXTI14_PB;
			NVIC_EnableIRQ(EXTI15_10_IRQn);
		}
		if(pinNumber == 15)
		{
			AFIO->EXTICR[3] |= AFIO_EXTICR4_EXTI15_PB;
			NVIC_EnableIRQ(EXTI15_10_IRQn);
		}

	}
	if(port == GPIOC)
	{
		if(pinNumber == 0)
		{
			AFIO->EXTICR[0] |= AFIO_EXTICR1_EXTI0_PC;
			NVIC_EnableIRQ(EXTI0_IRQn);
		}
		if(pinNumber == 1)
		{
			AFIO->EXTICR[0] |= AFIO_EXTICR1_EXTI1_PC;
			NVIC_EnableIRQ(EXTI1_IRQn);
		}
		if(pinNumber == 2)
		{
			AFIO->EXTICR[0] |= AFIO_EXTICR1_EXTI2_PC;
			NVIC_EnableIRQ(EXTI2_IRQn);
		}
		if(pinNumber == 3)
		{
			AFIO->EXTICR[0] |= AFIO_EXTICR1_EXTI3_PC;
			NVIC_EnableIRQ(EXTI3_IRQn);
		}
		if(pinNumber == 4)
		{
			AFIO->EXTICR[1] |= AFIO_EXTICR2_EXTI4_PC;
			NVIC_EnableIRQ(EXTI4_IRQn);
		}
		if(pinNumber == 5)
		{
			AFIO->EXTICR[1] |= AFIO_EXTICR2_EXTI5_PC;
			NVIC_EnableIRQ(EXTI9_5_IRQn);
		}
		if(pinNumber == 6)
		{
			AFIO->EXTICR[1] |= AFIO_EXTICR2_EXTI6_PC;
			NVIC_EnableIRQ(EXTI9_5_IRQn);
		}
		if(pinNumber == 7)
		{
			AFIO->EXTICR[1] |= AFIO_EXTICR2_EXTI7_PC;
			NVIC_EnableIRQ(EXTI9_5_IRQn);
		}
		if(pinNumber == 8)
		{
			AFIO->EXTICR[2] |= AFIO_EXTICR3_EXTI8_PC;
			NVIC_EnableIRQ(EXTI9_5_IRQn);
		}
		if(pinNumber == 9)
		{
			AFIO->EXTICR[2] |= AFIO_EXTICR3_EXTI9_PC;
			NVIC_EnableIRQ(EXTI9_5_IRQn);
		}
		if(pinNumber == 10)
		{
			AFIO->EXTICR[2] |= AFIO_EXTICR3_EXTI10_PC;
			NVIC_EnableIRQ(EXTI15_10_IRQn);
		}
		if(pinNumber == 11)
		{
			AFIO->EXTICR[2] |= AFIO_EXTICR3_EXTI11_PC;
			NVIC_EnableIRQ(EXTI15_10_IRQn);
		}
		if(pinNumber == 12)
		{
			AFIO->EXTICR[3] |= AFIO_EXTICR4_EXTI12_PC;
			NVIC_EnableIRQ(EXTI15_10_IRQn);
		}
		if(pinNumber == 13)
		{
			AFIO->EXTICR[3] |= AFIO_EXTICR4_EXTI13_PC;
			NVIC_EnableIRQ(EXTI15_10_IRQn);
		}
		if(pinNumber == 14)
		{
			AFIO->EXTICR[3] |= AFIO_EXTICR4_EXTI14_PC;
			NVIC_EnableIRQ(EXTI15_10_IRQn);
		}
		if(pinNumber == 15)
		{
			AFIO->EXTICR[3] |= AFIO_EXTICR4_EXTI15_PC;
			NVIC_EnableIRQ(EXTI15_10_IRQn);
		}


	}
	if(port == GPIOD)
	{
		if(pinNumber == 0)
		{
			AFIO->EXTICR[0] |= AFIO_EXTICR1_EXTI0_PD;
			NVIC_EnableIRQ(EXTI0_IRQn);
		}
		if(pinNumber == 1)
		{
			AFIO->EXTICR[0] |= AFIO_EXTICR1_EXTI1_PD;
			NVIC_EnableIRQ(EXTI1_IRQn);
		}
		if(pinNumber == 2)
		{
			AFIO->EXTICR[0] |= AFIO_EXTICR1_EXTI2_PD;
			NVIC_EnableIRQ(EXTI2_IRQn);
		}
		if(pinNumber == 3)
		{
			AFIO->EXTICR[0] |= AFIO_EXTICR1_EXTI3_PD;
			NVIC_EnableIRQ(EXTI3_IRQn);
		}
		if(pinNumber == 4)
		{
			AFIO->EXTICR[1] |= AFIO_EXTICR2_EXTI4_PD;
			NVIC_EnableIRQ(EXTI4_IRQn);
		}
		if(pinNumber == 5)
		{
			AFIO->EXTICR[1] |= AFIO_EXTICR2_EXTI5_PD;
			NVIC_EnableIRQ(EXTI9_5_IRQn);
		}
		if(pinNumber == 6)
		{
			AFIO->EXTICR[1] |= AFIO_EXTICR2_EXTI6_PD;
			NVIC_EnableIRQ(EXTI9_5_IRQn);
		}
		if(pinNumber == 7)
		{
			AFIO->EXTICR[1] |= AFIO_EXTICR2_EXTI7_PD;
			NVIC_EnableIRQ(EXTI9_5_IRQn);
		}
		if(pinNumber == 8)
		{
			AFIO->EXTICR[2] |= AFIO_EXTICR3_EXTI8_PD;
			NVIC_EnableIRQ(EXTI9_5_IRQn);
		}
		if(pinNumber == 9)
		{
			AFIO->EXTICR[2] |= AFIO_EXTICR3_EXTI9_PD;
			NVIC_EnableIRQ(EXTI9_5_IRQn);
		}
		if(pinNumber == 10)
		{
			AFIO->EXTICR[2] |= AFIO_EXTICR3_EXTI10_PD;
			NVIC_EnableIRQ(EXTI15_10_IRQn);
		}
		if(pinNumber == 11)
		{
			AFIO->EXTICR[2] |= AFIO_EXTICR3_EXTI11_PD;
			NVIC_EnableIRQ(EXTI15_10_IRQn);
		}
		if(pinNumber == 12)
		{
			AFIO->EXTICR[3] |= AFIO_EXTICR4_EXTI12_PD;
			NVIC_EnableIRQ(EXTI15_10_IRQn);
		}
		if(pinNumber == 13)
		{
			AFIO->EXTICR[3] |= AFIO_EXTICR4_EXTI13_PD;
			NVIC_EnableIRQ(EXTI15_10_IRQn);
		}
		if(pinNumber == 14)
		{
			AFIO->EXTICR[3] |= AFIO_EXTICR4_EXTI14_PD;
			NVIC_EnableIRQ(EXTI15_10_IRQn);
		}
		if(pinNumber == 15)
		{
			AFIO->EXTICR[3] |= AFIO_EXTICR4_EXTI15_PD;
			NVIC_EnableIRQ(EXTI15_10_IRQn);
		}

	}

	if(edge == RISING)  EXTI->RTSR |= (1 << pinNumber);
	if(edge == FALLING) EXTI->FTSR  |= (1 << pinNumber);
	if(edge == RISING_FALLING)
	{
		EXTI->RTSR |= (1 << pinNumber);
		EXTI->FTSR  |= (1 << pinNumber);
	}

	EXTI->IMR |= (1 << pinNumber);




}
