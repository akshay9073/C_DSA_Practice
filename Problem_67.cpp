#include<stdio.h>
int main()
{
	int rows, cols;
	printf("\nEnter rows and cols  : ");
	scanf("%d %d",&rows,&cols);
	
	int k=1;
	for(int i=0;i<rows;i++)
	{
		
		for(int j=0;j<cols;j++)
		{
			printf("%d\t",k);
			k++;
		}
		printf("\n");
	}
	return 0;
}
