#include<stdio.h>
int main()
{
	int num;
	printf("\nEnter any number : ");
	scanf("%d",&num);
	
	printf("\nMultiplication Table of any Number\n");
	for(int i=1;i<=10;i++)
	printf("%d \t",i*num);
	
	return 0;
}
