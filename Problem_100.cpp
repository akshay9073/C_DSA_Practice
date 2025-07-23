#include<stdio.h>
int display(int [][5],int,int);
int main()
{
	int rows, cols;
	printf("\nEnter the rows and cols of matrix ");
	scanf("%d %d",&rows,&cols);
	
	int mat[rows][5];
	printf("\nEnter the elements of matrix : ");
	
	for(int i=0;i<rows;i++)
	{
		for(int j=0;j<cols;j++)
		scanf("%d",&mat[i][j]);
	}
	printf("\n****Display matrix before transpose******\n");
	display(mat,rows,cols);
	
	for(int i=0;i<rows;i++)
	{
		for(int j=i+1;j<cols;j++)
		{
			
			{
				int temp=mat[i][j];
				mat[i][j]=mat[j][i];
				mat[j][i]=temp;
			}
		}
	}
	printf("\n****Display matrix after transpose******\n");
	display(mat,rows,cols);
	
	return 0;
}

int display(int mat[][5],int rows,int cols)
{
	for(int i=0;i<rows;i++)
	{
		for(int j=0;j<cols;j++)
		{
			printf("%d\t",mat[i][j]);
		}
		printf("\n");
	}
	return 0;
}
