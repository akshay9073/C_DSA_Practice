#include<stdio.h>
int main()
{
	int rows, cols;
	
	printf("\nEnter the rows and columns of Matrix : ");
	scanf("%d %d",&rows,&cols);
	
	int mat[rows][cols];
	printf("\nEnter Matrix Elements : ");
	for(int i=0;i<rows;i++)
	for(int j=0;j<cols;j++)
	scanf("%d",&mat[i][j]);
	
	if(rows==1)
	for(int i=0;i<cols;i++)
	printf("%d\t",mat[0][i]);
	else if(cols==1)
	for(int i=0;i<rows;i++)
	printf("%d\t",mat[i][0]);
	else
	{
		for(int i=0;i<cols;i++)
		printf("%d\t",mat[0][i]);
		for(int i=1;i<rows;i++)
		printf("%d\t",mat[i][cols-1]);
		for(int i=cols-2;i>=0;i--)
		printf("%d\t",mat[rows-1][i]);
		for(int i=rows-2;i>0;i--)
		printf("%d\t",mat[i][0]);
	}
	return 0;
}
