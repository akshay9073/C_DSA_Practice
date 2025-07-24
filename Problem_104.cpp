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
	
	int mat3[rows][cols];
	printf("\n\nAddition of two matrix\n\n");
	for(int i=0;i<rows;i++)
	{
		for(int j=0;j<cols;j++)
		mat3[i][j]=mat1[i][j]-mat2[i][j];
	}
	
	for(int i=0;i<rows;i++)
	{
		for(int j=0;j<cols;j++)
		{
			printf("%d\t",mat3[i][j]);
		}
		printf("\n");
	}
	
}
