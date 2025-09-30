#include<stdio.h>
#include<ctype.h>
#include<string.h>

#define MAX 20

char *pop();
int isOperator(char);
char stack[MAX][MAX];
int top=-1;

int main()
{
	char postfix[20];
	char op1[20],op2[20],temp[20];
	
	printf("\nEnter the Postfix : ");
	scanf("%s",postfix);
	
	for(int i=0;postfix[i]!='\0';i++)
	{
		char ch=postfix[i];
		if(isalnum(ch))
		{
			char operand[2]={ch,'\0'};
			push(operand);	
		}		
		else if(isOperator(ch))
		{
			strcpy(op2,pop());
			strcpy(op1,pop());
			
			snprintf(temp,sizeof(temp),"(%s%c%s)",op1,ch,op2);
			push(temp);
		}
	}
	
	printf("\nInfix expression : %s",pop());
	return 0;
}

void push(char *str)
{
	if(top>=MAX-1)
	{
		printf("\nStack is full!!");
		exit(0);
	}
	else
	{
		strcpy(stack[++top],str);
	}
}

char *pop()
{
	if(top==-1)
	{
		printf("\nStack is empty!!");
		exit(0);
	}
	return stack[top--];
}

int isOperator(char op)
{
	return (op=='+'||op=='*'||op=='/'||op=='%'||op=='^'||op=='-');
}
