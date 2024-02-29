#include<stdio.h>
#include<string.h>
int main()
{
	int a;
	char str1[100],str2[100],str3[100];
	printf("Enter string 1:- ");
	scanf("%s",str1);
	printf("\nEnter string 2:- ");
	scanf("%s",str2);
	printf("\n**MENU**");
	printf("\n1) To find the length of the string\n2) To copy a string\n3) To concatnate two strings\n4) To reverse a string");
    printf("\nEnter your choice : ",a);
	scanf("%d",&a);
	switch(a)
	{
		case 1://length
			   printf("The string whose length to be found is:- ");
			   scanf("%s",str1);
			   printf("The length of the string :%d",strlen(str1));
			   break;
		case 2://copy
			   strcpy(str3,str1);
			   printf("The string after copying is :%s",str3);
			   break;
		case 3://concat
		       strcat(str1,str2);
		       printf("The string after concatenation is :%s",str1);
		       break;
		case 4://reverse
			   printf("The string before reversing is :%s",str1);
			   strrev(str1);
			   printf("The string after reversing is :%s",str1);
			   break;
		}	
	return 0;
}
