#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<math.h>

#define MAX 100

typedef struct stack{
	int data[20];
	int top;
}stack;

char top(stack *);
char pop(stack *);
void push(stack *,char);
int is_empty(stack *);
int is_full(stack *);
void init(stack *);
int priority(char);
int main()
{
	stack s;
	init(&s);
	char exp[20],infix[20],prefix[20];
	
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
			push(&s,exp[i]);
		else
		{
			if(exp[i]==')')
			{
				while((x=pop(&s))!='(')
				prefix[k++]=x;
			}
			else
			{
				while(!is_empty(&s) && priority(exp[i])<=priority(top(&s)))
				{
					prefix[k++]=pop(&s);
				}
				push(&s,exp[i]);
			}	
		}
		i++;	
	}
	
	while(!is_empty(&s))
	prefix[k++]=pop(&s);
	
	prefix[k]='\0';
	strrev(prefix);
	printf("\nInfix expression : %s",infix);
	printf("\nPrefix expression : %s",prefix);
	
	return 0;
}
	


int priority(char x)
{
	if(x=='(')
	return 0;
	else if(x=='+' || x=='-')
	return 1;
	else if(x=='*' || x=='/' || x=='%')
	return 2;
	else
	return 3;
}

void push(stack *s,char x)
{
	if(is_full(s))
	{
		printf("\nStack is full!!");
		exit(0);
	}
	else
	{
		s->top+=1;
		s->data[s->top]=x;
	}
}

char pop(stack *s)
{
	if(is_empty(s))
	{
		printf("\nStack is Empty!!");
		exit(0);
	}
	else
	{
		char x=s->data[s->top];
		s->top-=1;
		return x;
	}
}

char top(stack *s)
{
	return s->data[s->top];
}

int is_full(stack *s)
{
	if(s->top==MAX-1)
	return 1;
	else
	return 0;
}

int is_empty(stack *s)
{
	if(s->top==-1)
	return 1;
	else 
	return 0;
}

void init(stack *s)
{
	s->top=-1;
}
