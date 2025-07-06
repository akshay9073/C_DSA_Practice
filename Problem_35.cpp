#include<stdio.h>
int main()
{
	int num;
	
	printf("\nEnter any number : ");
	scanf("%d",&num);
	
	int temp=num;
	int freq[10]={0};
	
	while(temp>0)
	{
		int rem=temp%10;
		freq[rem]++;
		temp/=10;
	}
	printf("\n\nFrequency of digits in %d : \n\n",num);
	for(int i=0;i<10;i++)
	{
		if(freq[i]>0)
		printf("%d frequency %d\n",i,freq[i]);
	}
	return 0;
}
