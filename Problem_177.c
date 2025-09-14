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
node *sort_node(node *);
node *sort_node_desc(node *);
node *delete_sort_dup(node *);
node *reverse_list(node *);
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
			printf("\n10)Sort nodes");
			printf("\n11)Sort nodes Descendig");
			printf("\n12)Delete duplicate in sorted(Removes only 1 in a pass)");
			printf("\n13)Reverse a linked list");
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
					
				case 10:
					HEAD=sort_node(HEAD);
					printf("\nSorting Success!!");
					break;
					
				case 11:
					HEAD=sort_node_desc(HEAD);
					printf("\nSorting Success!!");
					break;
					
				case 12:
					HEAD=delete_sort_dup(HEAD);
					printf("\nDelete Duplicate Sorted Success");
					break;
					
				case 13:
					HEAD=reverse_list(HEAD);
					printf("\nLinked List Reverse Success!!");
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
		q->prev=q;
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
			q->next=q;
			q->prev=q;
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
	
	node *last = head->prev;
	node *temp = head;

	head = head->next;
	head->prev = last;
	last->next = head;

	free(temp);
	
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
	
	node *last = head->prev;
node *second_last = last->prev;

second_last->next = head;
head->prev = second_last;

free(last);
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
	int count = 0;
do {
    count++;
    p = p->next;
} while(p != head);
return count;

	return count;
}

node *sort_node(node *head)
{
	node *p=head;
	node *q;
	
	do
	{
		q=p->next;
		while(q!=head)
		{
			if(p->data>q->data)
			{
				int temp=p->data;
				p->data=q->data;
				q->data=temp;
			}
			q=q->next;
		}
		p=p->next;
	}while(p!=head);
	
	return head;
		

}

node *sort_node_desc(node *head)
{
	node *p=head;
	node *q;
	
	do
	{
		q=p->next;
		while(q!=head)
		{
			if(p->data<=q->data)
			{
				int temp=p->data;
				p->data=q->data;
				q->data=temp;
			}
			q=q->next;
		}
		p=p->next;
	}while(p!=head);
	
	return head;
}

node *delete_sort_dup(node *head)
{
	node *p=head;
	
	do
	{
        if (p->data == p->next->data)
        {
            node *dup = p->next;            
            p->next = dup->next;            
            dup->next->prev = p;            
            free(dup);                      
        }
        else
        {
            p = p->next; 
        }
	}while(p!=head);
	
	return head;
}

node *reverse_list(node *head)
{
	if(head==NULL || head->next==head)
	return head;
	
	node *current=head;
	
	do
	{
		node *temp=current->next;
		current->next=current->prev;
		current->prev=temp;
		
		current=current->prev;
	}while(current!=head);
	
	head=head->next;
	return head;
}
