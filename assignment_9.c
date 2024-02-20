
// 3)to create an array with reverse element of one dimensional array
#include<stdio.h>
int main()
{
	char a,b,c;
	int i;
	float per1,per2,per3,totalper;
	int sub1[3];
	int sub2[3];
	int sub3[3];
	printf("enter the names of the students :- ");
	printf("\nstudent 1 :- ",a);
	scanf("%s",&a);
	printf("student 2 :- ",b);
	scanf("%s",&b);
	printf("student 3 :- ",c);
	scanf("%s",&c);
	printf("enter the marks of subject 1 :- ");
	for(i=0;i<3;i++)
	{
		printf("\nmarks of student %d :-",i+1);
		scanf("%d",&sub1[i]);
	}
	printf("enter the marks of subject 2 :- ");
	for(i=0;i<3;i++)
	{
		printf("\nmarks of student %d :-",i+1);
		scanf("%d",&sub2[i]);
	}
	printf("enter the marks of subject 3 :- ");
	for(i=0;i<3;i++)
	{
		printf("\nmarks of student %d :-",i+1);
		scanf("%d",&sub3[i]);
	}
	per1=(sub1[0]+sub2[0]+sub3[0])/3;
	printf("\npercentage of student 1 is :- %f",per1);
	per2=(sub1[1]+sub2[1]+sub3[1])/3;
	printf("\npercentage of student 2 is :- %f",per2);
	per3=(sub1[2]+sub2[2]+sub3[2])/3;
	printf("\npercentage of student 3 is :- %f",per3);
	totalper=(per1+per2+per3)/3;
	printf("\nthe total perecentage of class is :- %f",totalper);
	if(sub1[0]>40 && sub2[0]>40 && sub3[0]>40)
	{
		printf("\nstudent 1 is passed");
	}
	else
	{
		printf("\nstudent 1 has failed");
	}
	if(sub1[1]>40 && sub2[1]>40 && sub3[1]>40)
	{
		printf("\nstudent 2 is passed");
	}
	else
	{
		printf("\nstudent 2 has failed");
	}
	if(sub1[2]>40 && sub2[2]>40 && sub3[2]>40)
	{
		printf("\nstudent 3 is passed");
	}
	else
	{
		printf("\nstudent 3 has failed");
	}
	if(per1>75 || per1==75)
	{
		printf("\nnstudent 1 gained distinction");
	}
	if(per2>75 || per2==75)
	{
		printf("\nstudent 2 gained distinction");
	}
	if(per3>75 || per3==75)
	{
		printf("\nstudent 3 gained distinction");
	}
	return 0;
}






