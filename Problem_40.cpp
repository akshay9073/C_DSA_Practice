#include<stdio.h>
int main()
{
	int num;
	printf("\nEnter any Number : ");
	scanf("%d",&num);
	
	int temp=num,product=1;
	while(temp>0)
	{
		int rem=temp%10;
		product*=rem;
		temp/=10;
	}
	
	printf("\n%d product of digit is %d ",num,product);
	
	return 0;
}
