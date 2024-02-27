#include<stdio.h>
void area(float num)
{
	float a;
	a=3.14*num*num;
	printf("the area of the circle is:%f",a);
}

int main()
{
	float a,z,r;
	printf("enter the radius: ");
	scanf("%d",&r);
	area(r);
	
	return 0;
}
