#include "stm32f10x.h"   // Device header
#include "Delay.h"
#include "LED.h"
#include "key.h"
#include "OLED.h"
uint8_t KeyNum;
int main()
{
	OLED_Init();
	OLED_ShowString(1,1,"F_SIZE:");
	OLED_ShowHexNum(1,8,*((__IO uint16_t *)(0x1ffff7e0)),4);
	
	OLED_ShowString(2,1,"U_ID:");
	OLED_ShowHexNum(2,6,*((__IO uint16_t *)(0x1ffff7e8)),4);
	OLED_ShowHexNum(2,11,*((__IO uint16_t *)(0x1ffff7e8+0x02)),4);
	OLED_ShowHexNum(3,1,*((__IO uint32_t *)(0x1ffff7e8+0x04)),8);
	OLED_ShowHexNum(4,1,*((__IO uint32_t *)(0x1ffff7e8+0x08)),8);
	while(1)
	{
		
	}
}
