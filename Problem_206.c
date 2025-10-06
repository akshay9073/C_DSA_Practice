#include<stdio.h>

#deinfe MAX 100

typedef struct queue{
	int data[MAX];
	int f,r;
}queue;

void init(queue *);
int is_full(queue *);
int is_empty(queue *);

int main()
{
	int choice;
	queue q;
	init(&q)
	while(1)
	{
		printf("\n=============================================\n");
		printf("1)Check Queue is Full");
		printf("\n=============================================\n");	
		
		printf("\nEnter your Choice : ");
		scanf("%d",&choice);
		
		swithc(choice)
		{
			
			
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
