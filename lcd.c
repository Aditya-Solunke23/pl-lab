 #include<stdio.h>
 int main()
 {
 	int a,b,i;
 	printf("enter the two numbers: ");
 	scanf("%d%d",&a,&b);
 	if(a>b)
 	{
	
 		for(i=2;i<=a;i++)
 		{
 			if(a%i==0 && b%i==0)
 			{
 				printf("lcd is:%d",i);
 				break;
			 }
		 }
	}
	else
	{
		for(i=2;i<=b;i++)
 		{
 			if(a%i==0 && b%i==0)
 			{
 				printf("lcd is:%d",i);
 				break;
			 }
		 }
	}
	return 0;	
 }
