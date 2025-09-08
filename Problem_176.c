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
node *delete_pos(node *,int);
int count_nodes(node *head);
node *delete_duplicate(node *);
node *sort_list(node *);
node *sort_list_descending(node *);
node *insert_sort(node *,int);
node *reverse_list(node *);
node *merge_list(node *,node *);
node *union_list(node *,node *);
node *merge_sort(node *,node *);
int main()
{
    node *HEAD=NULL; 
	int pos,count=0;
	node *HEAD1=NULL,*HEAD2=NULL,*HEAD3=NULL;
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
		printf("\n11)Sort List");
		printf("\n12)Sort List Descending");
		printf("\n13)Insert in sorted Linked List");
		printf("\n14)Reverse a List");
		printf("\n15)Merge List ");
		printf("\n16)Union List");
		printf("\n17)Merge Sort List");
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
            	
            case 11:
            	HEAD=sort_list(HEAD);
            	printf("\nSort Success!!");
            	break;
            	
            case 12:
            	HEAD=sort_list_descending(HEAD);
            	printf("\nSort Success!!");
            	break;
            	
            case 13:
				{
					int num;
	            	printf("\nEnter data to insert : ");
	            	scanf("%d",&num);
	            	HEAD=insert_sort(HEAD,num);
	            	printf("Insert Success!!");
	            	break;
				}
            	            	
            case 14:
            	HEAD=reverse_list(HEAD);
            	printf("\nReverse Success!!");
            	break;
            	
            case 15:
            	printf("\nAccept a Linked List-1");
            	HEAD1=create();
            	
            	printf("\nAccept a Linked List-2");
            	HEAD2=create();
            	
            	printf("\nMerge two Linked List ");
            	HEAD3=merge_list(HEAD1,HEAD2);
            	display(HEAD3);
            	
            	break;
            	
            case 16:
            	printf("\nAccept a Linked List-1");
            	HEAD1=create();
            	
            	printf("\nAceept a Linked List-2");
            	HEAD2=create();
            	
            	printf("\nUnion of two list ");
            	HEAD3=union_list(HEAD1,HEAD2);
            	display(HEAD3);
            	
            	break;
            	
            case 17:
            	printf("\nAccept a Linked List-1");
            	HEAD1=create();
            	
            	printf("\nAccept a Linked List-2");
            	HEAD2=create();
            	
            	printf("\nMerge Sort List");
            	HEAD3=merge_sort(HEAD1,HEAD2);
            	display(HEAD3);
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

node *sort_list(node *head)
{
	node *p=head;
	node *q;
	
	while(p!=NULL)
	{
		q=p->next;
		while(q!=NULL)
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
	}
	return head;
}

node *sort_list_descending(node *head)
{
	node *p=head;
	node *q;
	
	while(p!=NULL)
	{
		q=p->next;
		while(q!=NULL)
		{
			if(p->data<q->data)
			{
				int temp=p->data;
				p->data=q->data;
				q->data=temp;
			}
			q=q->next;
		}
		p=p->next;
	}
	return head;
}

node *insert_sort(node *head,int x)
{
	
	node *q=cn();
	q->data=x;
	q->next=q->prev=NULL;
	if(head==NULL)
	{
		return q;
	}
	
	if(x<=head->data)
	{
		q->next=head;
		head->prev=q;
		head=q;
		return head;
	}
	node *p=head;
	while(p->next!=NULL && p->next->data<x)
	p=p->next;
	
	if(p->next==NULL)
	{
		p->next=q;
		q->prev=p;
		return head;
	}
	
	q->next=p->next;
	q->prev=p;
	p->next->prev=q;
	p->next=q;
	
	
	return head;
}

node *reverse_list(node *head)
{
	node *p,*q;
	p=head;
	q=p->next;
	p->next=NULL;
	p->prev=q;
	
	while(q!=NULL)
	{
		q->prev=q->next;
		q->next=p;
		p=q;
		q=q->prev;
	}
	head=p;
	return head;
}

node *merge_list(node *head1,node *head2)
{
	node *head3=NULL;
	node *q3,*p3;
	node *p=head1;
	node *q=head2;
	
	if(head1==NULL)
	return head2;
	
	if(head2==NULL)
	return head1;
	
	while(p!=NULL)
	{
		if(head3==NULL)
		{
			q3=cn();
			q3->data=p->data;
			q3->prev=NULL;
			q3->next=NULL;
			head3=q3;
			p3=head3;	
		}
		else
		{
			q3=cn();
			q3->data=p->data;
			q3->prev=p3;
			q3->next=NULL;
			p3->next=q3;
			p3=p3->next;
		}
		p=p->next;
	}
	
	while(q!=NULL)
	{
		q3=cn();
		q3->data=q->data;
		q3->prev=p3;
		q3->next=NULL;
		p3->next=q3;
		p3=p3->next;
		
		q=q->next;
	}
	
	return head3;
}

node *union_list(node *head1,node *head2)
{
	node *head3=NULL;
	
	head1=delete_duplicate(head1);
	head2=delete_duplicate(head2);
	
	head3=merge_list(head1,head2);
	head3=delete_duplicate(head3);
	return head3;
}

node *merge_sort(node *head1,node *head2)
{
	node *head3=NULL;
		
	head3=merge_list(head1,head2);
	head3=sort_list(head3);
	
	return head3;
}
