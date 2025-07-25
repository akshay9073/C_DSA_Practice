#include<stdio.h>
int main()
{
	int rows,cols;
	printf("\nEnter rows and columns of square matrix : ");
	scanf("%d %d",&rows,&cols);
	int mat[rows][cols];
	
	printf("\nEnter Matrix Elements : ");
	for(int i=0;i<rows;i++)
	{
		for(int j=0;j<cols;j++)
		scanf("%d",&mat[i][j]);
	}
	
	int mat2[rows][cols];
	for(int i=0;i<rows;i++)
	{
		for(int j=0;j<cols;j++)
		{
			mat2[i][j]=mat[j][i];
		}
	}
	
	int flag=0;
	for(int i=0;i<rows;i++)
	{
		for(int j=0;j<cols;j++)
		{
			if(mat[i][j]!=mat2[i][j])
			{
				flag=1;
				break;
			}
		}
	}
	
	if(flag)
	printf("\nMatrix is Not Symmetric");
	else
	printf("\nMatrix is Symmetric ");
	return 0;
}
