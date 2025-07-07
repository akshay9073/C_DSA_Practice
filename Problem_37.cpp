#include<stdio.h>
int main()
{
	int num;
	printf("\nEnter any Number : ");
	scanf("%d",&num);
	
	int temp=num,count=0;
	while(temp>0)
	{
		int rem=temp%10;
		if(rem==1)
		count++;
		temp/=10;
	}
	
	printf("\n%d has %d 1's",num,count);
	
	return 0;
}
