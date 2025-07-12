#include<stdio.h>
int main()
{
	int rows, cols;
	
	printf("\nEnter number of rows and columns : ");
	scanf("%d %d",&rows,&cols);
	
	for(int i=0;i<rows;i++)
	{
		for(int i=0;i<cols;i++)
		{
			printf("%c",'*');
		}
		printf("\n");
	}
}
