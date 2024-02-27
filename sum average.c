#include<stdio.h>
int main()
{
	int a,b,c,d,e,avg,sum;
	printf("enter number 1");
	scanf("%d",&a);
	printf("enter number 2");
	scanf("%d",&b);
	printf("enter number 3");
	scanf("%d",&c);
	printf("enter number 4");
	scanf("%d",&d);
	printf("enter number 5");
	scanf("%d",&e);
	sum=a+b+c+d+e;
	printf("the sum of the number is:%d",sum);
	avg=sum/5;
	printf("the average of the number is:%d",avg);
	return 0;
}
