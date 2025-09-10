#include<stdio.h>
#include<stdlib.h>
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
node *delete_pos(node *,int);
int count_nodes(node *head);
node *delete_duplicate(node *);
int search_node(node *,int);
node *sort_list(node *);
void update_node(node *,int);
node *skip_list(node *);
node *reverse_list(node *);
node *merge_list(node *,node *);
node *merge_sort_list(node *,node *);
node *sort_list_fun(node *);
node *union_list(node *,node *);
node *intersection_list(node *,node *);
node *difference_list(node *,node *);
node *symmetric_difference(node *,node *);
int main()
{
	node *HEAD=NULL;
	node *HEAD1,*HEAD2;
	int choice,x,pos,count,index;
	
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
		printf("\n 8)Delete at Position");
		printf("\n 9)Count Nodes");
		printf("\n 10)Delete Duplicate");
		printf("\n 11)Search in Linked List");
		printf("\n 12)Sort List");
		printf("\n 13)Update the Node");
		printf("\n 14)Skip Linked List");
		printf("\n 15)Reverse a Linked List");
		printf("\n 16)Merge Linked List");
		printf("\n 17)Merge & Sort List");
		printf("\n 18)Sort List");
		printf("\n 19)Union of Linked List");
		printf("\n 20)Intersection of Linked List");
		printf("\n 21)Difference List");
		printf("\n 22)Symmetric Difference");
		printf("\n 23)Exit");
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
				
			case 8:
				printf("\nEnter the position to delete : ");
				scanf("%d",&x);
				HEAD=delete_pos(HEAD,x);
				printf("\n Delete Success!!");
				break;
				
			case 9:
				count=count_nodes(HEAD);
				printf("\nLinked List have : %d nodes",count);
				break;
				
			case 10:
				HEAD=delete_duplicate(HEAD);
				printf("\nDelete Duplicate Success!!");
				break;
				
			case 11:
				printf("\nEnter the element to search : ");
				scanf("%d",&x);
				index=search_node(HEAD,x);
				if(index!=-1)
				printf("\n%d element found at node %d",x,index);
				else
				printf("\n%d element not found at any node",x);
				break;
				
			case 12:
				printf("\nSorted list is : ");
				HEAD=sort_list(HEAD);
				display(HEAD);
				break;
				
			case 13:
				printf("\nEnter the node to update : ");
				scanf("%d",&x);
				update_node(HEAD,x);
				printf("\nNode update Success !!");
				break;
				
			case 14:
				HEAD=skip_list(HEAD);
				printf("\nNodes Skipped Success!!");
				break;
				
			case 15:
				HEAD=reverse_list(HEAD);
				printf("\nLinked List Reverse Success!!");
				break;
				
			case 16:
				printf("\nAccept Linked List-1");
				HEAD1=create();
				
				printf("\nAccept Linked List-2");
				HEAD2=create();
				
				HEAD=merge_list(HEAD1,HEAD2);
				printf("\nMerge List Success!!");
				break;
				
			case 17:
				printf("\nAccept Linked List-1");
				HEAD1=create();
				
				printf("\nAccept Linked List-2");
				HEAD2=create();
				
				HEAD=merge_sort_list(HEAD1,HEAD2);
				printf("\nMerge & Sort List Success!!");
				break;
				
			case 18:
				printf("\nSorted list is : ");
				HEAD=sort_list_fun(HEAD);
				display(HEAD);
				break;
				
			case 19:
				printf("\nAccept List-1");
				HEAD1=create();
				
				printf("\nAccept List-2");
				HEAD2=create();
				
				node *HEAD3=union_list(HEAD1,HEAD2);
				printf("\nUnion of list-1 and list-2 :  ");
				display(HEAD3);
				break;
				
			case 21:
				printf("\nAccept List-1");
				HEAD1=create();
				
				printf("\nAccept List-2");
				HEAD2=create();
				
				printf("\nDifference of List-1 and List-2  : ");
				HEAD3=difference_list(HEAD1,HEAD2);
				
				display(HEAD3);
				break;
				
			case 22:
				printf("\nAccept List-1");
				HEAD1=create();
				
				printf("\nAccept List-2");
				HEAD2=create();
				
				printf("\nSymmetric Difference of List-1 and List-2  : ");
				HEAD3=symmetric_difference(HEAD1,HEAD2);
				
				display(HEAD3);
				break;
				
			case 23:
				printf("\nExiting this code ");
				exit(0);
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

node *delete_pos(node *head,int x)
{
	node *p=head;
	
	if(x==1)
	{
		
		if(head->next==head)
		{
			free(head);
			return NULL;
		}
		
		node *q=head;
		while(q->next!=head)
		{
				q=q->next;
		}
			node *temp=head;
			head=head->next;
			free(temp);
			q->next=head;
		return head;
	}
	
	int i=1;
	while(i<x-1)
	{
		p=p->next;
		i++;
	}
	node *q=p->next;
	p->next=q->next;
	free(q);
	
	return head;
}

int count_nodes(node *head)
{
	int count=0;
	node *p=head;
	
	if(head==NULL)
	return 0;
	
	do
	{
		count++;
		p=p->next;
	}while(p!=head);
	return count;
}

node *delete_duplicate(node *head)
{
	node *p,*q,*r;
	
	p=head;
	
	while(p->next!=head)
	{
		q=p->next;
		r=p;
		while(q->next!=head)
		{
			if(p->data==q->data)
			{
				r->next=q->next;
				free(q);
				q=r->next;
			}
			else
			{
				r=q;
				q=q->next;
			}
		}
		if(p->data==q->data)
		{
			r->next=q->next;
			free(q);
		}
		p=p->next;
	}
	return head;	
}

int search_node(node *head,int x)
{
	node *p=head;
	int count=0;
	do
	{
		count++;
		if(p->data==x)
		{
			printf("\nelement search ");
			return count;
		}
		p=p->next;
	}while(p!=head);
	return -1;
}

node *sort_list(node *head)
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

void update_node(node *head,int x)
{
	node *p;
	p=head;
	int i=0;
	
	while(i<x-1)
	{
		p=p->next;
		i++;
	}
	int d;
	printf("\nEnter data to update : ");
	scanf("%d",&d);
	p->data=d;
}

node *skip_list(node *head)
{
		node *p,*q;
		
		if(head==NULL||head->next==head)
		return head;
		
		if(head->next->next==head)
		{
			p=head->next;
			free(p);
			head->next=head;
			return head;
		}
		
		p=head;
		while(p->next!=head)
		{
			q=p->next;
			p->next=q->next;
			free(q);
			
			if(p->next==head)
			return head;
			
			if(p->next->next==head)
			return head;
			
			p=p->next;
		}
		return head;
}

node *reverse_list(node *head)
{
	  if (!head || head->next == head) 
        return head;  

node *p,*lasthead,*q;
    p=head;
    while(p->next!=head)
        p=p->next;

    lasthead=q=p;
    p=head;

    while(p->next!=q)
    {
        while(p->next!=q)
            p=p->next;
        q->next=p;
        q=p;
        p=head;
    }

    q->next = head;
    p->next=lasthead;
    return lasthead;

}

node *merge_list(node *head1,node *head2)
{
	node *head3=NULL , *p3 , *q3;
    node *p1,*p2;

    p1=head1;
    p2=head2;

    if(head1==NULL)
        return head2;

    if(head2==NULL)
        return head1;

    while(p1->next!=head1)
    {
        if(head3==NULL)
        {
           head3 =cn();
           head3->data = p1->data;
           head3->next=head3;
           p3 = head3;
        }
        else
        {
            q3=cn();
            q3->data=p1->data;
            q3->next=head3;
            p3->next=q3;
            p3 = p3->next;
        }
        p1=p1->next;
    }
    //Remaining 1 Node & only 1  Node
    if(head3==NULL)
    {
        head3 =cn();
        head3->data = p1->data;
        head3->next=head3;
        p3 = head3;
    }
    else
    {
        q3=cn();
        q3->data=p1->data;
        q3->next=head3;
        p3->next=q3;
        p3 = p3->next;
    }

    while(p2->next!=head2)
    {
        q3=cn();
        q3->data=p2->data;
        q3->next=head3;
        p3->next=q3;
        p3 = p3->next;
        p2=p2->next;
    }
    q3=cn();
    q3->data=p2->data;
    q3->next=head3;
    p3->next=q3;
    p3 = p3->next;

    return head3;

}

node *merge_sort_list(node *head1,node *head2)
{
	node *head3;
	
	head3=merge_list(head1,head2);
	head3=sort_list(head3);
	
	return head3;
}

node *sort_list_fun(node *head)
{
	node *p=head;
	node *q;
	do
	{
		q=p->next;
		while(q!=head)
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
	}while(p!=head);
	
	return head;
}

node *union_list(node *head1,node *head2)
{
	node *head3;
	head1=delete_duplicate(head1);
	head2=delete_duplicate(head2);
	
	head3=merge_list(head1,head2);
	
	return head3;
}

int search(node *head,int data)
{
	if(!head)
	return 0;
	node *p=head;
	do
	{
		if(p->data==data)
		return 1;
		p=p->next;
	}while(p!=head);
	
	return 0;
}

node *intersection_list(node *head1,node *head2)
{
	node *head3=NULL,*p,*q,*q3,*p3;
	
	head1=delete_duplicate(head1);
	head2=delete_duplicate(head2);
	
	p=head1;
	do
	{
		q=head2;
		do
		{
			if(p->data==q->data)
            {
                if(!search(head3,p->data)) 
                {
                    q3=cn();
                    q3->data=p->data;
                    if(!head3)
                    {
                        head3=q3;
                        head3->next=head3;
                        p3=head3;
                    }
                    else
                    {
                        q3->next=head3;
                        p3->next=q3;
                        p3=q3;
                    }
                }
                break;
            }
			q=q->next;
		}while(q!=head2);
		p=p->next;
	}while(p!=head1);
	
	return head3;
}

node *difference_list(node *head1,node *head2)
{
	node *head3=NULL,*p,*q,*p3,*q3;
	
	head1=delete_duplicate(head1);
	head2=delete_duplicate(head2);
	
	p=head1;
	int found;
	do
	{
		found=0;
		if(head2)
		{
			q=head2;
			do
			{
				if(p->data==q->data)
				{
					found=1;
					break;
				}
				q=q->next;
			}while(q!=head2);
		}
		
		if(!found && !search(head3,p->data))
		{
			q3 = cn();
            q3->data = p->data;
            if (!head3) {
                head3 = q3;
                head3->next = head3;
                p3 = head3;
            } else {
                q3->next = head3;
                p3->next = q3;
                p3 = q3;
            }
				
		}	
		p=p->next;
	}while(p!=head1);
	
	return head3;
}

node *symmetric_difference(node *head1,node *head2)
{
	node *head3=NULL,*diff1,*diff2;
		
	diff1=difference_list(head1,head2);
//	printf("\nDisplay node : ");
//	display(diff1);
	
	diff2=difference_list(head2,head1);
//	display(diff2);
	head3=union_list(diff1,diff2);
	
	return head3;
}
