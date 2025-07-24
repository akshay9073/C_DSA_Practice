#include<stdio.h>
int main()
{
	int rows,cols;
	printf("\nEnter Number of rows and columns : ");
	scanf("%d %d",&rows,&cols);
	
	if(rows!=cols)
	{
		printf("\nEnter only square matrix ");
		return 0;
	}
	int mat[rows][cols];
	
	printf("\nEnter matrix elements : ");
	for(int i=0;i<rows;i++)
	{
		for(int j=0;j<cols;j++)
		scanf("%d",&mat[i][j]);
	}
	
	int flag=0;
	for(int i=0;i<rows;i++)
	{
		for(int j=i+1;j<cols;j++)
		{
			if(mat[i][j]!=0)
			{
				flag=1;
				break;
			}3
			3
		}
	}
	
	if(flag)
	{
		printf("\nMatrix is not Lower diagonal matrix");
	}
	else
	printf("\nMatrix is Lower diagonal matrix");
}
