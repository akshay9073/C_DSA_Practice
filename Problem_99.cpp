#include<stdio.h>
int main()
{
	int rows,cols;
	
	printf("\nEnter the rows and cols : ");
	scanf("%d %d",&rows,&cols);
	
	int mat[rows][cols];
	printf("\nEnter the Matrix elements : ");
	
	for(int i=0;i<rows;i++)
	{
		for(int j=0;j<cols;j++)
		scanf("%d",&mat[i][j]);
	}
	
	for(int i=0;i<rows;i++)
	{
		int rsum=0,csum=0;
		for(int j=0;j<cols;j++)
		{
			rsum+=mat[i][j];
			csum+=mat[j][i];
		}
		
		printf("%d Row sum : %d && %d column sum is : %d \n",i,rsum,i,csum);
	}
	
	return 0;
	
}
