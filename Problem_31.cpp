#include<stdio.h>
int main()
{
	int num;
	printf("\nEnter any number : ");
	scanf("%d",&num);
	
	printf("\n%d",num);	
	
	int count=0;
	while(num>0)
	{
		int rem=num%10;
		count++;
		num/=10;
	}
	
	printf(" has %d digits ",count);
	
	return 0;
}
