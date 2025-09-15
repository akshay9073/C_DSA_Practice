#include<stdio.h>
#define MAX 3
typedef struct stack
{
	int data[MAX];
	int top;
}stack;


int is_full(stack *);
int push(stack *,int);
int main()
{
	int choice,x;
	stack s;
	init(&s);
	while(1)
	{
		printf("\n===============================================================\n");
		printf("\n1)Push");
		printf("\n===============================================================\n");
		
		printf("\nEnter your Choice : ");
	scanf(" %d",&choice);
	
	switch(choice)
	{
		case 1:
			printf("\nEnter element you want to PUSH : ");
			scanf(" %d",&x);
			push(&s,x);
			break;
	}
	}
	
	
}

int init(stack *s)
{
	s->top=-1;
}

int push(stack *s,int x)
{
	if(is_full(s))
	printf("\nStack is FULL!!");
	else
	{
		s->top+=1;
		s->data[s->top]=x;
		printf("\n%d Pushed in Stack",x);
	}
	return 0;
}

int is_full(stack *s)
{
	if(s->top==MAX-1)
	return 1;
	else
	return 0;
}
