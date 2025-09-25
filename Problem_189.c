#include<stdio.h>
#include<stdlib.h>

typedef struct node{
	int data;
	struct node *next;
}node;

node *top=NULL;

node *cn()
{
	return (node *)malloc(sizeof(node));
}

int main()
{
	int num;
	printf("\nEnter any number : ");
	scanf(" %d",&num);
	
	int temp=num;
	
	while(num>0)
	{
		push(num%2);
		num/=2;
	}
	
	printf("\n%d Deimal to binary : ",temp);
	while(!is_empty())
	{
		printf("%d",pop());
	}
}

int is_empty()
{
	if(top==NULL)
	return 1;
	else
	return 0;
}

void push(int x)
{
	node *p=cn();
	if(p==NULL)
	{
		printf("\nMemory out of bound!!");
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
	node *p=top;
	
	if(is_empty())
	{
		printf("\nStack is empty !!");
		exit(0);
	}
	else
	{
		int d;
		node *temp=top;
		d=temp->data;
		top=temp->next;
		free(temp);
		
		return d;
	}
}
