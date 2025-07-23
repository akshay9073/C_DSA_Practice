#include<stdio.h>
int main()
{
	int rows,cols;
	printf("\nEnter rows and columns of matrix : ");
	scanf("%d%d",&rows,&cols);
	
	int mat[rows][cols];
	printf("\nEnter elements of matrix : ");
	for(int i=0;i<rows;i++)
	{
		for(int j=0;j<cols;j++)
		scanf("%d",&mat[i][j]);
	}
	
	printf("\nDisplay matrix elements : \n");
	for(int i=0;i<rows;i++)
	{
		for(int j=0;j<cols;j++)
		printf("%d\t",mat[i][j]);
		
		printf("\n");
	}
	
	return 0;
}
