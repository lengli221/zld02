#ifndef __APP_CFG_H_
#define __APP_CFG_H_

#define USART_485_Optimization_Debug					0/*调试串口逻辑--仅用于调试数据测试*/

/*
** 安卓对接硬件选择
*/
#define Android_HWhioce_232								0x01/*智能充电柜--优选选择*/
#define Android_HWhioce_485								0x02/*智能充电柜--前期功能测试*/
#define Android_HWhioce									Android_HWhioce_232

/*波特率设置*/
#define BAUD_Updrage										115200


#endif

