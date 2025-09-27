#include<stdio.h>
#include<ctype.h>

typedef struct node{
	char data;
	struct node *next;
}node;

node *top=NULL;

node *cn()
{
	return (node *)malloc(sizeof(node));
}

int is_empty();
int push(char);
char pop();
int top_element();

int main()
{
	
	
}



int is_empty()
{
	if(top==NULL)
	return 1;
	else
	return 0;
}

int push(char x)
{
	node *p=cn();
	if(p==NULL)
	{
		printf("\nStack is empty!!");
		exit(0);
	}
	else
	{
		p->data=x;
		p->next=top;
		top=p;
	}
}

char pop()
{
	if(is_empty())
	{
		printf("\nStack is empty!!");
		exit(0);
	}
	else
	{
		node *temp=top;
		char x=top->data;
		top=temp->next;
		free(temp);
		return x;
	}
}

int top_element()
{
	return top->data;
}
