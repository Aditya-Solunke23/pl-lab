//palindrome number
#include<stdio.h>
int main()
{
	int a,rev,rem,temp;
	printf("enter the number :- ");
	scanf("%d",&a);
	temp=a;
	while(a!=0)
	{
		rev=0;
		rem=a%10;
		rev=(rev*10)+rem;
		rem=a/10;	
	}
	printf("the reverse number is :- %d",rev);
	if(rev==temp)
	{
		printf("the number is palindromic");
	}
	else
	{
		printf("the number is not palindromic");
	}
	return 0;
}

