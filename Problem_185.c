#include<stdio.h>
#include<stdlib.h>

typedef struct node{
	char text;
	struct node *next;
}node;

node *top=NULL;
char pop();
int push(char);
int is_empty();
char peek();
void display();

node *cn()
{
	return (node *)malloc(sizeof(node));
}

int main()
{
	while(1)
	{
		printf("\n==============================================\n");
		printf("\n1)Push");
		printf("\n2)Pop");
		printf("\n3Is Empty");
		printf("\n4)Peek");
		printf("\n5)Display");
		printf("\n==============================================\n");
	}
	int choice;
	printf("\nEnter your choice : ");
	scanf("%d",&choice);
	
	switch(choice)
	{
		case 1:
			{
				printf("\nEnter the charcter to push : ");
				char ch;
				scanf("%c",&ch);
				push(ch);
				printf("%c push in stack ",ch);
				break;
				
			}
			
		case 2:
			{
				char ch=pop;
				printf("%c pop",ch);
				break;
			}
			
		case 3:
			{
				if(is_empty())
				printf("\nStack is empty!!");
				else
				printf("\nStack is not empty!!");
				break;
			}
			
		case 4:
			{
				char ch=peek();
				printf("\n%c at top",ch);
				break;
			}
			
		case 5:
			{
				printf("\nDisplay all the charcater in stack : ");
				display();
				break;
			}
			
	}
	
	return 0;
}

int is_empty()
{
	if(top==NULL)
	return 1;
	else
	return 0;
}

int push(char ch)
{
	node *p=cn();
	
	if(p==NULL)
	{
		printf("\nStack overflow cannot allocate memory");
	}
	else
	{
			p->text=ch;
			p->next=top;
			top=p;
	}
	return 0;	
}

char pop()
{
	if(top==NULL)
	{
		printf("\nCannot Pop!!");
		exit(0);
	}
	else
	{
		node *temp=top;
		char ch=temp->text;
		top=temp->next;
		free(temp);
		return ch;
	}
	
}

char peek()
{
	return top->text;
}

void display()
{
	node *p=top;
	while(p!=NULL)
	{
		printf("%c\t",p->text);
		p=p->next;
	}
}
