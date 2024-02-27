 #include<stdio.h>
 int main()
 {
 	int a,b,i;
 	printf("enter the two numbers: ");
 	scanf("%d%d",&a,&b);
 	if(a>b)
 	{
	
 		for(i=a;i>=0;i--)
 		{
 			if(a%i==0 && b%i==0)
 			{
 				printf("gcd is:%d",i);
 				break;
			 }
		 }
	}
	else
	{
		for(i=a;i>=00;i--)
 		{
 			if(a%i==0 && b%i==0)
 			{
 				printf("gcd is:%d",i);
 				break;
			 }
		 }
	}
	return 0;	
 }
