#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>

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
int evaluate(int,int,char);
int main()
{
	stack s;
	init(&s);
	
	char exp[20];
	printf("\nEnter the expression single digit and operators only : ");
	scanf("%s",exp);
	
	int i=0;
	int value;
	while(exp[i]!='\0')
	{
		if(isdigit(exp[i]))
		push(&s,exp[i]-48);
		else
		{
			value=evaluate(pop(&s),pop(&s),exp[i]);
			push(&s,value);
		}
		i++;
	}
	value=pop(&s);
			printf("\nFinal value is : %d ",value);
}

int evaluate(int v1,int v2, char op)
{
	switch (op){
		
		case '+':
			return v1+v2;
		case '-':
			return v1-v2;
		case '*':
			return v1*v2;
		case '/':
			return v1/v2;
		case '%':
			return v1%v2;
		case '^':
			return (int)pow(v1,v2);
		default:
			printf("\nOperator not relevant");
			break;
		 
	}
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
