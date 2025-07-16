#include<stdio.h>
int main()
{
	int n;
	printf("\nEnter number of rows : ");
	scanf("%d",&n);
	
	int k=n;

	for(int i=0;i<n;i++)
	{
		for(int j=0;j<=i;j++)
		{
			printf("%d",k);
		}
		k--;
		printf("\n");
	}
	return 0;
}
