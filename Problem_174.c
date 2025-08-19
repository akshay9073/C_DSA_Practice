#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
	int data;
	struct node *next;
}node;
node *create();
node *cn();
node *insert_first(node *,int);
node *insert_last(node *,int);
node *insert_between(node *,int,int);
node *delete_first(node *);
void display(node *);
int main()
{
	int choice,x,pos;
	node *HEAD=NULL;
	
	while(1)
	{
		printf("\n===========================================================\n");
		printf("\n 1)Create a SLL");
		printf("\n 2)Display a SLL");
		printf("\n 3)Insert at First");
		printf("\n 4)Insert at Last");
		printf("\n 5)Insert at Between");
		printf("\n 6)Delete first Node in SLL");
		printf("\n===========================================================\n");
	
	printf("\nEnter your choice : ");
	scanf(" %d",&choice);
	
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
			printf("\nEnter the Data to insert : ");
			scanf("%d",&x);
			HEAD=insert_first(HEAD,x);
			break;
			
		case 4:
			printf("\nEnter the Data to insert : ");
			scanf(" %d",&x);
			HEAD=insert_last(HEAD,x);
			break;
			
		case 5:
			printf("\nEnter the position and data to insert : ");
			scanf("%d %d",&pos,&x);
			HEAD=insert_between(HEAD,pos,x);
			break;
			
		case 6:
			HEAD=delete_first(HEAD);
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
	int x,n,pos;
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

node *insert_last(node *head,int x)
{
	node *p=head;
	while(p->next!=NULL)
	p=p->next;
	
	node *q;
	q=cn();
	q->data=x;
	q->next=NULL;
	
	p->next=q;
	
	printf("\nInsert Last Success");
	return head;
}

node *insert_between(node *head,int pos,int x)
{
	node *p,*q;
	p=head;
	
	int i=1;
	while(i<pos-1)
	{
		p=p->next;
		i++;
	}
	
	q=cn();
	q->data=x;
	q->next=p->next;
	p->next=q;
	
	printf("\nInsert at positon %d success !!!",pos);
	return head;
}

node *delete_first(node *head)
{
	if(head==NULL)
	{
		printf("\nDelete failed Linked List is Empty");
		return head;
	}
	
	node *p;
	p=head;
	
	head=p->next;
	free(p);
	
	p=NULL;
	printf("\nDelete first node Success!!");
	return head;
}
