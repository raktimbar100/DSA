#include<stdio.h>
#include<stdlib.h>
int main()
{
	int arr[30];
	int n;
	printf("Enter the size :");
	scanf("%d",&n);
	int i;
	for(i=0;i<n;i++)
	{
		printf("arr[%d] : ",i+1);
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
	printf("\n--------------------------------\n");
	int small=arr[0];
	for(i=0;i<n;i++)
	{
		if(arr[i]<small)
		{
			small=arr[i];
		}
	}
	int secmin=INT_MAX;
	for(i=0;i<n;i++)
	{
		if(arr[i]!=small && arr[i]<secmin)
		{
			secmin=arr[i];
		}
	}
	printf("\nsecond minimum is %d ",secmin);
}
