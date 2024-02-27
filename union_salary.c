#include<stdio.h>
union office{
	char name[10];
	char designation[10];
	int salary;
}a;
int main()
{
	int gross,ta,da,i;
	printf("the size of the union is:%d",sizeof(a));
	for(i==0;i<4;i++)
	{
		printf("\n enter the name: ");
		scanf("%s",a.name);
		printf("enter the designation of the employee: ");
		scanf("%s",a.designation);
		printf("enter the salary of the employee :");
		scanf("%d",&a.salary);
		ta=(0.05*a.salary);
		da=(0.02*a.salary);
		gross=a.salary+ta+da;
		printf("the gross salary is :%d",gross);
	}
	return 0;
}
