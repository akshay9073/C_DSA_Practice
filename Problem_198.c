#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

typedef struct node{
	char data;
	struct node *next;
}node;

int is_empty();
node *cn();
void push(char);
char pop();
char top_element();
node *top=NULL;

int main()
{
	char x;
	while((x=getchar())!='\n')
	{
		if(is_empty())
		push(x);
		else
		{
			if(x==top_element())
			pop();
			else
			{
				push(x);
			}
		}
	}
	
	int i=0,k=0;
	char res[20];
	while(!is_empty())
	{
		res[k++]=pop();
	}
	res[k]='\0';
	printf("\nFinal String is : %s",strrev(res));
	return 0;
	
}

node *cn()
{
	return (node *)malloc(sizeof(node));
}


int is_empty()
{
	if(top==NULL)
	return 1;
	else 
	return 0;
}

void push(char x)
{
	node *p=cn();
	if(p==NULL)
	{
		printf("\nStack is full !!");
		exit(0);
	}
	else
	{
		p->data=x;
		p->next=top;
		top=p;
	}
}

char pop()
{
	if(is_empty())
	{
		printf("\nStack is empty!!");
		exit(0);
	}
	else
	{
		node *temp=top;
		char x=temp->data;
		top=temp->next;
		free(temp);
		return x;
	}
}

char top_element()
{
	return top->data;
}
