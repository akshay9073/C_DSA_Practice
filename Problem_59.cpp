#include<stdio.h>
int main()
{
	int rows,cols;
	printf("\nEnter number of rows and cols : ");
	scanf("%d %d",&rows,&cols);
	
	for(int i=0;i<rows;i++)
	{
		for(int j=0;j<cols;j++)
		{
			if(i==j || (i+j)==rows-1)
			printf("%d",1);
			else
			printf("%d",0);
		}
		printf("\n");
	}
	return 0;
}
