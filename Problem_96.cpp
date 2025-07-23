#include<stdio.h>
int main()
{
	int rows,cols;
	printf("\nEnter rows and cols of the matrix : ");
	scanf("%d %d",&rows,&cols);
	
	int mat[rows][cols];
	
	printf("\nEnter the matrix elements : ");
	int sum=0,prod=1;
	for(int i=0;i<rows;i++)
	{
		for(int j=0;j<cols;j++)
		{
			scanf("%d",&mat[i][j]);
			sum+=mat[i][j];
			prod*=mat[i][j];
		}
	}
	
	printf("Sum of element is : %d",sum);
	printf("\nProduct of element is : %d",prod);
	return 0;
	
	
}
