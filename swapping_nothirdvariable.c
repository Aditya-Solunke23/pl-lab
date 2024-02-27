#include<stdio.h>
int main()
{
	int a,b;
	printf("the first number before swapping is: ");
	scanf(" %d",&a);
	printf("the second number before swapping is: ");
	scanf(" %d",&b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("the first number after swapping is:%d",a);
	printf("\nthe second number after swapping is:%d",b);
	return 0;
}
