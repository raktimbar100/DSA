#include<stdio.h>
#define MAX 5
int front=-1,rear=-1;
int cq[MAX];
void enqueue(int val)
{
  if(front==-1 && rear ==-1)
  {
  	front=rear=0;
  	cq[rear]=val;
  }	
  else if((rear+1)%MAX==front)
  {
  	printf("\nCan't Insert queue is full \n");
  }
  else
  {
  	rear=(rear+1)%MAX;
  	cq[rear]=val;
  }
}
void dequeue()
{
	if(front==-1 && rear ==-1)
	{
		printf("\nUnderflow\n");
	}
	else if(front==rear)
	{
		front=rear=-1;
	}
	else
	{
		printf("\nDeleted item is %d \n",cq[front]);
		front=(front+1)%MAX;
		
	}
}

void display()
{
	int i=front;
	if(front==-1 && rear ==-1)
	{
		printf("\nSorry No elements are there\n");
	}
	else
	{
		printf("\nQueue is :\n");
		while(i!=rear)
		{
			printf("%d ",cq[i]);
			i=(i+1)%MAX;
		}
		printf("%d ",cq[rear]);
	}
}

int main()
{
	
	enqueue(10);
	enqueue(11);
	enqueue(12);
	enqueue(13);
	enqueue(14);
	display();
	dequeue();
	dequeue();
	display();
	enqueue(1);
	enqueue(2);
	display();
	enqueue(3);
	display();
}
