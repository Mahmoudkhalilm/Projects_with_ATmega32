/*
 * my_name_english_and_arabic.c
 *
 *
 *  Author: Mahmoud Khalil
 */ 


#define  F_CPU 8000000UL
#include <util/delay.h>
#include "LCD.h"
int main(void)
{
	LCD_vInit();
	LCD_vSend_string(" Mahmoud Khalil");
	LCD_movecursor(2,1);
	LCD_vSend_cmd(64);
	LCD_vSend_char(0b00000000);//ÍÑÝ Çá ã
	LCD_vSend_char(0b00000000);
	LCD_vSend_char(0b00000100);
	LCD_vSend_char(0b00001010);
	LCD_vSend_char(0b00010001);
	LCD_vSend_char(0b00001001);
	LCD_vSend_char(0b00000110);
	LCD_vSend_char(0b00000000);

	LCD_vSend_char(0b00110000); //ÍÑÝ Çá Í
	LCD_vSend_char(0b00101000);
	LCD_vSend_char(0b00000100);
	LCD_vSend_char(0b00000010);
	LCD_vSend_char(0b00011111);
	LCD_vSend_char(0b00000000);
	LCD_vSend_char(0b00000000);
	LCD_vSend_char(0b00000000);

   LCD_vSend_char(0b00000000);//ÍÑÝ Çá æ
    LCD_vSend_char(0b00001100);
    LCD_vSend_char(0b00010010);
    LCD_vSend_char(0b00011110);
    LCD_vSend_char(0b00000010);
    LCD_vSend_char(0b00000010);
    LCD_vSend_char(0b00011100);
    LCD_vSend_char(0b00000000);


	 
	 LCD_vSend_char(0b00000000);//ÍÑÝ Çá Ï
	 LCD_vSend_char(0b00011110);
	 LCD_vSend_char(0b00000001);
	 LCD_vSend_char(0b00000001);
	 LCD_vSend_char(0b00011111);
	 LCD_vSend_char(0b00000000);
	 LCD_vSend_char(0b00000000);
	 LCD_vSend_char(0b00000000);
	

	LCD_vSend_char(0b00000010);//ÍÑÝ Çá Î
	LCD_vSend_char(0b00011000);
	LCD_vSend_char(0b00000100);
	LCD_vSend_char(0b00000010),
	LCD_vSend_char(0b00011111);
	LCD_vSend_char(0b00000000);
	LCD_vSend_char(0b00000000);
	LCD_vSend_char(0b00000000);
	
	
	LCD_vSend_char(0b00000001);//ÍÑÝ Çá á
	LCD_vSend_char(0b00000001);
	LCD_vSend_char(0b00000001);
	LCD_vSend_char(0b00000001);
	LCD_vSend_char(0b00011111);
	LCD_vSend_char(0b00000000);
	LCD_vSend_char(0b00000000);
	LCD_vSend_char(0b00000000);

	LCD_vSend_char(0b00000000); //ÍÑÝ Çá í
	LCD_vSend_char(0b00000000);
	LCD_vSend_char(0b00000001);
	LCD_vSend_char(0b00000001);
	LCD_vSend_char(0b00011111);
	LCD_vSend_char(0b00000000);
	LCD_vSend_char(0b00001010);
	LCD_vSend_char(0b00000000);
	
	LCD_vSend_char(0b00000001);//ÍÑÝ Çá á
	LCD_vSend_char(0b00000001);
	LCD_vSend_char(0b00000001);
	LCD_vSend_char(0b00010001);
	LCD_vSend_char(0b00011111);
	LCD_vSend_char(0b00000000);
	LCD_vSend_char(0b00000000);
	LCD_vSend_char(0b00000000);
	
	LCD_movecursor(2,16);
	LCD_vSend_char(0);
	LCD_movecursor(2,15);
	LCD_vSend_char(1);
	LCD_movecursor(2,14);
	LCD_vSend_char(0);
	LCD_movecursor(2,13);
	LCD_vSend_char(2);
	LCD_movecursor(2,12);
    LCD_vSend_char(3);
	LCD_movecursor(2,11);
	LCD_vSend_char(32);
	
	LCD_movecursor(2,10);
	LCD_vSend_char(4);
	LCD_movecursor(2,9);
	LCD_vSend_char(5);
	LCD_movecursor(2,8);
	LCD_vSend_char(6);
	LCD_movecursor(2,7);
	LCD_vSend_char(7);
	LCD_movecursor(2,6);
	while(1)
	{
		
	}
	
	return 0;
}
