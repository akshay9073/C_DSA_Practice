#include<stdio.h>
int main()
{
	double value;
	
	printf("Enter a double value : ");
	scanf("%lf",&value);
	
	printf("\n Value up to 2 decimal places : %.2e",value);
	printf("\n Value up to 4 decimal places : %.4e",value);
	printf("\n Value up to 8 decimal places : %.8e",value);
	
	return 0;
}
