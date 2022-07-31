#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *next;
	struct node *past;
}*head=NULL,*newnode,*ptr,*pptr;
void createnode()
{   
newnode=(struct node*)malloc(sizeof(struct node));
	int val;
	printf("Enter the value");
	scanf("%d",&val);
	
	newnode->data=val;
	newnode->past=NULL;
	newnode->next=NULL;
	
	if(head==NULL)
	{
	
	head=ptr=newnode;
    }
    else
    {
    	
      ptr->next=newnode;
    	newnode->past=ptr;
    	
    	ptr=newnode;
    	
	}
}
void ifbp()
{
	int pos,i=0,val;
	printf("\nEnter the position where you want to insert\n");
	scanf("%d",&pos);
	printf("\nEnter the value :\n");
	scanf("%d",&val);
	newnode=(struct node*)malloc(sizeof(struct node));
	newnode->data=val;
	ptr=head;
	while(i<pos-1)            // 0  head   1  2nd  2 3rd
	{
		pptr=ptr;
		ptr=ptr->next;
		i++;
	}
	pptr->next=newnode;
	newnode->past=pptr;
	newnode->next=ptr;
	
}
/*void ifep()
{
	
newnode=(struct node*)malloc(sizeof(struct node));
	int pos,i,val;
	printf("\nEnter the position where you want to insert\n");
	scanf("%d",&pos);
	printf("\nEnter the value :\n");
	scanf("%d",&val);
	
	newnode->data=val;
	ptr=head;
	while(ptr->next!=0)            // 0  head   1  2nd  2 3rd
	{
		pptr=ptr;
		ptr=ptr->next;
		
	}
	curr=ptr;
	for(i=0;i<pos-1;i++)
	{
		prev=curr;
		curr=curr->past;
		
	}   
	   curr->next=newnode;
	   newnode->past=curr;
	   newnode->next=prev;
	
  
}*/
void rev()
{
	ptr=head;
	pptr=NULL;
	while(ptr!=NULL)
	{
		pptr=ptr->past;
		ptr->past=ptr->next;
		ptr->next=pptr;
		ptr=ptr->past;
		
	}
	if(pptr!=NULL)
	{
		head=pptr->past;
	}
	
	
}
void iab()
{
	int val;
	printf("\nEnter the value :\n");
	scanf("%d",&val);
	newnode=(struct node*)malloc(sizeof(struct node));
	newnode->data=val;
	newnode->next=head;
	newnode->past=NULL;
	head=newnode;
}
void iae()
{
	int val;
	printf("\nEnter the value :\n");
	scanf("%d",&val);
	newnode=(struct node*)malloc(sizeof(struct node));
	newnode->data=val;
	ptr=head;
	while(ptr->next!=NULL)
	{
		pptr=ptr;
		ptr=ptr->next;
	}
	newnode->past=ptr;
	newnode->next=NULL;
	ptr->next=newnode;
}
void dab()
{
	if(head==NULL)
	{
		printf("\nNo elements are there can't delete");
		
	}
	else if(head->next==NULL)
	{
		head=NULL;
	}
	else{
		ptr=head;
		head=head->next;
		head->past=NULL;
		free(ptr);
		
	}
}
void dae()
{
	if(head==NULL)
	{
		printf("\nNo elements to delete");
		printf("\n--------------------------\n");
		
	}
	else if(head->next==NULL)
	{
		head=NULL;
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
void dap()
{  
if(head==NULL)
	{
		printf("\nNo elements to delete");
		printf("\n--------------------------\n");
		
	}
	else if(head->next==NULL)
	{
		head=NULL;
	}
	else{
	pptr=NULL;
	int pos,i=0;
	printf("\nEnter which position you want to delete : ");
	scanf("%d",&pos);
	 ptr=head;
	 while(i<pos-1)
	 {
	 	pptr=ptr;
	 	ptr=ptr->next;
	 	i++;
	 }
	 pptr->next=ptr->next;
	 ptr->past=pptr;
	 
	 
    }
}
void display()
{
	if(head==NULL)
	{
		printf("CAN'T DELETE");
	}
	else{
	
	ptr=head;
	while(ptr!=NULL)
	{
		printf("%d ",ptr->data);
		ptr=ptr->next;
	}
}
}
int main()
{
	int ch,ch1;
	
	
	while(1)
	{
		printf("\nPress 1 for inserting elements :\n");
		printf("\nPress 2 for displaying elements :\n");
		printf("\nPress 3 for insert at particular position \n");
		printf("\nPress 4 for insert at begin\n");
		printf("\nPress 5 for insert at end\n");
		printf("\nPress 6 for Delete at begin\n");
		printf("\nPress 7 for Delete at end\n");
		printf("\nPress 8 for Delete particular position\n");
		printf("\nPress 9 for reverse\n");
	 	printf("\nEnter choice :");
	 	scanf("%d",&ch);
	 	printf("\n-----------------------------------------\n");
	    
	    switch(ch)
	    {
	    	case 1:
	    		createnode();
	    		
	    		break;
	    	case 2:
			    display();
				break;
			case 3:
	            ifbp();
	            break;
				case 4:
					iab();
					break;
				case 5:
					iae();
				    break;
			   case 6:
			   	   dab();
			   	   break;
			   case 7:
			       dae();
				   break;
		      case 8:
			      dap();
				  break;		   	   
			case 9:
			    rev();
				break;			  
			default:
			   printf("Wrong choice ");
			   		
		}
		
	}
	
	
	
	
	
	return 0;
}
