#include<stdio.h>
#include<stdlib.h>

typedef struct node{
	int data;
	struct node *next;
}node;

node *top=NULL;


int push(int);
int pop();
int peek();
int is_empty();
void display();


node *cn()
{
	return (node *)malloc(sizeof(node));
}

int main()
{
	
	while(1)
	{
		printf("\n==========================================================\n");
		printf("\n1)Push");
		printf("\n2)Pop");
		printf("\n3)Peek");
		printf("\n4)Display");
		printf("\n5)Is Empty");
		printf("\n==========================================================\n");
	
	int choice;
	printf("\nEnter your Choice : ");
	scanf(" %d",&choice);
	
	switch(choice)
	{
		case 1:
			{
				printf("\nEnter element to push : ");
				int x;
				scanf("%d",&x);
				push(x);
				break;
			}
			
		case 2:
			{
				int a=pop();
				printf("\n%d pop",a);
				break;
			}
			
		case 3:
			{
				int p=peek();
				printf("\n%d",p);
				break;
			}
			
		case 4:
			printf("\nDisplay stack elements from top to bottom : ");
			display();
			break;
		
		case 5:
			if(is_empty())
			printf("\nStack is empty");
			else
			printf("\nStack is not empty");
			break;
			
	}
	
	}
}

int is_empty()
{
	return top==NULL;
}

int push(int x)
{
	
	node *p=cn();
	if(p==NULL)
	{
		printf("\nStack overflow cannot allocate memory");
	}
	else
	{
		p->data=x;
		p->next=top;
		top=p;
	}

}

int pop()
{
	if(is_empty())
	{
		printf("\nStack underflow: no elements to pop");
		return 0;
	}
	else
	{
		node *temp=top;
		int x=temp->data;
		top=temp->next;
		free(temp);
		return x;
	}
}

int peek()
{
	if(is_empty())
	{
			printf("\nstack is empty");
			return 0;
	}
	else
	{
		return top->data;
	}
}

void display()
{
	if(is_empty())
	{
		printf("\nStack is empty");
		return ;
	}
	else
	{
		node *p=top;
		while(p!=NULL)
		{
			printf("%d\t",p->data);
			p=p->next;
		}
	}
}
