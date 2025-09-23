#include<stdio.h>
#include<stdlib.h>

typedef struct node{
	char ch;
	struct node *next;
}node;

node *top=NULL;

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
		
	}
}

int push(char x)
{
	node *p=cn();
	p->ch=x;
	p->next=top;
	top=p;
}
