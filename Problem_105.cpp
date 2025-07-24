#include<stdio.h>
int main()
{
	int rows,cols;
	printf("\nEnter the rows and cols of Matrix-1 : ");
	scanf("%d %d",&rows,&cols);
	
	int mat1[rows][cols];
	printf("\nEnter the Matrix-1 elements : ");
	for(int i=0;i<rows;i++)
	{
		for(int j=0;j<cols;j++)
		scanf("%d",&mat1[i][j]);
	}
	printf("\nEnter the Matrix-2 elements : ");
	int mat2[rows][cols];
	for(int i=0;i<rows;i++)
	{
		for(int j=0;j<cols;j++)
		scanf("%d",&mat2[i][j]);
	}
	
	printf("\n\nEquality of two Matrix\n\n");
	int flag=0;
	for(int i=0;i<rows;i++)
	{
		for(int j=0;j<cols;j++)
		if(mat1[i][j]!=mat2[i][j])
		{
			flag=1;
			break;
		}
	}
	
	if(!flag)
	printf("\nMatrix are equal");
	else
	printf("\nMatrix are not equal");	
}
