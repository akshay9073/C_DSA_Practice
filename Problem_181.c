#include<stdio.h>

#define MAX 10

typedef struct stack
{
	char str[MAX];
	int top;
}stack;


void init(stack *);
int is_full(stack *);
int is_empty(stack *);
int push(stack *,char);
char pop(stack *);
void print(stack *);

int main()
{
	stack s;
	init(&s);
	int choice;
	char text[10];

				printf("\nEnter the String :");
				scanf(" %[^\n]s",text);
				for(int i=0;text[i]!='\0';i++)
				{
					push(&s,text[i]);
				}
				
				char ch;
				int flag=0;
				for(int i=0;i<text[i]!='\0';i++)
				{
					ch=pop(&s);
					if(ch!=text[i])
					{
						flag=1;
						break;
					}
				}
				
				if(flag==1)
				printf("%s is not palindrome string",text);
				else
				printf("%s is palindrome string ",text);
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

int push(stack *s,char ch)
{
	if(is_full(s))
	{
		printf("\nCannot push %c and onwards",ch);
		return 0;
	}
	else
	{
		s->top+=1;
		s->str[s->top]=ch;
	}
	return 1;
}

char pop(stack *s)
{
	char ch;
	if(is_empty(s))
	{
		printf("\n Stack is empty");
		return 0;
	}
	else
	{
		ch=s->str[s->top];
		s->top-=1;
	}
	
	return ch;
}

void print(stack *s)
{
	if(is_empty(s))
	printf("\nStack is empty");
	else
	{
		for(int i=s->top;i>-1;i--)
		printf("%c",s->str[i]);
	}
}
