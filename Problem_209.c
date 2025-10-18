#include<stdio.h>
#include<stdlib.h>

#define MAX 100

typedef struct stack{
	int data[MAX];
	int top;
}stack;

int initStack(stack *);
int isStackfull(stack *);
int isStackEmpty(stack *);
void push(stack *,int);
int pop(stack *);

int main()
{
	stack s;
	initStack(&s);
	
	push(&s,10);
	push(&s,20);
	push(&s,30);
	
	printf("\nPop Stack element");
	printf("%d\t",pop(&s));
	printf("%d\t",pop(&s));
	printf("%d\t",pop(&s));
	
	return 0;
}









int initStack(stack *s)
{
	s->top==-1;
}

int isStackfull(stack *s)
{
	return (s->top==MAX-1);
}

int isStackEmpty(stack *s)
{
	return (s->top==-1);
}

void push(stack *s,int data)
{
	if(isStackfull(s))
	{
		printf("\nStack is Full!!");
		exit(0);
	}
	else
	{
		s->data[++(s->top)]=data;
	}
}

int pop(stack *s)
{
	int data;
	if(isStackEmpty(s))
	{
		printf("\nStack is empty!!");
		exit(0);
	}
	else
	{
		data=s->data[(s->top)--];
	}
	return data;
}



