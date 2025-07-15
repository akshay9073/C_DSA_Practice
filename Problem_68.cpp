#include<stdio.h>
int main()
{
	int n;
	printf("\nEnter Number of Rows : ");
	scanf("%d",&n);
	
	for(int i=n;i>0;i--)
	{
		for(int j=0;j<i;j++)
		{
			printf("%d",i);
		}
		printf("\n");
	}
	return 0;
}
