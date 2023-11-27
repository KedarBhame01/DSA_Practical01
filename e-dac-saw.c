#include<reg51.h>

void main()
{
unsigned char i;
P2=0X00;		// Make P2 o/p
while(1)
{
for(i=0;i<254;i++)
{
P2=i;
}
}
}


