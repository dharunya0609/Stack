#include<stdio.h>
#include<stdlib.h>
int choice;
struct node
{
	int data;
	struct node *next;
};
struct node *head=NULL;
void push(int val)
{
	struct node *new =malloc(sizeof(struct node));
	new->data=val;
	new->next=head;
	head=new;	
}
void pop()
{
	if (head == NULL)
	  printf("\nstack empty can't pop");
	else
	{
		struct node *temp;
		temp=head;
		head=head->next;
		free(temp);	
    }  
}
void display()
{
	struct node *temp;
	temp=head;
	while(temp!=NULL)
	{
		printf("%d ",temp->data);
		temp=temp->next;
	}	
}
int main()
{	
	printf("\n1.PUSH 2.POP 3.DISPLAY 4.EXIT");
	do
	{
		printf("\nEnter your choice:");
	    scanf("%d",&choice);
	    switch(choice)
	    {
	    	case 1:
	    		{
	    		int val;
				printf("\nEnter stack element:");
	            scanf("%d",&val);
	            push(val);
	            break;
				}
			case 2: pop();break;
			case 3: display();break;
			case 4: break;
			default: printf("\nEnter valid choice");
		}
		
	}while (choice!=4);
	return 0;
}
