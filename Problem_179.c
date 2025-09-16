#include<stdio.h>

#define MAX 5

typedef struct stack
{
	int data[MAX];
	int top;
}stack;

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


