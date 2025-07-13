#include<stdio.h>
int main()
{
	int rows,cols;
	printf("\nEnter number of rows and cols : ");
	scanf("%d %d",&rows,&cols);
	
	for(int i=1;i<=rows;i++)
	{
		int k=i;
		for(int j=0;j<cols;j++)
		{
			printf("%d",k);
			k++;
		}
		printf("\n");
	}
}
