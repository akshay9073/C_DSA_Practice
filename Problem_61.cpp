#include<stdio.h>
int main()
{
	int n;
	printf("\nEnter value of N for Floyd Triangle : ");
	scanf("%d",&n);
	
	int k=1;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<=i;j++)
		{
			printf("%d\t",k);
			k++;
		}
		printf("\n");
	}
	return 0;
}
