#include<stdio.h>
int main()
{
	int rows,cols;
	printf("\nEnter rows and cols : ");
	scanf("%d %d",&rows,&cols);
	
	for(int i=0;i<rows;i++)
	{
		for(int j=0;j<cols;j++)
		{
			if(i==(rows/2) && j==cols/2 && i==j)
			printf("%d",0);
			else
			printf("%d",1);
		}
		printf("\n");
	}
	return 0;
}
