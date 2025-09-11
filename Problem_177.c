#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
	struct node *prev;
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
	int choice;
	while(1)
	{
			printf("\n===============Circular Doubly Linked List=========================\n");
			printf("\n1)Create Linked List");
			printf("\n2)Display Linked List");
			printf("\n3)Insert at First");
			printf("\n4)Insert at Last");
			printf("\n===================================================================\n");
	
			printf("\nEnter your Choice : ");
			scanf("%d",&choice);
			
			switch(choice)
			{
				case 1:
					HEAD=create();
					printf("\nCircular Linked List creation Success!!");
					break;
					
				case 2:
					printf("\nDisplay Linked List\n");
					display(HEAD);
					break;
					
				case 3:
					HEAD=insert_first(HEAD);
					printf("\nInsert at First Success");
					break;
					
				case 4:
					HEAD=insert_last(HEAD);
					printf("\nInsert at Last Success");
					break;
					
				default:
					printf("\nEnter a valid choice\n");
					break;
			}
	}	
	
}

node *cn()
{
	return (struct node*)malloc(sizeof(node));
}

node *create()
{
	node *head=NULL;
	int x;
	printf("\nHow many nodes you want ?\n");
	scanf(" %d",&x);
	
	node *q;
	if(x==1)
	{
		q=cn();
		printf("\nEnter Data : ");
		q->prev=NULL;
		scanf("%d",&q->data);
		q->next=q;
		return q;
	}
	
	node *p=head;
	int i=0;
	
	
	while(i<x-1)
	{
		if(head==NULL)
		{
			q=cn();
			q->next=NULL;
			q->prev=NULL;
			printf("\nEnter Data : ");
			scanf(" %d",&q->data);
			head=p=q;
		}
		
		q=cn();
		q->prev=p;
		printf("\nEnter Data : ");
		scanf("%d",&q->data);
		p->next=q;
		q->next=head;
		p=p->next;
		
		i++;	
	}
	return head;
	
}

