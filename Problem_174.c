#include<stdio.h>

typedef struct node
{
	int data;
	struct node *next;
}node;

int main()
{
	int choice;
	
	printf("\n===========================================================\n");
	printf("\n 1)Create a SLL");
	printf("\n 2)Display a SLL");
	printf("\n===========================================================\n");
	
	printf("\nEnter your choice : ");
	scanf("%d",&choice);
	
	
	
}

node *cn()
{
	return (node *)malloc(sizeof(node));
}
