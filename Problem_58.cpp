#include<stdio.h>
int main()
{
	int rows , cols;
	printf("\nEnter the values of rows and cols :");
	scanf("%d %d",&rows,&cols);
	

	for(int i=0;i<rows;i++)
	{
		for(int j=0;j<cols;j++)
		{
			if(i==rows/2 || j==cols/2)
			printf("%d",0);
			else
			printf("%d",1);
		}
		printf("\n");
	}
	
	return 0;
}
