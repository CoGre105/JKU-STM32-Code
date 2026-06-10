#include "stm32f10x.h"                  // Device header
#include "Delay.h"
#include "OLED.h"
#include "Motor.h"
#include "Key.h"

int8_t Speed;
uint8_t KeyNum;
uint8_t Count = 0;;

int main(void)
{
	OLED_Init();
	Motor_Init();
	Key_Init();

	OLED_ShowString(1,1,"Speed:");

	Motor_SetSpeed(0);
	
	while(1)
	{
		KeyNum = Key_GetNum();
		if(KeyNum == 1)
		{
			if(Count == 0)
			{
				Speed += 20;
				if(Speed > 100)
				{
					Count = 1;
					Speed = 0;
				}
			}
			else if(Count == 1)
			{
				Speed -= 20;
				if(Speed < -100)
				{
					Count = 0;
					Speed = 0;
				}
			}
		}

		Motor_SetSpeed(Speed);
		OLED_ShowSignedNum(1,7,Speed,3);
	}
		


}
