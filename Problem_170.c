#include<stdio.h>
void accept_matrix(int r,int c,int [][c]);
void display_matrix(int r,int c,int [][c]);
int main()
{
	int mat[20][20],r,c;
	
	int choice;
	
	
	while(1)
	{
		printf("\n==========================================\n");
		printf("\n 1)Accept Matrix");
		printf("\n 2)Display Matrix");
		printf("\n===========================================\n");
		
		printf("\nEnter the choice : ");
	scanf("%d",&choice);
		
		switch(choice)
		{
			case 1:
				printf("\nEnter the rows and cols in Matrix : ");
				scanf("%d %d",&r,&c); 
				accept_matrix(r,c,mat);
				break;
				
			case 2:
				printf("\nDisplay Matrix\n");
				display_matrix(r,c,mat);
				break;
				
				
		}
	}
}

void accept_matrix(int r,int c,int mat[][c])
{
	printf("\nEnter the Matrix element : ");
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
			scanf("%d",&mat[i][j]);
		}
	}
}

void display_matrix(int r,int c,int mat[][c])
{
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		printf("%d\t",mat[i][j]);
		
		printf("\n");
	}
}
