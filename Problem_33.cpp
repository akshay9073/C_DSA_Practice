#include<stdio.h>
int main()
{
	int base , power;
	printf("\nEnter base and power : ");
	scanf("%d %d",&base,&power);
	
	int result=1;
	for(int i=1;i<=power;i++)
	result*=base;
	
	printf("%d power of %d is : %d",base,power,result);
	
	return 0;
}
