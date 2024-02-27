//reverse of a number
#include<stdio.h>
int main()
{
	int a,rem,rev;
	printf("enter a number: ");
	scanf("%d",&a);
	while(a!=0)
	{
		rem=a%10;
		rev=(rev*10)+rem;
		a=a/10;
	}
	printf("the reversed number is: %d",rev);
	return 0;
}
