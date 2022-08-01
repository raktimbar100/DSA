/*
1 2 3 4 5  
A B C D E

step 1:
B>A
swap(A,B)
B A C D E
step2:
C>A
swap(A,C)
B C A D E
step3:
D>A
swap(A,D)
B C D A E
step 4:
E>A
swap(A,E)
B C D E A
2 3 4 5 1
 
 5 4 3 2 1 
 E D C B A
*/
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
	int step,temp;
	for(step=0;step<n;step++)
	{
		for(i=0;i<n-step-1;i++)
		{
			if(&arr[i+1]>&arr[i])
			{
				temp=arr[i+1];
				arr[i+1]=arr[i];
				arr[i]=temp;
			}
		}
	}
	for(i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
	
}
