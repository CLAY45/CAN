#ifndef _USART_H
#define _USART_H

#include "stm32f10x.h"
#include "stdio.h"

void USART1_Config(void);
int fputc(int ch, FILE *f);
void USART1_printf(USART_TypeDef* USARTx, uint8_t *Data,...);



#endif


