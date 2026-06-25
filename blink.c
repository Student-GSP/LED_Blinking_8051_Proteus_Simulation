// LED blinking code

#include <reg52.h>

void delay (int ms)
{
	int i,j;
	for(i=0;i<ms;i++)
	for(j=0;j<1000;j++);

}

void main ()
{
	while (1)
	{
		P2=0xff;   // 8 bit LED on
		delay(300);
		
		P2=0x00;    // 8 bit LED off
		delay(300);
		
		P2=0x0f;   // 4 bit led on/off
		delay(300);
		
		P2=0xf0;   // 4 bit led off/on
		delay(300);	
		
		P2=0x33;   //pair of LED on/off
		delay(300);
		
		P2=0xCC;  //pair of LED off/on
		delay(300);
		
	  P2=0x55; //odd on/even off
    delay(300);
		
		P2=0xAA; //odd off/even on
    delay(300);	
	}
}