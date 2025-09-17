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
int push(stack *,int);
int pop(stack *);

int main()
{
	stack s;
	init(&s);
	

	char num[5];
	printf("\nEnter the number : ");
	scanf("%s",&num);
	
	int i=0;
	int num1=0;
	while(num[i]!='\0')
	{
		if (!push(&s, num[i] - '0')) 
        {
            printf("\nStack overflow. Input number too long.\n");
            return 1;
        }
        num1 = (num1 * 10) + (num[i] - '0');
        i++;
		
	}

	int rev=0;
	while(!is_empty(&s))
	{		
		rev=(rev*10)+pop(&s);
	}
	
	if(rev==num1)
	printf("%d num is palindrome ",rev);
	else
	printf("%d num is not palindrome ",num1);
	
	
	
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
	return 0;
	else
	{
		s->top+=1;
		s->data[s->top]=x;
	}
}

int pop(stack *s)
{
	int val;
	if(is_empty(s))
	return -1;
	else
	{
		val=s->data[s->top];
		s->top-=1;
	}
	
	return val;
}
