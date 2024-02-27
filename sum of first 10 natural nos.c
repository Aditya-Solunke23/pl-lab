#include<stdio.h>
int main()
{
	int i,j,sum;
	sum=0;
	printf("the first ten natural numbers are:");
	for(i=0;i<=10;i++)
	{
		printf(" %d",i);
	}
	for(j=0;j<=10;j++)
	{
		sum=sum+j;
	}
	printf("\nthe sum of the first ten natural numbers is: %d",sum);
	return 0;
}
