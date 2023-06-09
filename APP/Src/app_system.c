#include "includes.h" 


/************************************************/
//函数功能：中断优先级配置
//输入参数：
//返回值：
//备注：
/************************************************/
void NVIC_Configuration(void)
{
	NVIC_InitTypeDef NVIC_InitStructure; 
	//设置中断组为1
//	NVIC_PriorityGroupConfig(NVIC_PriorityGroup_1);	   					// 中断分组
	//USART1
	NVIC_InitStructure.NVIC_IRQChannel = USART1_IRQn;           // 配置USART为中断源 
	NVIC_InitStructure.NVIC_IRQChannelPreemptionPriority = 1;   // 抢占优先级为0
	NVIC_InitStructure.NVIC_IRQChannelSubPriority = 0;          // 子优先级为1
	NVIC_InitStructure.NVIC_IRQChannelCmd = ENABLE;             // 使能中断 
	NVIC_Init(&NVIC_InitStructure);	                            // 初始化配置NVIC 	
	//USART2
	NVIC_InitStructure.NVIC_IRQChannel = USART2_IRQn;           // 配置USART为中断源 
	NVIC_InitStructure.NVIC_IRQChannelPreemptionPriority = 1;   // 抢占优先级为0
	NVIC_InitStructure.NVIC_IRQChannelSubPriority = 0;          // 子优先级为1
	NVIC_InitStructure.NVIC_IRQChannelCmd = ENABLE;             // 使能中断 
	NVIC_Init(&NVIC_InitStructure);	   
	//USART3
	NVIC_InitStructure.NVIC_IRQChannel = USART3_IRQn;           // 配置USART为中断源 
	NVIC_InitStructure.NVIC_IRQChannelPreemptionPriority = 0;   // 抢占优先级为0
	NVIC_InitStructure.NVIC_IRQChannelSubPriority = 0;          // 子优先级为1
	NVIC_InitStructure.NVIC_IRQChannelCmd = ENABLE;             // 使能中断 
	NVIC_Init(&NVIC_InitStructure);	                            // 初始化配置NVIC 	
	//UART4
	NVIC_InitStructure.NVIC_IRQChannel = UART4_IRQn;           	// 配置USART为中断源 
	NVIC_InitStructure.NVIC_IRQChannelPreemptionPriority = 0;   // 抢占优先级为0
	NVIC_InitStructure.NVIC_IRQChannelSubPriority = 0;          // 子优先级为1
	NVIC_InitStructure.NVIC_IRQChannelCmd = ENABLE;             // 使能中断 
	NVIC_Init(&NVIC_InitStructure);	        
	//UART5
	NVIC_InitStructure.NVIC_IRQChannel = UART5_IRQn;           	// 配置USART为中断源 
	NVIC_InitStructure.NVIC_IRQChannelPreemptionPriority = 1;   // 抢占优先级为0
	NVIC_InitStructure.NVIC_IRQChannelSubPriority = 0;          // 子优先级为1
	NVIC_InitStructure.NVIC_IRQChannelCmd = ENABLE;             // 使能中断 
	NVIC_Init(&NVIC_InitStructure);	                            // 初始化配置NVIC 	
//  //10us基本定时器
//	NVIC_InitStructure.NVIC_IRQChannel = TIM1_UP_TIM10_IRQn;
//	NVIC_InitStructure.NVIC_IRQChannelPreemptionPriority = 0;   // 抢占优先级3
//	NVIC_InitStructure.NVIC_IRQChannelSubPriority = 0;	        // 子优先级3
//	NVIC_InitStructure.NVIC_IRQChannelCmd = ENABLE;			        // IRQ通道使能
//	NVIC_Init(&NVIC_InitStructure);	                            // 初始化配置NVIC 
//	//输入捕获
//	NVIC_InitStructure.NVIC_IRQChannel = TIM8_CC_IRQn;
//	NVIC_InitStructure.NVIC_IRQChannelPreemptionPriority = 0;   // 抢占优先级3
//	NVIC_InitStructure.NVIC_IRQChannelSubPriority = 0;	        // 子优先级3
//	NVIC_InitStructure.NVIC_IRQChannelCmd = ENABLE;			        // IRQ通道使能
//	NVIC_Init(&NVIC_InitStructure);	                            // 初始化配置NVIC 
//  //1ms基本定时器
//	NVIC_InitStructure.NVIC_IRQChannel = TIM2_IRQn;             // 配置USART为中断源 
//	NVIC_InitStructure.NVIC_IRQChannelPreemptionPriority = 1;   // 抢占优先级为0
//	NVIC_InitStructure.NVIC_IRQChannelSubPriority = 0;          // 子优先级为1
//	NVIC_InitStructure.NVIC_IRQChannelCmd = ENABLE;             // 使能中断 
//	NVIC_Init(&NVIC_InitStructure);	                            // 初始化配置NVIC 
//	
//	NVIC_InitStructure.NVIC_IRQChannel = TIM7_IRQn;
//	NVIC_InitStructure.NVIC_IRQChannelPreemptionPriority = 1 ;	// 抢占优先级0
//	NVIC_InitStructure.NVIC_IRQChannelSubPriority = 0;					// 子优先级1
//	NVIC_InitStructure.NVIC_IRQChannelCmd = ENABLE;							// IRQ通道使能
//	NVIC_Init(&NVIC_InitStructure);	                            // 初始化配置NVIC 
//	                               
// 	NVIC_InitStructure.NVIC_IRQChannel = DMA2_Stream0_IRQn;     // 配置DMA为中断源 
//	NVIC_InitStructure.NVIC_IRQChannelPreemptionPriority = 1;   // 抢占优先级为0
//	NVIC_InitStructure.NVIC_IRQChannelSubPriority = 0;          // 子优先级为1
//	NVIC_InitStructure.NVIC_IRQChannelCmd = ENABLE;             // 使能中断 
//	NVIC_Init(&NVIC_InitStructure);	                            // 初始化配置NVIC 
//  //外部中断
//	NVIC_InitStructure.NVIC_IRQChannel = EXTI0_IRQn;            // 外部中断
//	NVIC_InitStructure.NVIC_IRQChannelPreemptionPriority = 0;   // 抢占优先级为0
//	NVIC_InitStructure.NVIC_IRQChannelSubPriority = 0;          // 子优先级为1
//	NVIC_InitStructure.NVIC_IRQChannelCmd = ENABLE;             // 使能中断 
//	NVIC_Init(&NVIC_InitStructure);	                            // 初始化配置NVIC 
//	//外部中断
//	NVIC_InitStructure.NVIC_IRQChannel = EXTI1_IRQn;            // 外部中断
//	NVIC_InitStructure.NVIC_IRQChannelPreemptionPriority = 0;   // 抢占优先级为0
//	NVIC_InitStructure.NVIC_IRQChannelSubPriority = 0;          // 子优先级为1
//	NVIC_InitStructure.NVIC_IRQChannelCmd = ENABLE;             // 使能中断 
//	NVIC_Init(&NVIC_InitStructure);	                            // 初始化配置NVIC 
//	//外部中断
//	NVIC_InitStructure.NVIC_IRQChannel = EXTI9_5_IRQn;          // 外部中断
//	NVIC_InitStructure.NVIC_IRQChannelPreemptionPriority = 1;   // 抢占优先级为0
//	NVIC_InitStructure.NVIC_IRQChannelSubPriority = 0;          // 子优先级为1
//	NVIC_InitStructure.NVIC_IRQChannelCmd = ENABLE;             // 使能中断 
//	NVIC_Init(&NVIC_InitStructure);	                            // 初始化配置NVIC 	
//  //外部中断
//  NVIC_InitStructure.NVIC_IRQChannel = EXTI15_10_IRQn;        // 外部中断
//  NVIC_InitStructure.NVIC_IRQChannelPreemptionPriority = 1;   // 抢占优先级3
//  NVIC_InitStructure.NVIC_IRQChannelSubPriority = 0;          // 子优先级2
//  NVIC_InitStructure.NVIC_IRQChannelCmd = ENABLE;             // 使能外部中断通道
//  NVIC_Init(&NVIC_InitStructure);                             // 初始化配置NVIC 	
}


/************************************************/
//函数功能：初始化系统硬件资源
//输入参数：
//返回值：
//备注：
/************************************************/
void System_Board_Init(void)
{
	taskENTER_CRITICAL();           		//进入临界区
	
//	SystemInit();		        						//配置系统时钟为72M
	delay_init(168);  									//时钟初始化
	LED_GPIO_Cfg_Init();								//LED初始化
	BEEP_GPIO_Cfg_Init();								//蜂鸣器初始化
	Lamp_GPIO_Cfg_Init();								//警示灯初始化
	PowerSys_Gpio_Cfg_Init();						//电源控制初始化
	PC_Power_Cfg_Init(PC_STARTUP_OFF);	//工控机开机信号初始化
	IR_Decoding_GPIO_Cfg_Init();				//红外解码初始化
	Crash_Gpio_Cfg_Init();							//防撞条信号初始化
	LiftMoto_Gpio_Cfg_Init();						//升降电机信号初始化
	LimitSwitch_Gpio_Cfg_Init();				//限位开关初始化
	ADC_Cfg_Init();    									//ADC初始化
	AT24CXX_Init();											//AT24C02初始化
//	IWDG_Init(4,500); 									//与分频数为64,重载值为500,溢出时间为1s	
	
	//定时器初始化
	TIMx_Cfg_Init(RCC_APB2Periph_TIM1, TIM1, 10, 168);   	//1ms timer
	TIMx_Cfg_Init(RCC_APB1Periph_TIM2, TIM2, 1000, 84);  	//10us timer
	TIMx_Cfg_Init(RCC_APB1Periph_TIM7, TIM7, 100, 840);		//10ms timer
	PWM_Head_Cfg_Init(20000, 84);   		//TIM4 PWM初始化
//	TIM8_Configuration();								//TIM8 输入捕获初始化
	
	//串口初始化
  USARTx_Cfg_Init(USART1, 115200);  	//USART to printf 
	USARTx_Cfg_Init(USART2, 9600);    	//USART to 
	USARTx_Cfg_Init(USART3, 9600);    	//USART to PC
	USARTx_Cfg_Init(UART5, 9600);       //USART to Environmental
	RS485_Cfg_Init(115200);  						//UART4 to moto drv
	
	//内存初始化
	my_mem_init(SRAMIN);								//初始化内部内存池 
//	my_mem_init(SRAMEX);								//初始化外部内存池
	my_mem_init(SRAMCCM);								//初始化CCM内存池 

	taskEXIT_CRITICAL();            //退出临界区	 
	printf("Bsp init OK!\r\n");
}


/************************************************/
//函数功能：系统启动蜂鸣器提示
//输入参数：
//返回值：
//备注：
/************************************************/
void System_StartTips(void)
{
	LED_GREEN_ON;
	LED_TEST_ON;
	BEEP_ON;
	delay_ms(100);
	LED_GREEN_OFF;
	LED_TEST_OFF;
	BEEP_OFF;
	delay_ms(200);
	
	LED_GREEN_ON;
	LED_TEST_ON;
	BEEP_ON ;
	delay_ms(100);
	LED_GREEN_OFF;
	LED_TEST_OFF;
	BEEP_OFF;
	delay_ms(200);	
	
	LED_GREEN_ON;
	LED_TEST_ON;
	BEEP_ON ;
	delay_ms(100);
	BEEP_OFF;
	LED_GREEN_OFF;
	LED_TEST_OFF;
	delay_ms(200);
}
