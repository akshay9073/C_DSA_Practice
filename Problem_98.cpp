#include<stdio.h>
int check_identity(int ,int,int [][5]);
int main()
{
	int rows,cols;
	printf("\nEnter the rows and cols : ");
	scanf("%d %d",&rows,&cols);
	
	int mat[rows][5];
	printf("\nEnter elements of Matrix : ");
	
	for(int i=0;i<rows;i++)
	for(int j=0;j<cols;j++)
	scanf("%d",&mat[i][j]);
	
	if(check_identity(rows,cols, mat))
	printf("\nMatrix is identitiy matrix !!");
	else
	printf("\nMatrix is not identity matrix !!");

	return 0;	
}

int check_identity(int rows,int cols,int mat[][5])
{

	for(int i=0;i<rows;i++)
	{
		for(int j=0;j<cols;j++)
		{
			if ((i == j && mat[i][j] != 1) || (i != j && mat[i][j] != 0))
                return 0;
		}
		return 1;
	}
}

