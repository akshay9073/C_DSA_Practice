#include<stdio.h>
int main()
{
	int rows,cols;
	printf("\nEnter rows and cols ");
	scanf("%d %d",&rows,&cols);
	
	if (rows != cols) {
        printf("X pattern only works properly in a square matrix. Please enter equal rows and columns.\n");
        return 1;
    }
	
	for(int i=0;i<rows;i++)
	{
		for(int j=0;j<cols;j++)
		{
			if(i==j  || (i+j)==rows-1)
			printf("*");
			else
			printf(" ");	
		}
		printf("\n");
	}
	return 0;
}
