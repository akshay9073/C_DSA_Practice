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
	
	int dsum1=0,dsum2=0;
	for(int i=0;i<rows;i++)
	{
		dsum1+=mat[i][i];
		dsum2+=mat[i][rows-i-1];
	}
	if(dsum1!=dsum2)
	{
		printf("\nMatrix is not magic matrix (diagonal sum is not equal)");
		return 0;
	}
	
	for(int i=0;i<rows;i++)
	{
		int rsum=0,csum=0;
		for(int j=0;j<cols;j++)
		{
			rsum+=mat[i][j];
			csum+=mat[j][i];
		}
			if(rsum!=dsum1 && csum!=dsum1)
			{
				printf("\nMatrix is not magic matrix sum is not equal");
				return 0;			
			}
	}
	
	
	printf("\nMatrix is Magic Matrix");
	return 0;
}
