#include<stdio.h>
int main()
{
	int a,fact,i;
	fact=1;
	printf("enter a number");
	scanf("%d",&a);
	for(i=1;i<=a;i++)
	{
		fact=fact*i;
	}
	printf("factorial of the given number is:%d",fact);
	return 0;
}
