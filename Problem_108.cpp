#include<stdio.h>
int main()
{
	int rows,cols;
	printf("\nEnter the rows and cols of the Matrix : ");
	scanf("%d %d",&rows,&cols);
	
	int mat[rows][cols];
	printf("\nEnter the Matrix Elements : ");
	
	for(int i=0;i<rows;i++)
	for(int j=0;j<cols;j++)
	scanf("%d",&mat[i][j]);
	
	printf("\nMajor Diagonal Elements : ");
	for(int i=0;i<rows;i++)
	{
		printf("%d\t",mat[i][i]);
	}
	
	printf("\nMinor Diagonal Elements : ");
	for(int i=0;i<rows;i++)
	{
		printf("%d\t",mat[i][cols-i-1]);
	}
	
}

