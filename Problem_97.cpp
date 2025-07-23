#include<stdio.h>
int main()
{
	int rows,cols;
	printf("Enter rows and cols of matrix : ");
	scanf("%d %d",&rows,&cols);
	
	int mat[rows][cols];
	printf("\nEnter the elements of matrix : ");
	for(int i=0;i<rows;i++)
	{
		for(int j=0;j<cols;j++)
		scanf("%d",&mat[i][j]);
	}
	
	printf("\n Diagonal elements and anti diagonal elements : ");
	for(int i=0;i<rows;i++)
	{
		for(int j=0;j<cols;j++)
		{
			if(i==j || i+j==rows-1)
			printf("%d\t",mat[i][j]);
		}
	}
	
	return 0;
	
}
