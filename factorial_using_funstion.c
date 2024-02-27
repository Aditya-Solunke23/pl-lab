#include<stdio.h>
int f,i;
int fact(int num)
{
	
	for(i=1;i<=num;i++)
	{
		f=i*f;
		print("%d",f);
	}
}
int main()
{
	int a;
	printf("enter the number");
	scanf("%d",&a);
	fact(a);
	return 0;
}
