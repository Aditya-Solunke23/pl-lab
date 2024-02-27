#include<stdio.h>
int main()
{
	float f,c;
	printf("Enter the temperature in degrees celsius: ");
	scanf("%f",&c);
	f=(c*9/5)+32;
	printf("The temp in degree F is:%f",f);
}
