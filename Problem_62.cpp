#include<stdio.h>
int main()
{
	int rows ,cols;
	printf("\nEnter rows and cols : ");
	scanf("%d %d",&rows,&cols);
	
	for(int i=1;i<=rows;i++)
	{
		for(int j=1;j<=cols;j++)
		{
			if((i+j)%2==0)
			printf("%d",1);
			else
			printf("%d",0);
		}
		printf("\n");
	}
	return 0;
}
