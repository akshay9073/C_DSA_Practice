#include<stdio.h>
#define MAX 100
typedef struct stack{
	int data[MAX];
	int top;
}stack;
void init(stack *);
int is_full(stack *);
int is_empty(stack *);
void push(stack *,int);
int pop(stack *);

int main()
{
	stack s;
	init(&s);
	
	push(&s,10);
	push(&s,20);
	push(&s,30);
	
	printf("%d\t",pop(&s));
	printf("%d\t",pop(&s));
	printf("%d\t",pop(&s));
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

void push(stack *s,int x)
{
	if(is_full(s))
	{
		printf("\nStack is Full");
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
