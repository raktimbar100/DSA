#include<stdio.h>
#include<stdlib.h>
struct list{
	int data;
	struct list *next;
	
}*ptr,*head,*pptr,*ptr1;
void iab()
{
	int val;
	ptr=(struct list*)malloc(sizeof(struct list));
	printf("Enter the value :");
	scanf("%d",&val);
	ptr->data=val;
	ptr->next=head;
	head=ptr;
	printf("\nGreat Node inserted \n");
}
void iae()
{
	int val;
	ptr=(struct list*)malloc(sizeof(struct list));
	printf("Enter the value :");
	scanf("%d",&val);
	ptr->data=val;
	pptr=head;
	while(pptr->next!=NULL)
	{
		pptr=pptr->next;
	}
	pptr->next=ptr;
	ptr->next=NULL;
}
void iap()
{
	int pos,val,i;
	ptr=(struct list*)malloc(sizeof(struct list));
	printf("\nEnter the position :\n");
	scanf("%d",&pos);
	printf("\nEnter the value :");
	scanf("%d",&val);
	ptr->data=val;
	pptr=head;		
	ptr1=NULL;	
	if(ptr == NULL)  
        {  
            printf("\nOVERFLOW");  
        }  
		else{			//pos=3  0<2  1<2
	for(i=0;i<pos-1 && pptr!=NULL;i++)             // 5 6 7 8 
	{
		ptr1=pptr;
		pptr=pptr->next;
		
	}
   
   if(i==--pos){
   
	ptr1->next=ptr;
	ptr->next=pptr;
}
}
}
void dab()
{
	//ptr=head;
	if(head==NULL)
	{
		printf("Not possible :");
	}
	else
	{
		ptr=head;
		head=head->next;
		free(ptr);
	}
}
void dae()
{
	if(head==NULL)
	{
		printf("Not possible :");
	}
	else{
		ptr=head;
		while(ptr->next!=NULL)
		{
			pptr=ptr;
			ptr=ptr->next;
		}
		pptr->next=NULL;
		free(ptr);
	}
}
void dap()/* 4 5 6 7 8  2 del 4  6 7 8                   */
{
	int i,pos;
	printf("\nEnter the position :\n");
	scanf("%d",&pos);
	ptr=head;
	pptr=NULL;
	for(i=0;i<=pos-2 && i<pos;i++)  //pos=2,  0<1 
	{
		pptr=ptr;
		ptr=ptr->next;
	}
	if(i==--pos){
	
	pptr->next=ptr->next;
	free(ptr);
}

}
void rll()
{
	ptr=head;
	pptr=NULL;
	ptr1=NULL;
	while(ptr!=NULL)
	{
		ptr1=ptr->next;   
		ptr->next=pptr;
		pptr=ptr;
		ptr=ptr1;
	}
	head=pptr;
}
void prrd()
{
	int s,e,i;
	ptr=head;
	printf("Enter initial range:\n");
	scanf("%d",&s);
	printf("Enter final range :");
	scanf("%d",&e);
	//ptr1=s;
for(i=0;i<=s-2;i++) // 2 3 4 5 6 7 8 range 2 to 4     3 4 5
	{
		pptr=ptr;
	 ptr=ptr->next;
		
	}
	ptr1=pptr;
	for(i=s;i<e+1;i++)//2 < 4  .. 3<4 ..
	{
		ptr1=ptr1->next;
	}
	pptr->next=ptr1->next;
	
}
void disp()
{
	ptr=head;
	while(ptr!=NULL)
	{
		printf("%d ",ptr->data);
		ptr=ptr->next;
	}
}
int main()
{
	int ch;
	while(1)
	{
	printf("\n---------------------------------\n");
	printf("\nEnter 1 for insert at begin\n");
	printf("\nEnter 2 for insert at end\n");
	printf("\nEnter 3 for insert at k-th position\n");
	printf("\nEnter 4 for delete at begin\n");
	printf("\nEnter 5 for delete at end\n");
	printf("\nEnter 6 for delete k-th position\n");
	printf("\nEnter 7 for reverse\n");
	
	printf("\nEnter 8 for display\n");
	printf("\nEnter 9 for range delete\n");
	printf("\n---------------------------------\n");
	printf("Enter your choice :");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:
			iab();
			break;
		case 2:
		    iae();
		    break;
		case 3:
		    iap();
			break;
		case 4:
		    dab();
		    break;
			
		case 5:
		    dae();
		    break;
		case 6:
		    dap();
		    break;
			
		case 7:
		    rll();
		
		    break;
		case 8:
		
		   disp();
		     break;	
		case 9:
		    prrd();
			break;     
		default:
		  printf("Wrong choice:");							
		
		
		
	}
	
    }
	return 0;
}


