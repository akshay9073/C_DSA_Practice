#include<stdio.h>
int main()
{
	int num;
	printf("\nEnter any number : ");
	scanf("%d",&num);
	
	int temp=num,rev=0;
	while(temp>0)
	{
		int rem=temp%10;
		rev=rev*10+rem;
		temp/=10;
	}
	printf("\n%d reverse number is : %d ",num,rev);
}
