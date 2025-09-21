#include<stdio.h>
#define MAX 10
typedef struct stack{
	int data[MAX];
	int top;
}stack;
int init(stack *);
int push(stack *,int);
int pop(stack *);
int is_full(stack *);
int is_empty(stack *);

int main()
{
	stack s;
	init(&s);
	
	int num;
	printf("\nEnter any number : ");
	scanf("%d",&num);
	
	if(num==0)
	{
		printf("%d is already a binary format",num);
		return 0;
	}
	
	int temp=num;
	while(temp!=0)
	{
		if(!(is_full(&s)))
		{
			push(&s,temp%2);
			temp=temp/2;
		}
		else
		{
			printf("\nStack overflow\n");
			break;
		}
			
	}
	
	printf("%d binary format is :",num);
	while(!is_empty(&s))
	{
		printf(" %d",pop(&s));
	}
	
	return 0;
}

int init(stack *s)
{
	s->top=-1;
}

int push(stack *s,int x)
{
	if(is_full(s))
	{
		printf("\nCannot push Stack is full");
		return 1;
	}
	else
	{
		s->top+=1;
		s->data[s->top]=x;
	}
	return 0;
}

int pop(stack *s)
{
	int x;
	if(is_empty(s))
	{
		printf("\nStack is Empty");
		return 1;
	}
	else
	{
		x=s->data[s->top];
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
