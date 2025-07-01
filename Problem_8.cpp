#include<stdio.h>
int main()
{
	int n, sum=0;
	
	float avg=0.0;
	
	printf("\nEnter any integer : ");
	scanf("%d",&n);
	int i=n;
	do
	{
		sum+=i;
		i--;
	}while(i>=0);
	
	avg=(float)sum/n;
	
	printf("Average of first %d number is : %.2f ",n,avg);
	return 0;
}
