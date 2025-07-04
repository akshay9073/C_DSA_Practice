#include<stdio.h>
int main()
{
	int a,b;
	
	printf("\nEnter any two numbers : ");
	scanf("%d %d",&a,&b);
	
	printf("\nBefore swap a : %d & b : %d",a,b);
	
	b=b+a;
	a=b-a;
	b=b-a;
	
	printf("\nAfter swap a : %d & b: %d",a,b);
	
	return 0;
}
