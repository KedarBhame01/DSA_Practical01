#include<reg51.h>
void delay();
void main()
{
P1=0X00;
delay();
while(1)
{
P1=0X08;
delay();
P1=0X04;
delay();
P1=0X02;
delay();
P1=0X01;
delay();
}
}

void delay()
{
int i;
for(i=0;i<=3000;i++);
}