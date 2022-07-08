#include<stdio.h>
int main()
{
	int n;
	printf("Enter the size :");
	scanf("%d",&n);
	int i,arr[n],key;
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
		
	}
	for(i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
		
	}
	printf("\n");
	key=arr[0];
	//printf("%d",key);
	for(i=1;i<n;i++)
	{
		if(key<arr[i])
		{
			key=arr[i];
		}
	}
	printf("key is :%d ",key);
	printf("\n");
	int count[key],j;
	for(i=0;i<=key;i++)
	{
		count[i]=0;
		
	}
	printf("\n");
	for(i=0;i<n;i++)
	{
		++count[arr[i]];
	}
	
	int b[n];
	for(i=1;i<=key;i++)
    {
    	count[i]=count[i]+count[i-1];
	}
	printf("\n");
	for(i=n-1;i>=0;i--)
	{
		b[--count[arr[i]]]=arr[i];
	}
	for(i=0;i<n;i++)
	{
		printf("%d ",b[i]);
	}
}
