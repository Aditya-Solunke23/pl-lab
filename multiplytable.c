#include<stdio.h>
int main()
{
	int i,n,multi;
	printf("whose table do u want to print: ");
	scanf("%d",&n);
	for(i=1;i<=10;i++)
	{
		multi=n*i;
		printf("\n%d * %d = %d",n,i,multi);
	}
	return 0;
	}
