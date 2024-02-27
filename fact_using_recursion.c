#include<stdio.h>
int num;
int fact(int num)
{
	int i;
	if(num==1)
	{
		return 1;
	}
	else
	{
		return num*fact(num-1);
	}
}
int main()
{
	int a;
	printf("enter a number");
	scanf("%d",&a);
	int res=fact(a);
	printf("the factorial of the number is:- %d",res);
}
