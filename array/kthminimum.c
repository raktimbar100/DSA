#include<stdio.h>
int main()
{
	int arr[20];
	int n,i,j,temp;
	printf("Enter the value od n:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",arr+i);
	}
	int k;
	printf("Enter the kth index to find kth minimum:");
	scanf("%d",&k);
	for(i=1;i<n;i++)
	{
		for(j=0;j<n-i;j++)
		{
			if(arr[j+1]<arr[j])
			{
				temp=arr[j+1];
				arr[j+1]=arr[j];
				arr[j]=temp;
			}
		}
	}
	for(i=0;i<n;i++)
	{
		if(k==i)
		{
			printf("\n%dth minimum value is %d",i+1,arr[--i]);
			break;
		}
		continue;
	}
}
