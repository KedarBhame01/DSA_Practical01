#include<reg51.h>
sbit rn=P3^0;
sbit yn=P3^1;
sbit rs=P3^2;
sbit ys=P3^3;
sbit rw=P3^4;
sbit yw=P3^5;
sbit re=P3^6;
sbit ye=P3^7;
sbit gn=P2^0;
sbit gs=P2^1;
sbit gw=P2^2;
sbit ge=P2^3;

  void delay()
 {
 long int i;
 for(i=0;i<=50000;i++)	;   //3 sec
 }

void main()
{
 P2 = 0x00;
 P3 = 0x00;

while (1)
{	    
  	  //north
   rn=1;rs=0;rw=0; re=0;
   gn=0;gs=1;gw=1;ge=1;
   yn=1;ys=1;yw=1;ye=1;
   delay();delay();delay();delay();delay();	 //15 sec 
		//south
   rn=0;rs=1;rw=0; re=0;
   gn=1;gs=0;gw=1;ge=1;
   yn=1;ys=1;yw=1;ye=1;
   delay();delay();delay();delay();delay();	 //15 sec	
   	//west
   rn=0;rs=0;rw=1; re=0;
   gn=1;gs=1;gw=0;ge=1;
   yn=1;ys=1;yw=1;ye=1;
   delay();delay();delay();delay();delay();	 //15 sec	
   	//east
   rn=0;rs=0;rw=0; re=1;
   gn=1;gs=1;gw=1;ge=0;
   yn=1;ys=1;yw=1;ye=1;
   delay();delay();delay();delay();delay();	 //15 sec	
 }
}
