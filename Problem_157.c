#include<stdio.h>
int main()
{
	int rows ,cols;
	printf("\nEnter the rows and cols : ");
	scanf("%d %d",&rows,&cols);
	
	int mat[rows][cols];
	
	printf("\nEnter the elements of matrix (rowise and columnwise sorted) :");
	for(int i=0;i<rows;i++)
	{
		for(int j=0;j<cols;j++)
		scanf("%d",&mat[i][j]);
	}
	
	int x;
	printf("\nEnter the element for search : ");
	scanf("%d",&x);
	
	int i=0;int j=cols-1;
	
	while(i<rows && j>=0)
	{
		if(mat[i][j]==x)
		{
			printf("%d element found at index position i:%d & j:%d",x,i,j);
			return 0;
		}
		else if(mat[i][j]>x)
		j--;
		else
		i++;
	}
	printf("\nElement not found");
	
}
