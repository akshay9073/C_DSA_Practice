#include<stdio.h>
int main()
{
	int n;
	
	int flag=0;
	printf("\n Enter any integer : ");
	
	scanf("%d",&n);
	
	for(int i=2;i<n/2;i++)
	{
		if(n%i==0)
		{
			flag=1;
			break;
		}
	}
	
	if(flag==1)
	printf("%d is not a prime number ",n);
	else
	printf("%d is prime number ",n);
	
	return 0;
}
