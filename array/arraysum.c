#include<stdio.h>
int main()
{
	int arr[30];
	int i,n;
	printf("Enter the value of n: ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("arr[%d] : ",i);
		scanf("%d",&arr[i]);
		
	}

	
	for(i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
	printf("\n------------------------------------\n");
	int sum=0;
	for(i=0;i<n;i++)
	{
		sum=sum+arr[i];
	}
	printf("sum is %d ",sum);
}
