#include<stdio.h>
#define MAX 3
typedef struct stack
{
	int data[MAX];
	int top;
}stack;


int is_full(stack *);
int push(stack *,int);
int is_empty(stack *);
int pop(stack *);
void print(stack *);
int main()
{
	int choice,x;
	stack s;
	init(&s);
	while(1)
	{
		printf("\n===============================================================\n");
		printf("\n1)Push");
		printf("\n2)Pop");
		printf("\n3)Empty");
		printf("\n4)Full");
		printf("\n5)Print Stack Element");
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
			
		case 2:
			x=pop(&s);
			if(x!=-1)
			printf("\n%d element POP from stack ",x);
			else
			printf("\nStack is Under-Flow!!");
			break;
			
		case 3:
			if(is_empty(&s))
			printf("\nStack is Empty");
			else
			printf("\nStack is Not Empty");
			break;
			
		case 4:
			if(is_full(&s))
			printf("\nStack is FULL");
			else
			printf("\nStack is Not FULL");
			break;
			
		case 5:
			printf("\nPrint Stack Elements : ");
			print(&s);
			break;
			
		default:
			printf("\nEnter the Correct Choice : ");
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
	{
		printf("\nStack is FULL!!");
		printf("\nCannot PUSH %d ",x);
		return 0;
	}
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

int is_empty(stack *s)
{
	if(s->top==-1)
	return 1;
	else
	return 0;
}

int pop(stack *s)
{
	int x;
	
	if(is_empty(s))
	return -1;
	else
	{
		x=s->data[s->top];
		s->top-=1;
		return x;
	}
}

void print(stack *s)
{
	if(is_empty(s))
	printf("\nStack is empty");
	else
	{
		for(int i=s->top;i>-1;i--)
		printf("%d\t",s->data[i]);
	}
}
