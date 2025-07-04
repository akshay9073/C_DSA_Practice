#include<stdio.h>
int main()
{
	int m,n;
	
	printf("\nEnter the range of numbers : ");
	scanf("%d %d",&m,&n);
	
	for(int i=m;i<=n;i++)
	{
		int flag=0;
		for(int j=2
		;j<i/2;j++)
		{
			if(i%j==0)
			{
				flag=1;
				break;
			}
		}
		if(flag==0)
		printf("%d\t",i);
	}
	
	return 0;
}
