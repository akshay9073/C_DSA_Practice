#include<stdio.h>
int main()
{
	int rows,cols;
	printf("\nEnter rows and columns of Matrix : ");
	scanf("%d %d",&rows,&cols);
	
	
	if(rows!=cols)
	{
		printf("\nMatrix is not square matrix enter a square matrix!!");
		return 0;
	}
	int mat[rows][cols];
	printf("\nEnter the matrix elements : ");
	for(int i=0;i<rows;i++)
	for(int j=0;j<cols;j++)
	scanf("%d",&mat[i][j]);
	
	
	printf("\nChecking for Identity Matrix");
	for(int i=0;i<rows;i++)
	{
		for(int j=0;j<cols;j++)
		{
			if(i!=j && mat[i][j]!=0)
			{
				printf("\nNot an Identity Matrix !!");
				return 0;
			}
		}
		if(mat[i][i]!=1)
		{
			printf("\nNot an Identity Matrix !!");
		}
	}
	
	printf("\nIdentity Matrix!!!");
	return 0;
	
}
	
	

