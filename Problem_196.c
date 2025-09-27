#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<math.h>

#define MAX 100

typedef struct stack{
	int data[20];
	int top;
}stack;

int top(stack *);
int pop(stack *);
void push(stack *,int);
int is_empty(stack *);
int is_full(stack *);
int init(stack *);

int main()
{
	
}








void push(stack *s,int x)
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

int pop(stack *s)
{
	if(is_empty(s))
	{
		printf("\nStack is Empty!!");
		exit(0);
	}
	else
	{
		int x=s->data[s->top];
		s->top-=1;
		return x;
	}
}

int top(stack *s)
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
	else 0;
}

int init(stack *s)
{
	s->top=-1;
}
