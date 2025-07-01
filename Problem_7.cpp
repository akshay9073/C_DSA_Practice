#include<stdio.h>
int main()
{
	int m, n;
	
	printf("\nEnter any two integers : ");
	scanf(" %d %d",&m,&n);
	
	int sum=0;
	
	printf("\nSum of numbers from %d ",m);
	while(m<=n)
	{
		sum+=m;
		m++;
	}
	printf("to %d is : %d",n,sum);
	return 0;
}
