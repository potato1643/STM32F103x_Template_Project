#include "sys.h"
#include "delay.h"
#include "usart.h"
#include "led.h"
 
 
/************************************************
 ALIENTEKս��STM32������ʵ��1
 �����ʵ�� 
 ����֧�֣�www.openedv.com
 �Ա����̣�http://eboard.taobao.com 
 ��ע΢�Ź���ƽ̨΢�źţ�"����ԭ��"����ѻ�ȡSTM32���ϡ�
 ������������ӿƼ����޹�˾  
 ���ߣ�����ԭ�� @ALIENTEK
************************************************/





 /**
 *****************����ע�ӵĴ�����ͨ�����ÿ⺯����ʵ��IO���Ƶķ���*****************************************/
int main(void)
{ 
 
	delay_init();		  //��ʼ����ʱ����
	LED_Init();		      //��ʼ��LED�˿�
	while(1)
	{
		LED0 = 0;                            //LED0��Ӧ��������͵�ƽ��LED0����
		//GPIO_ResetBits(GPIOA, GPIO_Pin_2);  //LED0��Ӧ����GPIOA.2���ͣ���  ��ͬLED0=0;
		
		delay_ms(300);  		             //��ʱ300ms

		LED0 = 1;                          //LED0��Ӧ��������ߵ�ƽ��LED0Ϩ��
		//GPIO_SetBits(GPIOA,GPIO_Pin_2);	   //LED0��Ӧ����GPIOB.5���ߣ���  ��ͬLED0=1;
		delay_ms(300);                     //��ʱ300ms
	}
} 
 

 

	
/**
*******************����ע�͵��Ĵ�����ͨ�� ֱ�Ӳ����Ĵ��� ��ʽʵ��IO�ڿ���**************************************
int main(void)
{ 
 
	delay_init();		  //��ʼ����ʱ����
	LED_Init();		        //��ʼ��LED�˿�
	while(1)
	{
     GPIOB->BRR=GPIO_Pin_5;//LED0��
	   GPIOE->BSRR=GPIO_Pin_5;//LED1��
		 delay_ms(300);
     GPIOB->BSRR=GPIO_Pin_5;//LED0��
	   GPIOE->BRR=GPIO_Pin_5;//LED1��
		 delay_ms(300);

	 }
 }
**************************************************************************************************
**/

