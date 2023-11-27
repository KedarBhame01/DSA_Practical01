			   
          /////PORT3-----LCD CONTRL
         /////PORT1-----LCD DATA

#include<reg51.h>
void msdelay(unsigned int){
	for(i
void main(void){
	while(1){
		P1=0x55;
		msdelay(1000);
		P1=0xAA;
		msdelay(1000);
		}
}