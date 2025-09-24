#include<stdio.h>
#include<stdlib.h>

typedef struct node{
	char text;
	struct node *next;
}node;

node *cn()
{
	return (node *)malloc(sizeof(node));
}
int is_empty();
void push(char);
char pop();

node *top=NULL;
int main()
{
	
		char ch;
		while((ch=getchar())!='\n')
		{
			switch(ch)
			{
				case'(':
					push(ch);
					break;
				case')':
					{
						if(!is_empty())
						{
							pop();
						}
						else
						{
							printf("\nMismatch!!");
							exit(0);
						}
						break;
					}
			}
		}
		
		if(is_empty())
		printf("\nWell formed parantehese");
		else
		printf("\nMismatch");
		
		return 0;
}

int is_empty()
{
	if(top==NULL)
	return 1;
	else
	return 0;
}

void push(char ch)
{
	node *p=cn();
	if(p==NULL)
	{
		printf("\nStack overflow cannot push!!");
		return 0;
	}
	else
	{
		
		p->text=ch;
		p->next=top;
		top=p;
	}
}

char pop()
{
	if(is_empty())
	{
		printf("\nCannot pop stack is empty!!");
		exit(0);
	}
	node *temp=top;
	char x=top->text;
	top=temp->next;
	free(temp);
	return x;
}
