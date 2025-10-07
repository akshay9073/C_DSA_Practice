#include<stdio.h>
#include<stdlib.h>

#define MAX 100

typedef struct queue{
	int data[MAX];
	int f,r;
}queue;

void init(queue *);
int is_full(queue *);
int is_empty(queue *);
void insert(queue *,int);
int delete_queue(queue *);

int main()
{
	int choice;
	queue q;
	int x;
	
	init(&q);
	while(1)
	{
		printf("\n=============================================\n");
		printf("\n1)Check Queue is Full");
		printf("\n2)Check Queue is Empty");
		printf("\n3)Insert Queue ");
		printf("\n4)Delete Queue");
		printf("\n5)Print Elements");
		printf("\n6)Exit");
		printf("\n=============================================\n");	
		
		printf("\nEnter your Choice : ");
		scanf("%d",&choice);
		
		switch(choice)
		{
			case 1:
				if(is_full(&q))
				printf("\nQueue is Full!!");
				else
				printf("\nQueue is not Full!!");
				break;
				
			case 2:
				if(is_empty(&q))
				printf("\nQueue is emtpy");
				else
				printf("\nQueue is not empty");
				break;
				
			case 3:
					printf("\nEnter the data : ");
					scanf("%d",&x);
					
					insert(&q,x);
					break;
			case 4:
				x=delete_queue(&q);
				printf("\n%d deleted from queue",x);
				break;
				
			case 5:
				printf("\nQueue Elements are : ");
				print(&q);
				break;
				
			case 6:
				printf("\nExiting Program...");
				exit(0);
				break;
		}
	}	
	
}

void init(queue *q)
{
	q->f=q->r=-1;
}


int is_full(queue *q)
{
	if(q->r==MAX-1)
	return 1;
	else
	return 0;
}

int is_empty(queue *q)
{
	if(q->f==-1 || q->r==-1)
	return 1;
	else
	return 0;
}

void insert(queue *q,int x)
{
	if(is_full(q))
	{
		printf("\nQueue is Full!!");
		exit(0);
	}
	else
	{
		if(is_empty(q))
		{
			q->f=q->r=0;
			q->data[0]=x;
		}
		else
		{
			q->r+=1;
			q->data[q->r]=x;
		}
		printf("%d inserted in queue",x);
	}
}

int delete_queue(queue *q)
{
	int delete_value=q->data[q->f];
	if(is_empty(q))
	{
		printf("\nQueue is Empty cannot delete!!");
		exit(0);
	}
	else
	{
		if(q->f==q->r)
		{
			q->f=q->r=-1;
		}
		else
		{
			q->f+=1;
		}
	}
	
	return delete_value;
}

void print(queue q)
{
	for(int i=q.f;i<=q.r;i++)
	printf("%d\t",q.data[i]);
	
	
}
