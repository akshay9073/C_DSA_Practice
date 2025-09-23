#include<stdio.h>
#include<stdlib.h>

typedef struct node{
	char text;
	struct node *next;
}node;

node *top=NULL;
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
