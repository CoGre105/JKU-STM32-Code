#include "stm32f10x.h"                  // Device header
#include "Delay.h"
#include "OLED.h"
#include "Serial.h"

int main(void)
{
	OLED_Init();
	
	Serial_Init();
	
//	Serial_SendByte(0x41);
	
//	uint8_t MyArray[] = {0x42, 0x43, 0x44, 0x45};
//	Serial_SendArray(MyArray, 4);
	
//	Serial_SendString("HelloWorld!\r\n");
	
//	Serial_SendNumber(987654321, 9);
	
//	printf("NUM = %d\r\n", 666);
//	
//	char String[100];
//	sprintf(String, "Num = %d\r\n", 666);
//	Serial_SendString(String);
	
	Serial_Printf("");
	
	while(1)
	{
		
	}
}
