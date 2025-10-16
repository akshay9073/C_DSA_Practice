#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

typedef struct node{
	int data;
	struct node *next;
}node;

node *f=NULL,*r=NULL;
void insert(int);
void print(node *);
int is_empty(node *);
int delete_element(node *);

int main()
{
	int choice,x;
	node *q;
	
	while(1)
	{
		printf("\n=========================================================================\n");
		printf("\n1)Insert in Queue");
		printf("\n2)Delete in Queue");
		printf("\n3)Print Queue");
		printf("\n4)Check Queue is Empty!!");
		printf("\n5)Exit");
		printf("\n=========================================================================\n");
		
		printf("\nEnter your Choice : ");
		scanf(" %d",&choice);
		
		switch(choice)
		{
			case 1:
				printf("\nEnter data for queue : ");
				scanf(" %d",&x);
				insert(x);
				printf("%d insert success!!",x);
				break;
				
			case 2:
				x=delete_element(f);
				printf("%d element delete form Queue",x);
				break;
				
			case 3:
				printf("\nPrint Queue Elements!!\n");
				print(f);
				break;
				
			case 4:
				if(is_empty(f))
				printf("\nQueue is Empty!!");
				else
				printf("\nQueue is not Empty!!");
				break;
				
			case 5:
				exit(0);
		}
	}
	
	
}

node *cn()
{
	return (node *)malloc(sizeof(node));
}

void insert(int x)
{
	node *p=cn();
	
	if(p==NULL)
	{
		printf("\nMemory Full Cannot Insert!!");
		exit(0);
	}
	else
	{
		p->data=x;
		
		if(f==NULL)
		{
			f=r=p;
			p->next=NULL;
		}
		else
		{
			p->next=NULL;
			r->next=p;
			r=p;
		}
	}
}

void print(node *head)
{
	node *p=head;
	while(p!=NULL)
	{
		printf("%d\t",p->data);
		p=p->next;
	}
}

int is_empty(node *f)
{
	if(f==NULL)
	return 1;
	else
	return 0;
}

int delete_element(node *head)
{
	int x;
	node *p=head;
	x=p->data;
	f=p->next;
	free(p);
	return x;
	
}
