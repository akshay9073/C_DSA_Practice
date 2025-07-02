#include<stdio.h>
int main()
{
	float base;
	const float hra=10,ta=5;
	float salary;
	
	printf("\nEnter basic pay of employee : ");
	scanf("%f",&base);
	
	salary=base+(base*(hra/100))+(base*(ta/100));
	
	printf("\nTotal Salary is : %f",salary);
	
	return 0;
}
