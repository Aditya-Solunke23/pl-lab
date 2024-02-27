#include<stdio.h>
//defining a function
int fact=1;
int f(int num)
{
	int i;
	for(i=1;i<=num;i++){
		fact=fact*i;
	
	}
	return fact;
}
int main()
{
	int a,b,x,y;
	printf("enter the number:");
	scanf("%d",&a);
//main function
	x=f(a);
	printf("the factorial is:%d",x);
//calling a function
	return 0;
}

