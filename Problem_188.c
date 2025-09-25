#include<stdio.h>

typedef struct node{
	int data;
	struct node *next;
}node;

node *create(int);
int count_node(node *);
int last_k_node(node *,int);
node *cn()
{
	return (node *)malloc(sizeof(node));
}

int main()
{
	int num;
	printf("\nEnter how many nodes you want? ");
	scanf("%d",&num);
	node *head=create(num);
	
	int count=count_node(head);
	int k;
	printf("\nWhich element from last do you want ?");
	scanf(" %d",&k);
	int d=last_k_node(head,k);
	printf("\nData in %d node from last is %d",k,d);
	
	return 0;
}

node *create(int x)
{
	node *p=cn();
	printf("\nEnter data : ");
	scanf("%d",&p->data);
	p->next=NULL;
	node *head=p;
	
	int i=1;
	while(i<x)
	{
			node *q=cn();
		printf("\nEnter data : ");
		scanf("%d",&q->data);
		q->next=NULL;
		p->next=q;
		p=p->next;
		i++;
	}
	
	return head;	
}

int count_node(node *head)
{
	node *p=head;
	int count=0;
	while(p!=NULL)
	{
		count++;
		p=p->next;
	}
	
	return count;
}

int last_k_node(node *head,int k)
{

	int i=0;
	node *p=head;
	int count=count_node(head);
	while(i<(count-k))
	{
		p=p->next;
		i++;
	}
	
	return p->data;	
}
