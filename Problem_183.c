#include<stdio.h>
#define MAX 20
#include<stdlib.h>
typedef struct stack{
	char text[MAX];
	int top;
}stack;

int init(stack *s);
int push(stack *s,char);
char pop(stack *s);
int is_full(stack *);
int is_empty(stack *);

int main()
{
	stack s;
	init(&s);
	
	char x;
	printf("\nEnter only paranthesis expression ");
	
	while((x= getchar())!='\n')
	 {
	 	switch(x)
	 	{
	 		case '(':
	 			push(&s,x);
	 			break;
	 		case ')':
	 		{
	 			if(!is_empty(&s))
	 			pop(&s);
	 			else
	 			{
	 				printf("\n mismatch....");
	 				exit(0);
				 }
				 break;
			 }
		 }
	 }
	 
	 if(!is_empty(&s))
	 printf("\nmismatch\n");
	 else
	 printf("\nwell formed");
}
int init(stack *s)
{
	s->top=-1;
}
int push(stack *s,char x)
{
	if(is_full(s))
	{
		printf("\nStack is full!!");
		return 0;
	}
	else
	{
		s->top+=1;
		s->text[s->top]=x;
	}
	return 0;
}

char pop(stack *s)
{
	char x;
	if(is_empty(s))
	{
		printf("\nStack is empty");
		return 0;
	}
	else
	{
		x=s->text[s->top];
		s->top-=1;
	}
	return x;
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
