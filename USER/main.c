#define MAIN_GLOBALS
#include "includes.h"


int main(void)
{ 
	System_Board_Init();		//初始化系统硬件资源
	NVIC_PriorityGroupConfig(NVIC_PriorityGroup_4);//设置系统中断优先级分组4
	NVIC_Configuration();		//中断优先级配置
	delay_ms(200);
	EN_OUT_ENABLE;					//硬开软关使能VCC-OUT
//	System_StartTips();			//系统启动蜂鸣器提示
	


	
	
	taskENTER_CRITICAL();		//进入临界区
	
	//创建开始任务
	#ifdef ROBOT_YZ01	
		printf(" ROBOT_YZ01 Sys starting!!\r\n"); 
	#endif
	#ifdef ROBOT_M100	
		printf(" ROBOT_M100 Sys starting!!\r\n"); 
	#endif
	#ifdef ROBOT_MR9	
		printf(" ROBOT_MR9 Sys starting!!\r\n"); 
	#endif
	
	xTaskCreate((TaskFunction_t )Start_Task,            	//任务函数
							(const char*    )"Start_Task",          	//任务名称
							(uint16_t       )START_STK_SIZE,        	//任务堆栈大小
							(void*          )NULL,                  	//传递给任务函数的参数
							(UBaseType_t    )START_TASK_PRIO,       	//任务优先级
							(TaskHandle_t*  )&Start_Task_Handler);		//任务句柄  

	taskEXIT_CRITICAL();		//退出临界区	
  vTaskStartScheduler();	//开启任务调度			
//	while(1);
}
 


