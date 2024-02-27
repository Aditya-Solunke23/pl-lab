#include<stdio.h>
int main()
{
	int a,b,c,r;
	printf("enter two numbers: ");
	scanf("%d %d",&a,&b);
	c=a/b;
	r=a-(c*b);
	printf("the remainder is:%d",r);
}
