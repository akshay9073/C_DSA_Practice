#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#define MAX 10

typedef struct queue{
	int data[MAX];
	int f,r;
}queue;

int init(queue *);
bool is_full(queue *);
bool is_empty(queue *);
int insert(queue *,int);

int main()
{
	int choice;
	queue q;
	init(&q);
	int x;
	
	while(1)
	{
		printf("\n==========================================================\n");
		printf("\n1)Is empty");
		printf("\n2)Is Full");
		printf("\n3)Insert in Queue");
		printf("\n==========================================================\n");
		
		printf("\nEnter your choice : ");
		scanf(" %d",&choice);
		
		switch(choice)
		{
			case 2:
				printf("\nCheck queueu is full");
				if(is_full(&q))
				{
					printf("\nQueue is full!!");
				}
				else
				printf("\nQueue is not full");
				break;
				
			case 1:
				printf("\nCheck queue is empty");
				if(is_empty(&q))
				printf("\nQueue is empty!!");
				else
				printf("\nQueue is not empty!!");
				break;
				
			case 3:
				printf("\nEnter the data : ");
				scanf("%d",&x);
				insert(&q,x);
				break;
				
		}
		
	}
}

int init(queue *q)
{
	q->f=q->r=-1;
}

bool is_empty(queue *q)
{
	return (q->f==-1);
}

bool is_full(queue *q)
{
	return ((q->r+1)%MAX==q->f);
}

int insert(queue *q,int x)
{
	if(is_full(q))
	printf("\nQueue is full!!");
	else
	{
		if(is_empty(q))
		q->f=q->r=0;
		else
		q->r=(q->r+1)%MAX;
		q->data[q->r]=x;
		
		printf("\nElement is inserted in Queue %d",x);
	}
	
}
