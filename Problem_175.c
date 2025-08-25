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
int main()
{
	node *HEAD=NULL;
	int choice,x;
	
	while(1)
	{
		printf("\n===================================================================================================\n");
		printf("\n 1)Create a Linked List");
		printf("\n 2)Display Linked List");
		printf("\n 3)Insert at First");
		printf("\n 4)Insert at Last");
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


