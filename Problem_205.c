#include<stdio.h>
#include<string.h>
#include<ctype.h>

#define MAX 20

char stack[20][20];
int top=-1;
int push(char *);
char *pop();

int main()
{
	char prefix[100];
	printf("\nEnter the Prefix : ");
	scanf("%s",prefix);

	int len=strlen(prefix);	
	for(int i=len-1;i>=0;i--)
	{
		char ch=prefix[i];
		if(isalnum(ch))
		{
			char operand[2]={ch,'\0'};
			push(operand);
		}
		else
		{
			char *op1=pop();
			char *op2=pop();
			
			char temp[MAX];
			snprintf(temp,sizeof(temp),"%s%s%c",op1,op2,ch);
			push(temp);
			
			
		}
	}
	printf("Postfix is : %s",stack[top]);
	
	return 0;
}

int push(char *str)
{
	if(top>MAX-1)
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
	else
	return stack[top--];
}
