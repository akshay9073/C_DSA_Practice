#include<stdio.h>
#include<ctype.h>
#include<stdlib.h>

typedef struct node{
	int data;
	struct node *next;
}node;

node *top=NULL;
int is_empty();
void push(int );
char pop();
int evaluate(char,int,int);
int main()
{
	char exp[20];
	printf("\nEnter the expression : ");
	scanf(" %s",exp);
	
	int i=0,value;
	while(exp[i]!='\0')
	{
		if(isdigit(exp[i]))
		push(exp[i]-48);
		else
		{
			value=evaluate(exp[i],pop(),pop());
			push(value);
		}
		i++;
	}
	
	value=pop();
	printf("\nFinal value is : %d",value);
	return 0;
}

node *cn()
{
	return (node *)malloc(sizeof(node));
}

int is_empty()
{
	if(top==NULL)
	return 1;
	else
	return 0;
}

void push(int x)
{
	node *p=cn();
	if(p==NULL)
	{
		printf("\nMemory out of bound!!");
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
		printf("\nCannot pop stack is empty");
		exit(0);
	}
	else
	{
		node *temp=top;
		char x=temp->data;
		top=temp->next;
		free(temp);
		return x;
	}
}

int evaluate(char x,int op1,int op2)
{
	switch(x){
		case '+':
			return op1+op2;
		case '-':
			return op1-op2;
		case '*':
			return op1*op2;
		case '/':
			return op1/op2;
		case '%':
			return op1%op2;
		case '^':
			return (pow(op1,op2));
		default:
			printf("\noperator invaild!!");
			break;
	}
}
