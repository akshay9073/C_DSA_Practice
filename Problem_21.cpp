#include<stdio.h>
int main()
{
	int n;
	printf("\nEnter any number : ");
	scanf("%d",&n);
	
	float sum=0,avg=0;
	
	for(int i=0;i<=n ;i++)
	sum+=i;
	
	printf("\n Sum of first %d number is %f and average is %f",n,sum,sum/n);
	
	return 0;
	
}
