#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
	int data;
	struct node *next;
}node;
node *create();
node *cn();
node *insert_first(node *,int);
node *insert_last(node *,int);
node *insert_between(node *,int,int);
node *delete_first(node *);
node *delete_last(node *);
void display(node *);
node *delete_between(node *,int);
int count_nodes(node *);
int search_data(node *,int);
int update_node(node *,int);
node *delete_duplicate(node *);
node *delete_duplicate_sorted(node *);
int check_sorted(node *);
node *sort_list(node *);
node *sort_list_i(node *);
node *reverse_list(node *);
node *merge_list(node *,node *);
node *union_list(node *,node *);
int main()
{
	int choice,x,pos,count;
	node *HEAD=NULL,*HEAD1,*HEAD2,*HEAD3;
	
	while(1)
	{
		printf("\n=========================================================================================================\n");
		printf("\n 1)Create a SLL");
		printf("\n 2)Display a SLL");
		printf("\n 3)Insert at First");
		printf("\n 4)Insert at Last");
		printf("\n 5)Insert at Between");
		printf("\n 6)Delete first Node in SLL");
		printf("\n 7)Delete Last Node");
		printf("\n 8)Delete any Node in the List");
		printf("\n 9)Count Nodes ");
		printf("\n 10)Search the node");
		printf("\n 11)Update a node");
		printf("\n 12)Delete Duplicate Node");
		printf("\n 13)Delete Duplicate in Sorted SLL");
		printf("\n 14)Check if linked list is sorted(increasily or decreasingly)");
		printf("\n 15)Sorting a List(decreasing order)");
		printf("\n 16)Sorting a List(increasing order)");
		printf("\n 17)Reverse a Linked List");
		printf("\n 18)Merge two Linked List");
		printf("\n 19)Union of Linked List");
		printf("\n=========================================================================================================\n");
	
	printf("\nEnter your choice : ");
	scanf(" %d",&choice);
	
	switch(choice)
	{
		case 1:
			HEAD=create();
			printf("\nSingly Linked List create Success!!");
			break;
			
		case 2:
			display(HEAD);
			break;
			
		case 3:
			printf("\nEnter the Data to insert : ");
			scanf("%d",&x);
			HEAD=insert_first(HEAD,x);
			break;
			
		case 4:
			printf("\nEnter the Data to insert : ");
			scanf(" %d",&x);
			HEAD=insert_last(HEAD,x);
			break;
			
		case 5:
			printf("\nEnter the position and data to insert : ");
			scanf("%d %d",&pos,&x);
			HEAD=insert_between(HEAD,pos,x);
			break;
			
		case 6:
			HEAD=delete_first(HEAD);
			break;
			
		case 7:
			HEAD=delete_last(HEAD);
			break;
			
		case 8:
			printf("\nEnter the position to delete : ");
			scanf("%d",&pos);
			HEAD=delete_between(HEAD,pos);
			break;
			
		case 9:
			count=count_nodes(HEAD);
			printf("\nTotal Nodes in this List : %d ",count);
			break;
			
		case 10:
			printf("\nEnter the data to search : ");
			scanf("%d",&x);
			count=search_data(HEAD,x);
			if(count)
			printf("\n %d data found at node : %d",x,count);
			else
			printf("\n%d data not found in linked list ",x);
			break;
		
		case 11:
			printf("\nEnter the node you want to update : ");
			scanf("%d",&x);
			if(!(update_node(HEAD,x)))
			printf("\nNode update Success!!");
			else
			printf("\nNode update failed");
			break;
			
		case 12:
			HEAD=delete_duplicate(HEAD);
			printf("\nDeleted Duplicate");
			break;
			
		case 13:
			HEAD=delete_duplicate_sorted(HEAD);
			printf("\nDelete Duplicate Success!!");
			break;
			
		case 14:
			if(check_sorted(HEAD))
			printf("\nLinked List is sorted!!");
			else
			printf("\nLinked List is not sorted!!");
			break;
			
		case 15:
			HEAD=sort_list(HEAD);
			printf("\nList Sorting Success!!");
			break;
			
		case 16:
			HEAD=sort_list_i(HEAD);
			printf("\nList Sorting Success !!");
			break;
			
		case 17:
			HEAD=reverse_list(HEAD);
			printf("\nLinked List Reverse Success !!");
			break;
			
		case 18:
			printf("\nAccept Linked List-1 : ");
			HEAD1=create();
			
			printf("\nAccept Linked List-2 : ");
			HEAD2=create();
			
			HEAD=merge_list(HEAD1,HEAD2);
			printf("\nLinked List Merged\n");
			display(HEAD);
			
			break;
			
		case 19:
			printf("\nAccept Linked List-1");
			HEAD1=create();
			
			printf("\nAccept Linked List-2");
			HEAD2=create();
			
			HEAD=union_list(HEAD1,HEAD2);
			printf("\nDisplay Union Linked List\n");
			
			display(HEAD);
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
	int x,n,pos;
	node *head=NULL,*p,*q;
	
	printf("\nEnter how many nodes you want? : ");
	scanf("%d",&n);
	
	head=cn();
	printf("\nEnter the data : ");
	scanf("%d",&x);
	head->data=x;
	head->next=NULL;
	
	p=head;
	int i=1;
	while(i<n)
	{
		q=cn();
		printf("\nEnter the data : ");
		scanf("%d",&x);
		q->data=x;
		q->next=NULL;
		p->next=q;
		
		p=p->next;
		i++;
	}
	
	return head;
}

void display(node *temp)
{
	if(temp==NULL)
	{
		printf("\nSSL is empty!!");
	}
	else
	{
		while(temp!=NULL)
		{
			printf("%d\t",temp->data);
			temp=temp->next;
		}
	}
}

node *insert_first(node *head,int x)
{
	node *p=cn();
	
	p->data=x;
	p->next=head;
	
	printf("\nNode Insert at first success!!");
	return p;
}

node *insert_last(node *head,int x)
{
	if(head==NULL) {
    node *q=cn();
    q->data=x;
    q->next=NULL;
    printf("\nInsert Last Success");
    return q;  
}
	node *p=head;
	while(p->next!=NULL)
	p=p->next;
	
	node *q;
	q=cn();
	q->data=x;
	q->next=NULL;
	
	p->next=q;
	
	printf("\nInsert Last Success");
	return head;
}

node *insert_between(node *head,int pos,int x)
{
	
	if(pos <= 1) {
    return insert_first(head, x);
}
	
	node *p,*q;
	p=head;
	
	int i=1;
	while(i<pos-1)
	{
		p=p->next;
		i++;
	}
	
	q=cn();
	q->data=x;
	q->next=p->next;
	p->next=q;
	
	printf("\nInsert at positon %d success !!!",pos);
	return head;
}

node *delete_first(node *head)
{
	if(head==NULL)
	{
		printf("\nDelete failed Linked List is Empty");
		return head;
	}
	
	node *p;
	p=head;
	
	head=p->next;
	free(p);
	
	p=NULL;
	printf("\nDelete first node Success!!");
	return head;
}

node *delete_last(node *head)
{
	if(head==NULL)
	{
		free(head);
		printf("\nDelete Failed Linked List is Empty");
		return head;
	}
	if(head->next==NULL)
	{
		printf("\nDelete Success !!");
		return head;
	}
	
	node *p=head;
	while(p->next->next!=NULL)
	p=p->next;
	
	free(p->next);
	p->next=NULL;
	
	printf("\nDelete Success for Last node");
	return head;
}

node *delete_between(node *head,int pos)
{
	node *p,*q;
	
	p=head;
	
	int i=1;
	while(i<pos-1)
	{
		p=p->next;
		i++;
	}
	q=p->next;
	p->next=q->next;
	free(q);
	q=NULL;
	printf("\nDelete at postion %d sucess !!",pos);
	return head;
}

int count_nodes(node *head)
{
	 node *p=head;
	 int count=0;
	 while(p!=NULL)
	 {
	 	p=p->next;
	 	count++;
	 }
	 return count ;
}

int search_data(node *head,int data)
{
	node *p;
	p=head;
	
	int count=0;
	
	while(p!=NULL)
	{
		count++;
		if(p->data==data)
		return count;
		
		p=p->next;
	}
	
	return 0;
}

int update_node(node *head,int x)
{
	
	if(x<=0)
	{
		printf("\nPosition entered is incorrect");
		return -1;
	}
	node *p;
	p=head;
	
	int i=0,d;
	while(i<x-1)
	{
		p=p->next;
		i++;
	}
			printf("\nEnter the data to update the node : ");
		scanf("%d",&d);
		p->data=d;
	return 0;
}

node *delete_duplicate(node *head)
{
	
	node *p,*q,*r;
	p=head;
	
	while(p!=NULL)
	{
		r=p;
		q=p->next;
		
		while(q!=NULL)
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
		p=p->next;
	}
	return head;
}

node *delete_duplicate_sorted(node *head)
{
	node *p=head;
	
	while(p->next!=NULL)
	{
		if(p->data==p->next->data)
		{
			node *temp=p->next;
			p->next=temp->next;
			free(temp);
		}
		else
		p=p->next;
	}
	return head;
}

int check_sorted(node *head)
{
	node *p=head;
	int order=0;
	while(p!=NULL&& p->next!=NULL)
	{
		if(p->data<p->next->data)
		{
			order=1;
			break;
		}
		else if(p->data>p->next->data)
		{
			order=-1;
			break;
		}
		p=p->next;
	}
	
	p=head;
	
	while(p!=NULL && p->next!=NULL)
	{
		if(order==1 && p->data>p->next->data)
		return 0;
		
		if(order==-1 && p->data<p->next->data)
		return 0;
		
		p=p->next;
	}
	
	return 1;	
}

node *sort_list(node *head)
{
	node *p=head;
	node *q;
	while(p->next!=NULL)
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

node *sort_list_i(node *head)
{
	node *p=head;
	node *q;
	while(p->next!=NULL)
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

node *reverse_list(node *head)
{
	node *p,*q,*r;
	
	p=NULL;
	r=NULL;
	q=head;
	while(q!=NULL)
	{
		r=q->next;
		q->next=p;
		p=q;
		q=r;
	}
	
	return p;
}

node *merge_list(node *head1,node *head2)
{
	node *head3=NULL,*p3,*q3;
	
	if(head1==NULL)
	return head2;
	
	if(head2==NULL)
	return head1;
	
	while(head1!=NULL)
	{
		if(head3==NULL)
		{
			head3=cn();
			head3->data=head1->data;
			head3->next=NULL;
			p3=head3;
		}
		else
		{
			q3=cn();
			q3->data=head1->data;
			q3->next=NULL;
			p3->next=q3;
			p3=p3->next;
		}
		head1=head1->next;
	}
	
	while(head2!=NULL)
	{
		q3=cn();
		q3->data=head2->data;
		q3->next=NULL;
		p3->next=q3;
		p3=p3->next;
		
		head2=head2->next;
	}
	
	return head3;
}

node *union_list(node *head1,node *head2)
{
	node *head3;
	
	node *h1=delete_duplicate(head1);
	node *h2=delete_duplicate(head2);
	
	head3=merge_list(h1,h2);
	head3=delete_duplicate(head3);
	return head3;
}


