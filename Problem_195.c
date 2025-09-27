#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>
#include<math.h>

typedef struct node{
	int data;
	struct node *next;
}node;

node *top=NULL;

node *cn();
int is_empty();
void push(int);
int pop();
int calculate(char,int,int);

node *cn()
{
	return (node *)malloc(sizeof(node));
}

int main()
{
		
	char exp[20];
	printf("\nEnter the expression : ");
	scanf("%s",exp);
	
	int len=strlen(exp);
//	printf("%d",len);
	int value;
	for(int i=len-1;i>=0;i--)
	{
		if(isdigit(exp[i]))
			{
//				printf("\npush %d",exp[i]-'0');
				push(exp[i]-'0');
			}
		else
		{
			int op1 = pop(); 
            int op2 = pop(); 
//            printf("\n%c %d %d",exp[i],op1,op2);
			value=calculate(exp[i],op1,op2);
			push(value);
		}
	}
	value=pop();
	printf("\nFinal value is %d",value);	
}

void push(int x)
{
	node *p=cn();
	if(p==NULL)
	{
		printf("\nStack is FUll!!");
		exit(0);
	}
	else
	{
		p->data=x;
		p->next=top;
		top=p;
	}
}

int pop()
{
	if(is_empty())
	{
		printf("\nStack is empty!!");
		exit(0);
	}
	else
	{
		node *temp=top;
		int x=temp->data;
		top=temp->next;
		free(temp);
		return x;
	}
}



int is_empty()
{
	if(top==NULL)
	return 1;
	else
	return 0;
}

int calculate(char x,int op1,int op2)
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
			return (int)pow(op1,op2);
		default:
			printf("\nInvalid operatior");
			break;
			
	}
}
