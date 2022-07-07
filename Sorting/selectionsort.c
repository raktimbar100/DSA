#include<stdio.h>
void swap(int *a,int *b)
{
	int temp=*a;
	*a=*b;
	*b=temp;
}
int main()
{
	int n;
	printf("Enter the numbe of n:");
	scanf("%d",&n);
	int step,j,i,iter,temp,min;
	int arr[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",arr+i);
	}


	for(step=0;step<n-1;step++)
	{
		min=step;
		for(iter=step+1;iter<n;iter++)
		{
			if(arr[iter]<arr[min])
			{
				min=iter;
			}
		}
		
	swap(&arr[min],&arr[step]);
	}
	for(i=0;i<n;i++)
	{
		printf("%d ",*(arr+i));
	}
}
