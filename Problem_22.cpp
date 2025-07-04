#include<stdio.h>
int main()
{
	int a,b;
	printf("\nEnter range of numbers : ");
	scanf("%d %d",&a,&b);
	
	for(int i=a;i<b;i++)
	{
		if(i%2!=0)
		printf("%d\t",i);
	}
	
	return 0;
}
