//to print number of digits in a given number
#include<stdio.h>
int cnt=0;
int num;
int count(int num)
{
	if (num>0)
	{
		cnt++;
		count(num/10);
	}
	return cnt;
}
int main()
{
	int n;
	printf("enter the number:-");
	scanf("%d",&n);
	int res=count(n);
	printf("the count of the digits is : %d",res);
	return 0;
}
