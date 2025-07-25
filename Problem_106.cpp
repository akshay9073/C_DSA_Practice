#include<stdio.h>
int main()
{
	int rows,cols;
	printf("\nEnter the rows and cols : ");
	scanf("%d %d",&rows,&cols);
	
	int mat[rows][cols];
	printf("\nEnter the elements of Matrix : ");
	for(int i=0;i<rows;i++)
	{
		for(int j=0;j<cols;j++)
		scanf("%d",&mat[i][j]);
	}
	
	int count=0;
	for(int i=0;i<rows;i++)
	{
		for(int j=0;j<cols;j++)
		{
			if(mat[i][j]!=0)
			count++;
		}
	}
	
	printf("\n%d Non Zero Elements in array : ",count);
	return 0;
}
