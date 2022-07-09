#include<stdio.h>
int main()
{
	int arr[20],n;
	printf("Enter value of n:");
	scanf("%d",&n);
	int i;
	for(i=0;i<n;i++)
	{
		scanf("%d",arr+i);
		
	}
	
	printf("\n");
	//int target=arr[0];
	int max=arr[0];
	for(i=1;i<n;i++)
	{
		if(max<arr[i])
		{
			max=arr[i];
		}
	}

		int count[max];
		for(i=0;i<=max;i++)
		{
	     	count[i]=0;
		}
		for(i=0;i<n;i++)
	{
		printf("%d ",*(arr+i));
	}
	printf("\n");
		for(i=0;i<n;i++)
		{
		
			++count[arr[i]];
		}
	
	for(i=0;i<=max;i++)
	{
		if(count[i]==0)
		{
			continue;
		}
		printf("%d - > %d \n",i,*(count+i));
	}
	
}
