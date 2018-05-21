#ifndef _INCLUDE_H
#define _INCLUDE_H

#include "stm32f10x.h"
#include "USART.h"
#include "CAN.h"

__IO uint32_t flag = 0xff;		 //用于标志是否接收到数据，在中断函数中赋值
CanTxMsg TxMessage;			     //发送缓冲区
CanRxMsg RxMessage;				 //接收缓冲区

/*
 *  CAN 差分信号的表示
 *  1:隐性电平   H2.5v - L2.5v = 0v
 *  0:显性电平   H3.5v - L1.5v = 2v
 */


#endif
