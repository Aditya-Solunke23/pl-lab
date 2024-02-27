//1)to swap first element with the last and second to second last and so on.
#include<stdio.h>
int main()
{
	int nos[100],i,n,temp;
	printf("enter the number of elements to be entered :- ");
	scanf("%d",&n);
	printf("enter the elements of an array :- ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&nos[i]);
	}
	printf("the array is: [");
    for(i=0;i<n;i++)
    {
    	printf(" %d",nos[i]);
	}
	printf("]");
	for(i=0;i<n/2;i++)
	{
		temp=nos[i];
		nos[i]=nos[(n-1)-i];
		nos[(n-1)-i]=temp;
    }
    printf("\nthe new array is: [");
    for(i=0;i<n;i++)
    {
    	printf(" %d",nos[i]);
	}
	printf("]");
	return 0;
}
