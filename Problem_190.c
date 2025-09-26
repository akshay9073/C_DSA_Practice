#include<stdio.h>
#include<stdlib.h>

#define MAX 100

typedef struct stack{
	char data[MAX];
	int top;
}stack;

int init(stack *s)
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
	if(is_full(&s))
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
	if(is_empty())
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


