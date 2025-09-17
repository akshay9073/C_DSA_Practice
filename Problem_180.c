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
	while(1)
	{
		printf("\n======================================\n");
		printf("\n1)Push");
		printf("\n2)Pop");
		printf("\n3)Empty Check");
		printf("\n4)FULL check");
		printf("\n5)Print Elements");
		printf("\n======================================\n");
		
		printf("\nEnter your choice : ");
		scanf("%d",&choice);
		
		switch(choice)
		{
			case 1:
				printf("\nEnter the String :");
				scanf(" %[^\n]s",text);
				for(int i=0;text[i]!='\0';i++)
				{
					push(&s,text[i]);
				}
				break;
			case 2:
				printf("\npop : %c",pop(&s));
				break;
				
			case 3:
				if(is_empty(&s))
				printf("\nStack is empty!!");
				else
				printf("\nStack is not empty!!");
				break;
			
			case 4:
				if(is_full(&s))
				printf("\nStack is FULL!!");
				else
				printf("\nStack is Not FULL!!");
				break;
				
			case 5:
				printf("\nPrint Stack element : ");
				print(&s);
				break;
				
		}
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
