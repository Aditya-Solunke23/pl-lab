#include<stdio.h>
int v;
int vol(int side)
{
	
	v=side*side*side;
	return v;
}
int main()
{
	int a;
	printf("enter the side of the cube: ");
	scanf("%d",&a);
	vol(a);
	printf("the volume of the cube is:%d",v);
	return 0;
}
