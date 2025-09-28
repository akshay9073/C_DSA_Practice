#include<stdio.h>

typedef struct node{
	char data;
	struct node *next;
}node;

node *top=NULL;
int is_empty();
void push(char);
char pop();
node *cn();

int main()
{
		char str[20];
		printf("\nEnter the string : ");
		scanf("%s",str);
		char ch;
		printf("\nEnter the character : ");
		scanf(" %c",&ch);
		int i=0,flag=1;
		while(str[i]!=ch)
		{
			push(str[i]);
			i++;
			flag=0;
		}
		push(str[i]);
		int j=i,k=0;
		if((!flag) || i==0 )
		{
			while(j>=0)
			{
				str[k++]=pop();
				j--;
			}
			printf("\nThe final result is :%s",str);
		}
		else
		{
			printf("%c not found!!",ch);
		}
		
		
}









node *cn()
{
	return (node*)malloc(sizeof(node));
}

int is_empty()
{
	if(top==NULL)
	return 1;
	else
	return 0;
}

void push(char x)
{
	node *p=cn();
	if(p==NULL)
	{
		printf("\nStack is FULL");
		exit(0);
	}
	else
	{
		p->data=x;
		p->next=top;
		top=p;
	}
}

char pop()
{
	if(is_empty())
	{
		printf("\nStack is empty!!");
		exit(0);
	}
	else
	{
		node *temp=top;
		char x=temp->data;
		top=temp->next;
		free(temp);
		return x;
	}
}
