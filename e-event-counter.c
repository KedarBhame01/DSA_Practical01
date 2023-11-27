#include<reg51.h>
void delay();
sbit opto_sensor = P1^0;
char arr[10]={0x3f,0x06,0x5b,0x4f,0x66,0x6d,0x7d,0x07,0x7f,0x6f};

void main()
{
unsigned char count = 0;
P3=0X00;
opto_sensor = 1;
P3=arr[count]; 
while(1)
{
if(opto_sensor == 1)
{
 count++;
 if(count > 9)
 {
 count = 0;
 }
 P3=arr[count];
 while(opto_sensor == 1);
}
}
}

void delay()
{
int i;
for(i=0;i<=30000;i++);
}