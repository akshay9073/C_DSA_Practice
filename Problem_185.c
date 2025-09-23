#include<stdio.h>
#include<stdlib.h>

typedef struct node{
	char ch;
	struct node *next;
}node;

node *top=NULL;
node *cn()
{
	return (node *)malloc(sizeof(node));
}

int main()
{
	while(1)
	{
		printf("\n==============================================\n");
		printf("\n1)")
		printf("\n==============================================\n");
	}
	int choice;
	printf("\nEnter your choice : ");
	scanf("%d",&choice);
	
	switch(choice)
	{
		case 1:
			
	}
	
	return 0;
}

int push()
