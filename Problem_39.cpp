#include<stdio.h>
int main()
{
	int num;
	printf("\nEnter any Number : ");
	scanf("%d",&num);
	
	int temp=num,max=0;
	while(temp>0)
	{
		int rem=temp%10;
		if(rem>max)
		max=rem;
		temp/=10;
	}
	
	printf("\n%d has %d as max digit",num,max);
	
	return 0;
}
