#include "stm32f10x.h"                  // Device header
#include "Delay.h"
#include "OLED.h"


int main(void)
{
	OLED_Init();
	

	OLED_ShowString(1,1,"Love You!");
	OLED_ShowString(2,1,"Baby LeLe");
	OLED_ShowString(3,1,"Happy Every");
	OLED_ShowString(4,4,"Day!");

	
	
	while(1)
	{
		
	}
}
