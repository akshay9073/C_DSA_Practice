#include<stdio.h>
#define MAX 10

typedef struct queue{
	int data[MAX];
	int f,r;
}queue;

int init(queue *);



int main()
{
	int choice;
	queue q;
	init(&q);
	while(1)
	{
		printf("\n==========================================================\n");
		printf("\n1)Is empty");
		printf("\n2)Is Full");
		printf("\n==========================================================\n");
		
		printf("\nEnter your choice : ");
		scanf("%d",choice);
		
		
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
	if((q->r+1)%MAX==q->f)
	return true;
	else
	return false;
}
