#include<stdio.h>
int main()
{
	int count=0,sum=0;
	
	for(int i=0;i<=200;i++)
	{
		if(i%2==0)
		{
			count++;
			sum+=i;
		}
	}
			printf("\nCount of even numbers is %d and there sum is %d",count,sum);
		return 0;
}
