#include<stdio.h>
int main()
{
	int n;
	printf("\nEnter Number of Rows : ");
	scanf("%d",&n);
	
	for(int i=1;i<=n;i++)
	{
		for(int j=i;j<=n;j++)
		{
			printf("%d",i);
		}
		printf("\n");
	}
	return 0;
}
