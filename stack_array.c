#include<stdio.h>
int stack[10],choice,i, el,top,n;

void push()
{
	if(top>=n-1)
	    printf("\nstack full can't push");
	else
	 {
	     printf("\nEnter stack element:");
	     scanf("%d",&el);
	     stack[++top]=el;
	 }   	
}
void pop()
{
	if(top<=0)
	    printf("\nstack empty can't pop");
	else
	 {
	 	printf("\nElement popped is %d",stack[top]);
	     top--;
	 }   	
}
void display()
{
	if(top>=0)
	{
		
		for(i=top;i>=0;i--)
		{
			printf("\nElement  is %d",stack[i]);
		}
	}
	else
	{
		 printf("stack empty");
	}
}
int main()
{
	top=-1;
	printf("Enter stack Range:");
	scanf("%d",&n);
	
	printf("\n1.PUSH 2.POP 3.DISPLAY 4.EXIT");
	do
	{
		printf("\nEnter your choice:");
	    scanf("%d",&choice);
	    switch(choice)
	    {
	    	case 1: push();break;
			case 2: pop();break;
			case 3: display();break;
			case 4: break;
			default: printf("\nEnter valid choice");
		}
		
	}while (choice!=4);
	return 0;
}
