/*
 * seven_segment_bcd.c
 *
 *  Author: Mahmoud Khalil 
 */ 

#include "DIO.h"
#include "std_macros.h"
void seven_seg_init(unsigned char portname)
{
	DIO_vsetPINDir(portname,0,1);
	DIO_vsetPINDir(portname,1,1);
	DIO_vsetPINDir(portname,2,1);
	DIO_vsetPINDir(portname,3,1);
}
void seven_seg_write(unsigned char portname,unsigned char value)
{
	
	write_low_nibble(portname,value);
}