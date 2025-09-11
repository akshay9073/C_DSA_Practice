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
int main()
{
	node *HEAD=NULL;
	int choice;
	while(1)
	{
			printf("\n===============Circular Doubly Linked List=========================\n");
			printf("\n1)Create Linked List");
			printf("\n===================================================================\n");
	
			printf("\nEnter your Choice : ");
			scanf("%d",&choice);
			
			switch(choice)
			{
				case 1:
					HEAD=create();
					printf("\nCircular Linked List creation Success!!");
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
	
	node *p=head;
	int i=0;
	node *q;
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

