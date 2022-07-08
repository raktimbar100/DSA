#include<stdio.h>
int main()
{
	int n;
	printf("Enter the total size :");
	scanf("%d",&n);
	int i,p;
	int arr[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",arr+i);
	}
	for(i=0;i<n;i++)
	{
		printf("%d ",*(arr+i));
	}
	printf("\n");
	printf("Enter your key:");
	int key;
	scanf("%d",&key);
	for(i=0;i<n;i++)
	{
		if(arr[i]==key)
		{
			printf("%d found at index %d\n",key,i+1);
			return 0;
		}
		else
		{
			p=0;
		}
		
	}
	if(p==0)
	{
		printf("%d Not found ",key);
	}
	
}
