//reverse using recursion function
#include<stdio.h>
int n,rev1,rem;
int rev(int n)
{
	if(n!=0)
	{
		rem=n%10;
		rev1=(rev1*10)+rem;
		n=n/10;
		return rev(n);
	}
	else
	{
		return rev1;
	}
}
int main()
{
	int a;
	printf("enter the number: ");
	scanf("%d",&a);
	int bcd=rev(a);
	printf("the reverse number is: %d",bcd);
	return 0;
}
