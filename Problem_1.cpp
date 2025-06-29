#include<stdio.h>
int main()
{
	float radius;
	double area;
	
	printf("\nEnter radius of the circle : ");
	scanf("%f",&radius);
	
	area=3.14*radius*radius;
	
	printf("\nArea of circle is : %.2lf",area);
	return 0;
}
