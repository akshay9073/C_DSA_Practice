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
node *insert_node(node *,int);
node *delete_first(node *);
node *delete_last(node *);
node *delete_node(node *,int);
int main()
{
	node *HEAD=NULL;
	int choice,pos,count;
	while(1)
	{
			printf("\n===============Circular Doubly Linked List=========================\n");
			printf("\n1)Create Linked List");
			printf("\n2)Display Linked List");
			printf("\n3)Insert at First");
			printf("\n4)Insert at Last");
			printf("\n5)Insert a node");
			printf("\n6)Delete a First");
			printf("\n7)Delete a Last");
			printf("\n8)Delete a node");
			printf("\n9)Count nodes");
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
					
				case 5:
					printf("\nEnter a position to insert node : ");
					scanf(" %d",&pos);
					HEAD=insert_node(HEAD,pos);
					printf("\nInsert Success!!");
					break;
					
				case 6:
					HEAD=delete_first(HEAD);
					printf("\nDelete Success!!");
					break;
					
				case 7:
					HEAD=delete_last(HEAD);
					printf("\nDelete Success!!");
					break;
					
				case 8:
					printf("\nEnter the position : ");
					scanf("%d",&pos);
					HEAD=delete_node(HEAD,pos);
					printf("\nDelete Success!!");
					break;
					
				case 9:
					count=count_node(HEAD);
					printf("\nList has : %d ",count);
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
		scanf(" %d",&q->data);
		p->next=q;
		q->next=head;
		p=p->next;
		
		i++;	
	}
	head->prev = p;
	p->next = head;

	return head;	
}

void display(node *head)
{
	node *p=head;
	
	if(p==NULL)
	printf("\nLinked List is empty");
	
	if(p->next==head)
	printf("%d",p->data);
	else
	{
		do
		{
			printf("%d\t",p->data);
			p=p->next;
		}while(p!=head);
	}	
}

node *insert_first(node *head)
{
	node *p=head;
	node *q=cn();
	
	printf("\nEnter Data : ");
	scanf(" %d",&q->data);
	if (head == NULL) 
	{
    	q->next = q;
    	q->prev = q;
    	return q;
	}

node *last = head->prev;

q->next = head;
q->prev = last;

last->next = q;
head->prev = q;

head = q;
}

node *insert_last(node *head)
{
	node *q = cn();
    printf("\nEnter Data : ");
    scanf(" %d", &q->data);

    if (head == NULL) {
        q->next = q;
        q->prev = q;
        return q;
    }

    node *last = head->prev;
    if (last == NULL) 
	{              
        node *p = head;
        while (p->next != head && p->next != NULL)
            p = p->next;
        last = p;
    }

    q->next = head;
    q->prev = last;

    last->next = q;
    head->prev = q;

    return head;	
}

node *insert_node(node *head,int pos)
{
	node *p=head;
	
	if(pos==1)
	{
		head=insert_first(head);
		return head;
	}
	
	int i=1;
	
	while(i<pos-1)
	{
		p=p->next;
		i++;
	}
	
	node *q=cn();
	printf("\nEnter Data : ");
	scanf("%d",&q->data);
	
	q->prev=p;
	q->next=p->next;
	p->next=q;
	
	return head;
	
}

node *delete_first(node *head)
{
	if(head->next==head)
	{
		free(head);
		head=NULL;
		return head;
	}
	
	node *p=head;
	node *q=p->next;
	head=q;
	q->prev=NULL;
	
	do
	{
		q=q->next;
	}while(q->next!=p);
	
	q->next=head;
	free(p);
	
	return head;
}

node *delete_last(node *head)
{
	node *p=head;
	
	if(head->next==head)
	{
		free(head);
		head=NULL;
		return head;
	}
	
	do
	{
		p=p->next;
	}while(p->next!=head);
	
	node *q=p->prev;
	q->next=head;
	free(p);
	
	return head;
}

node *delete_node(node *head,int pos)
{
	node *p=head;
	
	if(pos==1)
	{
		head=delete_first(head);
		return head;
		
	}
	
	int i=1;
	
	while(i<pos-1)
	{
		p=p->next;
		i++;
	}
	
	node *q=p->next;
	q->next->prev=p;
	p->next=q->next;
	free(q);
	
	return head;	
}

int count_node(node *head)
{
	node *p=head;
	
	if(head==NULL)
	return 0;
	
	if(head->next==NULL)
	return 1;
	
	int count=0;
	
	do
	{
		++count;
		p=p->next;
	}while(p->next!=head);
	count++;
	return count;
}
