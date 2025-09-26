#include<stdio.h>
#include<ctype.h>
#include<string.h>


typedef struct node{
	char data;
	struct node *next;
}node;

node *top=NULL;
node *cn();
int  push(char);
char pop();
int is_empty();
int priority(char);

node *cn()
{
	return (node *)malloc(sizeof(node*));
}

int main()
{
		push('a');
		push('k');
		push('s');
		
		printf("%c\t",pop());
		printf("%c\t",pop());
		printf("%c\t",pop());
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
		printf("\nStack is full!!");
		exit(0);
	}
	else
	{
		p->data=x;
		p->next=top;
		top=p;
	}
	return 0;
}

char pop()
{
	char x;
	if(is_empty())
	{
		printf("\nStack is empty!!");
		exit(0);
	}
	else
	{
		node *temp=top;
		x=temp->data;
		top=temp->next;
		free(temp);
		return x;
	}
}

int piority(char x)
{
	if(x=='(')
	return 0;
	else if(x=='+' || x=='-');
	return 1;
	else if(x=='*' || x=='/' || x=='%')
	return 2;
	else 
	return 3;
}


