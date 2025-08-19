#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
	int data;
	struct node *next;
}node;
node *create();
node *cn();
node *insert_first();
void display(node *);
int main()
{
	int choice,x;
	node *HEAD=NULL;
	
	while(1)
	{
		printf("\n===========================================================\n");
		printf("\n 1)Create a SLL");
		printf("\n 2)Display a SLL");
		printf("\n 3)Insert at First");
		printf("\n===========================================================\n");
	
	printf("\nEnter your choice : ");
	scanf("%d",&choice);
	
	switch(choice)
	{
		case 1:
			HEAD=create();
			printf("\nSingly Linked List create Success!!");
			break;
			
		case 2:
			display(HEAD);
			break;
			
		case 3:
			printf("\nEnter the Data to insert");
			scanf("%d",&x);
			HEAD=insert_first(HEAD,x);
			break;
			
	}
	}
	
}

node *cn()
{
	return (node *)malloc(sizeof(node));
}

node *create()
{
	int x,n;
	node *head=NULL,*p,*q;
	
	printf("\nEnter how many nodes you want? : ");
	scanf("%d",&n);
	
	head=cn();
	printf("\nEnter the data : ");
	scanf("%d",&x);
	head->data=x;
	head->next=NULL;
	
	p=head;
	int i=1;
	while(i<n)
	{
		q=cn();
		printf("\nEnter the data : ");
		scanf("%d",&x);
		q->data=x;
		q->next=NULL;
		p->next=q;
		
		p=p->next;
		i++;
	}
	
	return head;
}

void display(node *temp)
{
	if(temp==NULL)
	{
		printf("\nSSL is empty!!");
	}
	else
	{
		while(temp!=NULL)
		{
			printf("%d\t",temp->data);
			temp=temp->next;
		}
	}
}

node *insert_first(node *head,int x)
{
	node *p=cn();
	
	p->data=x;
	p->next=head;
	
	printf("\nNode Insert at first success!!");
	return p;
}
