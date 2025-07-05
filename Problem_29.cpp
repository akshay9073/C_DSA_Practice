#include<stdio.h>
int main()
{
	int num;
	printf("\nEnter any number : ");
	scanf("%d",&num);
	
	int fact=1;
	for(int i=num;i>0;i--)
	fact*=i;
	
	printf("\nFactorial of %d is : %d ",num,fact);
	return 0;
}
