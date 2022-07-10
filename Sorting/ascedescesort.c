#include<stdio.h>
int main()
{
	int n,i,j,step,temp;
	int arr[20];
	printf("Enter the size :");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",(arr+i));
	}
	for(i=0;i<n;i++)
	{
		for(step=1;step<=n;step++)
		{
			for(j=0;j<=n/2-step;j++)
			{
				if(arr[j]>arr[j+1])
				
				{
					temp=arr[j+1];
					arr[j+1]=arr[j];
					arr[j]=temp;
				}
			}
			temp=0;
	for(j=n/2+1;j<n-step;j++)
	{
		if(arr[j]<arr[j+1])
		{
			temp=arr[j+1];
			arr[j+1]=arr[j];
			arr[j]=temp;
		}
	}
		
		
		}
	}
printf("After Ascending and descending sort:\n");
	for(i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
	return 0;
	
}
