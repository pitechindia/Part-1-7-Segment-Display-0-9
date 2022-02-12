#include <reg51.h>

#define Port2 P2   					// Define Port P2 for 7 Segment

unsigned int i;							// Define a variable

void delay(unsigned int a);	// sub-routine for delay

// Hex code Array for Common Anode 7 Segment Display....
unsigned char segment[]={0xC0,0xF9,0xA4,0xB0,0x99,0x92,0x82,0xF8,0x80,0x90};

void main(void)
{
	
	Port2 = 0xff;
	
	while(1)
	{	
				for(i=0;i<10;i++)
					{
						Port2 = segment[i];		// Display according to array index hex code...
						delay(100);
					}	
	}
}

// Delay Function
void delay(unsigned int a)
{
	unsigned int i,j;
		for(i=0;i<a;i++)
			for(j=0;j<1275;j++)  
				{}
}
