#include<stdio.h>
int main()
{
	int n;
	printf("Enter the total number :");
	scanf("%d",&n);
	int step;
	int arr[n],i,iter,temp;
	for(i=0;i<n;i++)
	{
		scanf("%d",arr+i);
	}
	for(i=0;i<n;i++)
	{
		printf("%d ",*(arr+i));
	}
	printf("\n");
	for(step=1;step<n;step++)
	{
		for(iter=0;iter<n-step;iter++)
		{
			if(arr[iter]>arr[iter+1])
			{
				temp=arr[iter+1];
				arr[iter+1]=arr[iter];
				arr[iter]=temp;
			}
		  	//printf("%d ",*(arr+iter));
		}
		printf("\n");
		printf("step %d    ",step);
		for(iter=0;iter<n;iter++)
		{
			
			printf("%d ",arr[iter]);
		}
		printf("\n");
		//printf("Step %d: %d",step,*(arr+step));
	}
	printf("\n");
	printf("Sorted array is: ");
	for(i=0;i<n;i++)
	{
		printf("%d ",*(arr+i));
	}
	return 0;
}
