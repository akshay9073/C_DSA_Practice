#include<stdio.h>
int main()
{
	int num;
	
	int armstrong=0;
	do
	{
		printf("\nEnter any number: ");
		scanf(" %d",&num);
		
		int temp=num;
	
		while(temp>0)
		{
			int rem=temp%10;

			armstrong+=(rem*rem*rem);
			temp/=10;
		}
			if(armstrong==num)
				printf("\n%d is armstrong number ",num);
			else
				printf("\n%d is not armstrong number ",num);
	}while(num!=-1);
	return 0;

}
