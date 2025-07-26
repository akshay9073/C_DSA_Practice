#include<stdio.h>
int main()
{
	int rows,cols;
	printf("\nEnter the rows and columns : ");
	scanf("%d %d",&rows,&cols);
	
	int mat[rows][cols];
	printf("\nEnter elements of matrix ");
	for(int i=0;i<rows;i++)
	{
		for(int j=0;j<cols;j++)
		scanf("%d",&mat[i][j]);
	}
	
	int count=0;
	for(int i=0;i<rows;i++)
	{
		for(int j=0;j<cols;j++)
		{
			if(mat[i][j]==0)
			count++;
		}
	}
	if(count>(rows*cols)/2)
	printf("\nMatrix is Sparse Matrix");
	else
	printf("\nMatrix is Not Sparse Matrix");
	
	return 0;
}
