/*
 * BCD_to_seven_segment.c
 *
 *  Author: Mahmoud Khalil 
 */ 



#define  F_CPU 8000000UL
#include <util/delay.h>
#include "seven segment bcd.h"
int main(void)
{
	seven_seg_init('D');
	unsigned char counter=0;
    while(1)
    {
        for(counter=0;counter<=9;counter++)
		{
			seven_seg_write('D',counter);
			_delay_ms(1000);
		}
    }
}