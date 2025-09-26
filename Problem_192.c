#include<stdio.h>
#include<ctype.h>
#include<string.h>
#include<stdlib.h>

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
char top_element();
node *cn()
{
	return (node *)malloc(sizeof(node));
}

int main()
{
		char exp[20];
		printf("\nEnter the expression : ");
		scanf("%s",exp);
		
		int i=0;
		char x;
		while(exp[i]!='\0')
		{
			if(isalnum(exp[i]))
			printf("%c",exp[i]);
			else if(exp[i]=='(')
			push(exp[i]);
			else
			{
				if(exp[i]==')')
				{
					while(x=pop()!='(')
					printf("%c",x);
				}
				else
				{
					while(!is_empty() && (priority(exp[i])<=priority(top_element())))
					{
						printf("%c",pop());
					}
					push(exp[i]);
				}
			}
			i++;
		}
		
		while(!is_empty())
		{
			printf("%c",pop());
		}
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

int priority(char x)
{
	if(x=='(')
	return 0;
	else if(x=='+'|| x=='-')
	return 1;
	else if(x=='*'||x=='/'||x=='%')
	return 2;
	else
	return 3;
}

char top_element()
{
	return top->data;
}

