/*
1 2 3 4 5  
A B C D E  ----this are addresses of arr[0]  arr[1]  arr[2]  arr[3]  arr[4] 

step 1:
B>A         &arr[1]>&arr[0]
swap(A,B)
B A C D E
step2:
C>A        &arr[2]>&arr[1]
swap(A,C)
B C A D E
step3:
D>A        &arr[3]>&arr[2]
swap(A,D)
B C D A E
step 4:
E>A        &arr[4]>&arr[3]
swap(A,E)
B C D E A
2 3 4 5 1
            1st time 4 iteration,second time 3 iteration next 2times......
            total-(no of ieration)=n-step-1(if step initialized with 0)
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
	printf("Reverse of the array :\n");
	for(i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
	
}
