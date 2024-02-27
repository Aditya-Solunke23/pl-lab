//reverse using function
#include<stdio.h>
int rem,rev1,a;
int rev(int a)
{
	
	while(a!=0)
	{
		rem=a%10;
		rev1=(rev1*10)+rem;
		a=a/10;
	}
}
int main()
{
	int n;
	printf("enter a number: ");
	scanf("%d",&n);
	rev(n);
	printf("the reverse number is:%d",rev1);
	return 0;
}
