#include<stdio.h>

typedef struct node
{
    struct node *prev;
    int data;
    struct node *next;
}node;

node *cn();
int main()
{
    node *HEAD=NULL; 

    int ch;
    while(1)
    {
        printf("\n=========Linked List==========\n");
		
        printf("\n==============================\n");

        printf("\nEnter Your Choice : ");
        scanf("%d",&ch);
	}
	
	
}
node* cn()
{
    return (node*)malloc(sizeof(node));
}

