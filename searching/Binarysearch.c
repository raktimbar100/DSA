#include<stdio.h>
int main()
{
	int n,i;
	printf("Enter the value of n:");
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++)
    {
    	scanf("%d",arr+i);
	}
	for(i=0;i<n;i++)
    {
    	printf("%d",*(arr+i));
	}
	printf("\n");
	int x;
	printf("Which number you want to search :");
	scanf("%d",&x);
	int low,mid,high;
	low=0;
	high=n-1;
	int p=0;
	for(i=0;i<n;i++)
	{
	  mid=(low+high)/2;
	  if(arr[mid]==x)
	  {
	    printf("%d found at index %d",x,mid+1);
	    p=1;
	    break;	
	  }	
	  else if(x>arr[mid])
	  {
	  	low=mid+1;
	  	
	  }
	  else if(x<arr[mid])
	  {
	  	high=mid-1;
	  }
	 
	  
	}
	if(p==0)
	{
		printf("%d Not found",x);
	}
	
	
}
