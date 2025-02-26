#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

#define     __IO    volatile
typedef unsigned int uint32_t;
typedef unsigned short uint16_t;
typedef unsigned char  uint8_t;

typedef struct
{
	__IO uint32_t MODER;    /*!< GPIO port mode register,               Address offset: 0x00      */
	__IO uint32_t OTYPER;   /*!< GPIO port output type register,        Address offset: 0x04      */
	__IO uint32_t OSPEEDR;  /*!< GPIO port output speed register,       Address offset: 0x08      */
	__IO uint32_t PUPDR;    /*!< GPIO port pull-up/pull-down register,  Address offset: 0x0C      */
	__IO uint32_t IDR;      /*!< GPIO port input data register,         Address offset: 0x10      */
	__IO uint32_t ODR;      /*!< GPIO port output data register,        Address offset: 0x14      */
	__IO uint32_t BSRR;     /*!< GPIO port bit set/reset register,      Address offset: 0x18      */
	__IO uint32_t LCKR;     /*!< GPIO port configuration lock register, Address offset: 0x1C      */
	__IO uint32_t AFR[2];   /*!< GPIO alternate function registers,     Address offset: 0x20-0x24 */
} GPIO_TypeDef;



int main()
{
	GPIO_TypeDef *g_uart;
	*g_uart = { 0 };
	printf("%p %d\n", g_uart, g_uart->MODER);
	return 0;
}




