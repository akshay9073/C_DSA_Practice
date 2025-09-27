#include<stdio.h>
#include<ctype.h>
#include<string.h>

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
int priority(char);
int main()
{
	
	char prefix[20],infix[20],exp[20];
	
	printf("\nEnter the expression : ");
	scanf("%s",exp);
	
	strcpy(infix,exp);
	
	strrev(exp);
	
	for(int i=0;exp[i]!='\0';i++)
	{
		if(exp[i]=='(')
		exp[i]=')';
		else if(exp[i]==')')
		exp[i]='(';
	}
	
	printf("\nExpression is : %s",exp);
	
	int i=0,k=0;
	char x;
	while(exp[i]!='\0')
	{
		if(isalnum(exp[i]))
		prefix[k++]=exp[i];
		else if(exp[i]=='(')
		push(exp[i]);
		else
		{
			if(exp[i]==')')
			{
				while((x=pop())!='(')
				prefix[k++]=x;
			}
			else
			{
				while(!is_empty() && priority(exp[i])<priority(top_element()))
				{
					prefix[k++]=pop();
				}
				push(exp[i]);
				
			}
		}
		i++;
	}
	
	while(!is_empty())
	{
		x=pop();
		prefix[k++]=x;
	}
	
	prefix[k]='\0';
	
	strrev(prefix);
	
	printf("\nInfix expression is :%s",infix);
	printf("\nPrefix expression is %s",prefix);
	
	return 0;
}

int priority(char x)
{
	if(x=='(')
	return 0;
	else if(x=='+'||x=='-')
	return 1;
	else if(x=='*'||x=='/'||x=='%')
	return 2;
	else 
	return 3;
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
