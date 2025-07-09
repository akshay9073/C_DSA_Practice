#include<stdio.h>
int reverse(int);
int main()
{
	int num;
	printf("\nEnter any number : ");
	scanf("%d",&num);
	
	int result=reverse(num);
	if(num == result)
	printf("\n%d is palindrome number ",num);
	else
	printf("\n%d is not palindrome number ",num);
	return 0;
}

int reverse(int num)
{
	int rev=0;
	while(num>0)
	{
		int rem=num%10;
		rev=rev*10 + rem;
		num/=10;	
	}
	return rev;
}
