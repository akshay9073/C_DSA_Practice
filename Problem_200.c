#include<stdio.h>
#define MAX 2
typedef struct stack{
	int data[MAX];
	int top;
}stack;

int init(stack *);
int is_full(stack *);
int is_empty(stack *);
int push(stack *,int);
int pop(stack *);

int main()
{
	stack *s;
	init(&s);
	
	push(&s,1);
	push(&s,2);
	push(&s,3);
	printf("\n%d",pop(&s));
	printf("\n%d",pop(&s));
	
	
	return 0;
}

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

int push(stack *s,int x)
{
	if(is_full(s))
	{
		printf("\nStack is Full!!");
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
		printf("\nStack is empty!!");
		exit(0);
	}
	else
	{
		int x=s->data[s->top];
		s->top-=1;
		return x;
	}
}
