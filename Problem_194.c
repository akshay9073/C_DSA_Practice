#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>
#include<math.h>
#define MAX 100

typedef struct stack{
	int data[MAX];
	int top;
}stack;

int is_full(stack *);
int push(stack *,int);
int is_empty(stack *);
int pop(stack *);
void init(stack *);
int calculate(char,int,int);
int main()
{
	stack s;
	init(&s);
	
	char exp[20];
	printf("\nEnter the expression : ");
	scanf("%s",exp);
	
	int len=strlen(exp);
//	printf("\n%d",len);
	int value;
	for(int i=len-1;i>=0;i--)
	{
		if(isdigit(exp[i]))
		push(&s,exp[i]-48);
		else
		{
			value=calculate(exp[i],pop(&s),pop(&s));
			push(&s,value);	
		}
	}
	value=pop(&s);
	printf("\nFinal value of prefix evaluation is : %d",value);
	
	return 0;
	
}

void init(stack *s)
{
	s->top=-1;
}

int push(stack *s, int x)
{
	if(is_full(s))
	{
		printf("\nCannot Push!!");
		exit(0);
	}
	else
	{
		s->top+=1;
		s->data[s->top]=x;
	}
	return 0;
}
int is_empty(stack *s)
{
	if(s->top==-1)
	return 1;
	else
	return 0;
}
int is_full(stack *s)
{
	if(s->top==MAX-1)
	return 1;
	else
	return 0;
}

int pop(stack *s)
{
	if(is_empty(s))
	{
		printf("\nStack is empty");
		exit(0);
	}
	else
	{
		int x=s->data[s->top];
		s->top-=1;
		return x;
	}
}

int calculate(char x, int op1, int op2)
{
	switch(x){
		case '+':
			return op1+op2;
		case '-':
			return op1-op2;
		case '*':
			return op1*op2;
		case '/':
			return op1/op2;
		case '%':
			return op1%op2;
		case '^':
			return ((int)pow(op1,op2));
		default:
			printf("\nInvalid operator");
			break;
	}
}
