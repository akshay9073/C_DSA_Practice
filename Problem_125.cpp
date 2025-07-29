#include<stdio.h>
int main()
{
	int a,b;
	int *p,*q;
	
	
	printf("\nEnter any two integers : ");
	scanf("%d %d",&a,&b);
	p=&a;q=&b;
	printf("\nBasic Arithmetic using pointers : ");
	printf("\nAdd : %d",*p + *q);
	printf("\nMultiply : %d",*p - *q);
	printf("\nSubstraction : %d",*p * *q);
	printf("\nDivision : %d",*p / *q);
	
	return 0;
}
