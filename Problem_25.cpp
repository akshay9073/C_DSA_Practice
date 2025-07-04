#include<stdio.h>
float add_float(float *,float *);
int main()
{
	float a,b;
	printf("\nEnter two floating numbers ");
	scanf("%f %f",&a,&b);
	
	printf("\n%f + %f = %f",a,b,add_float(&a,&b));
	
	return 0;
}

float add_float(float *a,float *b)
{
	return (*a+*b);
}
