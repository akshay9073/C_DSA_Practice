#include<stdio.h>
#include<math.h>

float area_of_triangle(float,float);
float area_of_triangle_herons(float,float,float);
int main()
{
	float base,height;
	float side1,side2,side3;
	
	printf("\nArea of triangle : ");
	
	printf("\n 1: Base and Height formula ");
	printf("\n 2: Heron's Formula");
	
	printf("\nEnter your choice ");
	int choice;
	scanf("%d",&choice);
	
	float result;
	switch(choice)
	{
		case 1:
			{
				printf("\nEnter base and height of triangle : ");
				scanf("%f %f",&base,&height);
				result=area_of_triangle(base,height);
				break;
			}
		case 2:
			{
				printf("\nEnter sides of triangle : ");
				scanf(" %f %f %f",&side1,&side2,&side3);
				result=area_of_triangle_herons(side1,side2,side3);
				break;
			}
	}
	printf("\nArea of triangle is : %f",result);
	return 0;
}

float area_of_triangle_herons(float s1,float s2,float s3)
{
		float s=(s1+s2+s3)/2.0;
		
		return (sqrt(s*(s-s1)*(s-s2)*(s-s3)));
		
}

float area_of_triangle(float b, float h)
{
	return 0.5*b*h;
}

