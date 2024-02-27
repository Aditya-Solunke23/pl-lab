#include<stdio.h>
int z;
int area(int c,int d)
{
	z=c*d;
}
int main()
{
	int a,b;
	printf("enter the length and breadth: ");
	scanf("%d%d",&a,&b);
	area(a,b);
	printf("the area of the rectangle is:%d",z);
}
