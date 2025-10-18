#include<stdio.h>
#include<stdlib.h>

#define MAX 100

typedef struct stack{
	int data[MAX];
	int top;
}stack;

typedef struct queue{
	int arr[MAX];
	int front,rear;
}queue;

int initQueue(queue *);
int initStack(stack *);
int isStackfull(stack *);
int isStackEmpty(stack *);
void push(stack *,int);
int pop(stack *);
int isQueuefull(queue *);
int isQueueempty(queue *);
void enqueue(queue *,int);
int dequeue(queue *);
void displayQueue(queue *);

int main()
{
	stack s;
	queue q;
	initQueue(&q);
	
	enqueue(&q,20);
	enqueue(&q,10);
	enqueue(&q,30);

	displayQueue(&q);
	
	printf("\nPop %d",dequeue(&q));
	printf("\nPop %d",dequeue(&q));
	printf("\nPop %d",dequeue(&q));
	
	displayQueue(&q);
	
	return 0;
}

int initQueue(queue *q)
{
	q->front=q->rear=-1;
}

int isQueuefull(queue *q)
{
	return (q->rear==MAX-1);
}

int isQueueempty(queue *q)
{
	return (q->front==-1);
}

void enqueue(queue *q,int data)
{
	if(isQueuefull(q))
	{
		printf("\nQueue is full!!");
		exit(0);
	}
	else if(q->front==-1)
	{
		q->front=0;
		
	}
		q->arr[++(q->rear)]=data;
}

int dequeue(queue *q)
{
	int data;
	if(isQueueempty(q))
	{
		printf("\nQueue is empty!!");
		exit(0);
	}
	data=q->arr[q->front];
	if(q->front==q->rear)
	initQueue(q);
	else
	q->front++;
	
	return data;
}

void displayQueue(queue *q)
{
	if(isQueueempty(q))
	{
		printf("\nQueue is Empty!!");
		exit(0);
	}
	printf("\nDisplay Queue\n");
	for(int i=q->front;i<=q->rear;i++)
	printf("%d\t",q->arr[i]);
}

int initStack(stack *s)
{
	s->top==-1;
}

int isStackfull(stack *s)
{
	return (s->top==MAX-1);
}

int isStackEmpty(stack *s)
{
	return (s->top==-1);
}

void push(stack *s,int data)
{
	if(isStackfull(s))
	{
		printf("\nStack is Full!!");
		exit(0);
	}
	else
	{
		s->data[++(s->top)]=data;
	}
}

int pop(stack *s)
{
	int data;
	if(isStackEmpty(s))
	{
		printf("\nStack is empty!!");
		exit(0);
	}
	else
	{
		data=s->data[(s->top)--];
	}
	return data;
}



