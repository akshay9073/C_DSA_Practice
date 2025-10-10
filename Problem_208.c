#include<stdio.h>

typedef struct node{
	int data;
	struct node *next;
}node;

node *f=NULL,*r=NULL;
node *insert(int);
void print(node *);
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
				printf("\nEnter your choice : ");
				scanf(" %d",&x);
				f=insert(x);
				printf("%d insert success!!",x);
				break;
				
			case 3:
				printf("\nPrint Queue Elements!!\n");
				print(f);
				break;
		}
	}
	
	
}

node *cn()
{
	return (node *)malloc(sizeof(node));
}

node *insert(int x)
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
	return f;
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
