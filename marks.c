#include<stdio.h>
int main()
{
	int s1,s2,s3,s4,s5,total,per;
	printf("enter the marks of five subjects: ");
	scanf("%d%d%d%d%d",&s1,&s2,&s3,&s4,&s5);
	
	if(s1>40 && s2>40 && s3>40 && s4>40 && s5>40)
	{
		printf("you have passed, ");
		total=(s1+s2+s3+s4+s5);
	    per=(total/5);
		
		if(per>=75)
		{
			printf("distinction");
		}
		else if(per>=60 && per<75)
		{
			printf("first division");
		}
		else if(per>=50 && per<60)
		{
			printf("second class");
		}
		else if(per>=40 && per<50)
		{
			printf("third class");
		}

	}
	else
	{
		printf("you've failed");
	}
	return 0;
	
}
