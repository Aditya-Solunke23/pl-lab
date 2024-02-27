#include<stdio.h>
int main()
{
	int i,n,j,sum=0;
	printf("how many natural numbers do u want to print:");
	scanf("%d",&n);
	for(i=1;i<n;i++)
	{
		printf(" %d",i);
	}
	for(j=1;j<n;j++)
	{
		sum=sum+j;
	}
	printf("\n the sum is: %d",sum);
	return 0;
}
