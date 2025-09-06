#include<stdio.h>

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
int main()
{
    node *HEAD=NULL; 
	int pos;
    int ch;
    while(1)
    {
        printf("\n=========Linked List==========\n");
		printf("\n1)Create Linked List");
		printf("\n2)Display");
		printf("\n3)Insert at First");
		printf("\n4)Insert at Last");
		printf("\n5)Insert at Position");
        printf("\n==============================\n");

        printf("\nEnter Your Choice : ");
        scanf("%d",&ch);
        
        switch(ch)
        {
        	case 1:
                HEAD = create();
                printf("\nDLL Created Success!!!");
                break;
                
            case 2:
            	printf("\nDisplay Linked List : ");
            	display(HEAD);
            	break;
            	
            case 3:
            	HEAD=insert_first(HEAD);
            	printf("\nInsert Success!!");
            	break;
            	
            case 4:
            	HEAD=insert_last(HEAD);
            	printf("\nInsert Success!!");
            	break;
            	
            case 5:
            	printf("\nEnter position to enter : ");
            	scanf("%d",&pos);
            	HEAD=insert_node(HEAD,pos);
            	printf("\nInsert Success!!");
            	break;
            	

		}
	}
	
	
}
node* cn()
{
    return (node*)malloc(sizeof(node));
}

node *create()
{
    int n , x , i = 1 ;
    node *head=NULL ,*p ,*q;
    printf("\nHow Many Nodes U Want : ");
    scanf("%d",&n); 

    head = cn();
    printf("\nEnter Data : ");
    scanf("%d",&x);
    head -> prev = NULL;
    head -> data = x;
    head -> next = NULL;

    p = head;

    while(i<n)
    {
        q = cn();
        printf("\nEnter Data : ");
        scanf("%d",&x);

        q->prev = p;
        q -> data = x;
        q -> next = NULL;

        p->next = q ;
        p = p->next; 
        i++;
    }
    return head;
}

void display(node *head)
{
	node *p=head;
	
	while(p!=NULL)
	{
		printf("\t%d",p->data);
		p=p->next;
	}
}

node *insert_first(node *head)
{
	node *q=cn();
	int x;
	printf("\nEnter Data : ");
	scanf("%d",&x);
	q->data=x;
	q->next=head;
	q->prev=NULL;
	head->prev=q;
	head=q;
	
	return head;
}

node *insert_last(node *head)
{
	node *p=head;
	
	while(p->next!=NULL)
	p=p->next;
	
	node *q=cn();
	printf("\nEnter Data : ");
	scanf("%d",&q->data);
	
	q->next=NULL;
	q->prev=p;
	p->next=q;
	
	return head;
}

node *insert_node(node *head,int pos)
{
	
	int i=0;
	node *p=head;
	while(i<pos-1)
	{
		printf("\n%d",p->data);
		p=p->next;
		i++;
	}
	return head;
}
