#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAX 100

typedef struct stack{
	char data[MAX];
	int top;
}stack;
void init(stack *);
int is_empty(stack *);
int is_full(stack *);
void push(stack *,char);
char pop(stack *);
char top(stack *);
int priority(char);
int main()
{
	stack s;
	init(&s);
	
	char exp[20];
	
	printf("\nEnter the expression : ");
	scanf(" %s",exp);
	
	int i=0;
	char x;
	while(exp[i]!='\0')
	{
		if(isalnum(exp[i]))
		printf("%c",exp[i]);
		else if(exp[i]=='(')
		push(&s,exp[i]);
		else
		{
			if(exp[i]==')')
			{
				while((x=pop(&s))!='(')
				printf("%c",x);
			}
			else
			{
				while(!is_empty(&s) && priority(exp[i])<=priority(top(&s)))
				{
					printf("%c",pop(&s));
				}
				push(&s,exp[i]);
			}
		}
		i++;
	}
	
	while(!is_empty(&s))
	{
		printf("%c",pop(&s));
	}
	
}













void init(stack *s)
{
	s->top=-1;
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

void push(stack *s, char x)
{
	if(is_full(s))
	{
		printf("\nStack is full !!");
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
	char x;
	if(is_empty(&s))
	{
		printf("\nStack is empty!!");
		exit(0);
	}
	else
	{
		x=s->data[s->top];
		s->top-=1;
	}
	return x;
}

char top(stack *s)
{
	return s->data[s->top];
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
