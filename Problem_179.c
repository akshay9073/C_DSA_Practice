#include<stdio.h>

#define MAX 5

typedef struct stack
{
	int data[MAX];
	int top;
}stack;
int push(stack *,int);
void init(stack *);
int is_full(stack *);
int is_empty(stack *);

int main()
{
	
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

int push(stack *s,int x)
{
	if(is_full(s))
	printf("\nStack is FULL!! Cannot Push!!");
	else
	{
		s->top+=1;
		s->data[s->top]=x;
	}
}

