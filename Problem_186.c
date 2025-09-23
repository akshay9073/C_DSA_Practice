#include<stdio.h>
#include<stdlib.h>

typedef struct node{
	char ch;
	struct node *next;
}node;

node *top=NULL;
int push(char);
char pop();
int is_empty();

node *cn()
{
	return (node *)malloc(sizeof(node));
}

int main()
{
	char str[20];
	printf("\nEnter a string : ");
	scanf("%[^\n]s", &str);
	
	int i=0;
	while(str[i]!='\0')
	{
		push(str[i]);
		i++;
	}
	
	printf("\n%c\t",pop());
	printf("\n%c\t",pop());
	printf("\n%c\t",pop());
	printf("\n%c\t",pop());
	
	return 0;
}

int push(char x)
{
	node *p=cn();
	p->ch=x;
	p->next=top;
	top=p;
	return 0;
}

char pop()
{
	if(top==NULL)
	{
		printf("\nStack is empty !!");
	}
	node *temp=top;
	char x=temp->ch;
	top=temp->next;
	free(temp);
	
	return x;
}

int is_empty()
{
	if(top==NULL)
	return 1;
	else
	return 0;
}
