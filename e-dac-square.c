#include<reg51.h>
void delay();
void main()
{
P2=0X00;		// Make P2 o/p
while(1)
{
P2=0X00;
delay();
P2=0XFF;
delay();
}
}

void delay()
{
int i;
for(i=0;i<=30000;i++);
}
