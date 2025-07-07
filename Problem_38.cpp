#include<stdio.h>
int sum_digits(int);
int main()
{
	int num;
	printf("\nEnter any number : ");
	scanf("%d",&num);
	
	
	int result=sum_digits(num);
	
	while(result>=0 && result>=9)
	result=sum_digits(result);
	
	
	printf("\n %d sum of digits is %d",num,result);
	
	
	return 0;	

	
}

int sum_digits(int temp)
{
	int sum=0;
	while(temp>0)
	{
		int rem=temp%10;
		sum+=rem;
		temp/=10;
	}
	return sum;
}
