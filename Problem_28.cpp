#include<stdio.h>
int main()
{
	int row;
	printf("\nEnter number of rows in Right Half Pyramid : ");
	scanf("%d",&row);
	
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<=i;j++)
		{
			printf("*");
		}
		printf("\n");
	}
	
	return 0;
}
