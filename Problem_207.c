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
		printf("\n1)Insert data");
		printf("\")
		printf("\n==========================================================\n");
		
		printf("\nEnter your choice : ");
		scanf("%d",choice);
		
		
	}
}

int init(queue *q)
{
	q->f=q->r=-1;
}


