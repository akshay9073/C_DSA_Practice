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
node *delete_first(node *);
node *delete_last(node *);
node *delete_pos(node *,int);
int count_nodes(node *head);
node *delete_duplicate(node *);
int main()
{
    node *HEAD=NULL; 
	int pos,count=0;
    int ch;
    while(1)
    {
        printf("\n=========Linked List==========\n");
		printf("\n1)Create Linked List");
		printf("\n2)Display");
		printf("\n3)Insert at First");
		printf("\n4)Insert at Last");
		printf("\n5)Insert at Position");
		printf("\n6)Delete at First");
		printf("\n7)Delete at Last");
		printf("\n8)Delete node");
		printf("\n9)Count Nodes");
		printf("\n10)Delete Duplicate");
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
            	
            case 6:
            	HEAD=delete_first(HEAD);
            	printf("\nDelete Success!!");
            	break;
            	
            case 7:
            	HEAD=delete_last(HEAD);
            	printf("\nDelete Success !!");
            	break;
            	
            case 8:
            	printf("\nEnter position to delete : ");
            	scanf("  %d",&pos);
            	HEAD=delete_pos(HEAD,pos);
            	printf("\nDelete success!!");
            	break;
            	
            case 9:
            	count=count_nodes(HEAD);
            	printf("\nDLL has %d Nodes ",count);
            	break;
            	
            case 10:
            	HEAD=delete_duplicate(HEAD);
            	printf("\nDelete duplicate success!!");
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
	
	if(head==NULL)
	printf("\nLinked list is empty!!\n");
	
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
	
	if(pos<=1)
	{
		node *q=cn();
		printf("\nEnter Data : ");
		scanf("%d",&q->data);
		q->prev=NULL;
		q->next=head;
		head->prev=q;
		head=q;
		
		return head;
	}
	
	
	
	int i=1;
	node *p=head;
	while(i<pos-1)
	{
		p=p->next;
		i++;
	}
	
	node *q=cn();
	printf("\nEnter Data : ");
	scanf("%d",&q->data);
	
	q->next=p->next;
	q->prev=p;
	p->next=q;
	
	return head;
	return head;
}

node *delete_first(node *head)
{
	node *p=head;
	
	p->next->prev=NULL;
	head=p->next;
	free(p);
	
	return head;
}

node *delete_last(node *head)
{
	
	node *p=head;
	
	while(p->next->next!=NULL)
	{
		p=p->next;
	}
	free(p->next->next);
	p->next=NULL;
	
	return head;
	
}

node *delete_pos(node *head,int pos)
{
	node *p=head;
	
	if(head->next==NULL)
	{
		free(head);
		head=NULL;
		return NULL;
		
	}
	if (pos <= 1) {
        head = head->next;
        if (head != NULL) { // if there was more than 1 node
            head->prev = NULL;
        }
        free(p);
        return head;
    }
	
	int i=0;
	while(i<pos-1)
	{
		
		p=p->next;
		i++;
	}
	
	if (p->next == NULL) {
        p->prev->next = NULL;
        free(p);
        return head;
    }

	
	node *q=p;
	q=p->next;
	q->prev=p->prev;
	p->prev->next=q;
	
	free(p);
	
	return head;
}

int count_nodes(node *head)
{
	node *p=head;
	int count=0;
	while(p!=NULL)
	{
		count++;
//		printf("\nCount : %d & Data : %d",count,p->data);
		p=p->next;
	}
	
	return count;
}

node *delete_duplicate(node *head)
{
	node *p=head;
	node *r,*q;
	
	 if (head == NULL || head->next == NULL)   // ? fix: also check head==NULL
        return head;
        
	while(p!=NULL && p->next!=NULL)
	{
		q=p->next;
		r=p;
		while(q!=NULL)
		{
			if(p->data==q->data)
			{
				r->next = q->next;
                if (q->next != NULL)          // ? check before accessing prev
                    q->next->prev = r;
                free(q);
                q = r->next;
			}
			else
			{
				r=q;
				q=q->next;
			}
		}
		p=p->next;
	}
	return head;
}
