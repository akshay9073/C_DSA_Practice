#include<stdio.h>
int main()
{
	int rows,cols;
	printf("\nEner the rows of columns : ");
	scanf("%d %d",&rows,&cols);
	
	int mat[rows][cols];
	printf("\nEnter the Elements of Matrix : ");
	for(int i=0;i<rows;i++)
	for(int j=0;j<cols;j++)
	scanf("%d",&mat[i][j]);
	
	printf("\n\nPrint Matrix in Snake Pattern\n\n");
	for(int i=1;i<=rows;i++){
		
		if(i%2!=0)
		{
			for(int j=0;j<cols;j++)
			{
				printf("%d\t",mat[i-1][j]);
			}
		}
		else
		{
			for(int	k=cols-1;k>=0;k--)
			printf("%d\t",mat[i-1][k]);
		}	
	}
}
