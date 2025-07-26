#include<stdio.h>
int rows,cols;
void display(int,int cols,int [][3]);
int rotate_90(int,int cols,int [][3]);
int main()
{
	printf("\nEnter Number of rows and cols : ");
	scanf("%d %d",&rows,&cols);
	
	int mat[rows][3];
	printf("\nEnter the Matrix Elements : ");
	for(int i=0;i<rows;i++)
	for(int j=0;j<cols;j++)
	scanf("%d",&mat[i][j]);
	
	printf("\nMatrix \n");
	display(rows,cols,mat);
	
	
	
	printf("\nMatrix after Rotation\n");
	rotate_90(rows,cols,mat);
	
	return 0;
	
	
}

void display(int rows,int cols,int mat[][3])
{
	for(int i=0;i<rows;i++)
	{
		for(int j=0;j<cols;j++)
		printf("%d\t",mat[i][j]);
		
		printf("\n");
	}
}

int rotate_90(int rows,int cols,int mat[][3])
{
	
	for(int i=cols-1;i>=0;i--)
	{
		for(int j=0;j<rows;j++)
		printf("%d\t",mat[j][i]);
		
		printf("\n");
	}
	return 0;
}
