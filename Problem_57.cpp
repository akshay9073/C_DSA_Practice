#include<stdio.h>
int main()
{
	int rows, cols;
	printf("\nEnter rows and columns :");
	scanf("%d %d",&rows,&cols);
	
	for(int i=0;i<rows;i++)
	{
		for(int j=0;j<cols;j++)
		{
			if((i==0 || i== rows-1) || (j==0 || j==cols-1))
				printf("%d",1);
			else
			printf("%d",0);
		}
		printf("\n");
	}
}
