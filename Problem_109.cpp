#include<stdio.h>
int main()
{
	int rows, cols;
	
	printf("\nEnter the rows and cols of Matrix : ");
	scanf("%d %d",&rows,&cols);
	
	int mat[rows][cols];
	
	for(int i=0;i<rows;i++)
	{
		for(int j=0;j<cols;j++)
		{
			if(i==j)
			mat[i][j]=0;
			else if(i>j)
			mat[i][j]=-1;
			else
			mat[i][j]=1;
		}
	}
	
	for(int i=0;i<rows;i++)
	{
		for(int j=0;j<cols;j++)
		printf("%d\t",mat[i][j]);
		
		printf("\n");
	}
	
	return 0;
}
