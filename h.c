//enter the numbers in an array and chevk for the largest number
#include<stdio.h>
int main()
{
	int arr[10],a,i;
	printf("enter the number of elements to be stored: ");
	scanf("%d",&a);
	printf("enter the elements in the array: ");
	for(i=0;i<a;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("the array is:");
	printf("[");
	for(i=0;i<a;i++)
	{
	printf(" %d",arr[i]);
	}
	printf(" ]");
	for(i=0;i<a;i++)
	{
		if(arr[i]>arr[i+1])
		{
			printf("largest is: %d",arr[i]);
			break;
		}
	}
	return 0;
	
}
