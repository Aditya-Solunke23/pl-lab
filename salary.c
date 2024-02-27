#include<stdio.h>
int main()
{
	float b,hra,ta,gross,pt,net;
	printf("enter the basic pay: ");
	scanf("%f",&b);
	hra=0.1*b;
	printf("hra is:%f",hra);
	ta=0.05*b;
		printf("ta is:%f",ta);
	gross=b+hra+ta;
		printf("gross is:%f",gross);
	pt=0.02*gross;
		printf("pt is:%f",pt);
	net=gross-pt;
		printf("net salary is:%f",net);
		return 0;
		
}
