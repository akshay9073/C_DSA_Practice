#include<stdio.h>
int main()
{
	int rows,cols;
	printf("\nEnter the rows and cols : ");
	scanf("%d %d",&rows,&cols);
	
	int mat1[rows][cols];
	
	printf("\nEnter Matrix-1 Element : ");
	for(int i=0;i<rows;i++)
	for(int j=0;j<cols;j++)
	scanf("%d",&mat1[i][j]);
	
	
	
	int rows1,cols1;
	printf("\nEnter the rows and cols of Matrix-2 : ");
	scanf("%d %d",&rows1,&cols1);
	int mat2[rows1][cols1];
	
		printf("\nEnter Matrix-2 Element : ");
	for(int i=0;i<rows1;i++)
	for(int j=0;j<cols1;j++)
	scanf("%d",&mat2[i][j]);
	
	if(cols!=rows1)
	{
		printf("\nCannot perform Matrix Multiplication!!");
		return 0;
	}
	
	int mat3[rows][cols1];
	
	for(int i=0;i<rows;i++)
	{
		
		for(int j=0;j<cols1;j++)
		{
			mat3[i][j]=0;
			for(int k=0;k<cols;k++)
			{
				mat3[i][j]=mat3[i][j]+mat1[i][k]*mat2[k][j];
			}
		}
	}
	
	printf("\nMatrix Multiplication\n");
	for(int i=0;i<rows;i++)
	{
		for(int j=0;j<cols1;j++)
		printf("%d\t",mat3[i][j]);
		
		printf("\n");
	}
}
