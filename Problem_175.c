#include<stdio.h>

typedef struct node{
	
	int data;
	struct node *next;
}node;

node *cn();
node *create();
void display(node *);
node *insert_first(node *);
node *insert_last(node *);
node *insert_pos(node *,int);
node *delete_first(node *);
node *delete_last(node *);
int main()
{
	node *HEAD=NULL;
	int choice,x,pos;
	
	while(1)
	{
		printf("\n===================================================================================================\n");
		printf("\n 1)Create a Linked List");
		printf("\n 2)Display Linked List");
		printf("\n 3)Insert at First");
		printf("\n 4)Insert at Last");
		printf("\n 5)Insert at any position");
		printf("\n 6)Delete first node");
		printf("\n 7)Delete last node");
		printf("\n===================================================================================================\n");
	
		printf("\nEnter your choice : ");
		scanf("%d",&choice);
	
		switch(choice)
		{
			case 1:
				printf("\nCreate a linked list\n");
				HEAD=create();
				break;
				
			case 2:
				printf("\nLinked List is : ");
				display(HEAD);
				break;	
				
			case 3:
				HEAD=insert_first(HEAD);
				printf("\nInsert Success !!");
				break;
				
			case 4:
				HEAD=insert_last(HEAD);
				printf("\nInsert Last Success!!");
				break;
				
			case 5:
				printf("\nEnter the position to insert data at : ");
				scanf("%d",&x);
				HEAD=insert_pos(HEAD,x);
				printf("\nInsert Success !!");
				break;
				
			case 6:
				HEAD=delete_first(HEAD);
				printf("\nDelete Success!!");
				break;
				
			case 7:
				HEAD=delete_last(HEAD);
				printf("\nDelete Success !!");
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
	
	node *head,*p,*q;
	
	int x,d;
	printf("\nHow many nodes you want ?\n");
	scanf("%d",&x);
	
	head=cn();
	printf("\nEnter data : ");
	scanf("%d",&d);
	head->data=d;
	head->next=head;
	p=head;
	
	int i=1;
	while(i<x)
	{
		q=cn();
		
		printf("\nEnter data : ");
		scanf("%d",&d);
		
		q->data=d;
		q->next=head;
		p->next=q;
		p=p->next;
		
		i++;
	}
	return head;
}
void display(node *head)
{
	
	node *p;
	p=head;
	if(p==NULL)
	{
		printf("\nLinked List is empty");
	}
	else
	{
		while(p->next!=head)
		{
			printf("%d\t",p->data);
			p=p->next;
		}
		printf("%d\t",p->data);
	}
}

node *insert_first(node *head)
{
	node *p,*q,*r;
	int x;
	if(head==NULL)
	{
		head=cn();
		printf("\nEnter the data : ");
		scanf("%d",&x);
		head->data=x;
		head->next=head;
		return head;
	}
		p=head;
		while(p->next!=head)
		p=p->next;

	q=cn();
	printf("\nEnter data : ");
	scanf("%d",&x);
	
	q->data=x;
	q->next=head;
	
			
	p->next=q;
	
	return q;
	
}
node *insert_last(node *head)
{
	node *p=head;
	
	while(p->next!=head)
	p=p->next;
	
	int x;
	node *q;
	q=cn();
	printf("\nEnter data : ");
	scanf("%d",&x);
	
	q->data=x;
	q->next=head;
	p->next=q;
	
	return head;
}

node *insert_pos(node *head,int x)
{
	node *p,*q;
	
	p=head;
	
	int i=1;
	while(i<x-1)
	{
		p=p->next;
		i++;
	}
	
	int d;
	q=cn();
	printf("\nEnter data : ");
	scanf("%d",&d);
	q->data=d;
	q->next=p->next;
	p->next=q;
	
	return head;
}

node *delete_first(node *head)
{
	node *p=head;
	node *q=head;
	while(p->next!=head)
	{
		p=p->next;
	}
	head=q->next;
	free(q);
	p->next=head;

	return head;
}

node *delete_last(node *head)
{

node *p=head;

while(p->next->next!=head)
{
	p=p->next;
}
free(p->next);
p->next=head;

return head;
	
}
