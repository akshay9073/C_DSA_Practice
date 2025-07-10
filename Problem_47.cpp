#include<stdio.h>
struct employee
{
	int empid;
	char name[10];
	float salary;
};
int main()
{
	employee e[5];
	
	printf("\nEnter details of employee : ");
	for(int i=0;i<5;i++)
	{
		printf("\nEmployee id of employee %d , Name and Salary ",i+1);
		scanf("%d %s %f",&e[i].empid,&e[i].name,&e[i].salary);
	}
	
	printf("\nDisplay details of employee : ");
	for(int i=0;i<5;i++)
	{
		printf("\nEmployee id of employee %d , Name and Salary ",i+1);
		printf("\n%d \t%s \t%f",e[i].empid,e[i].name,e[i].salary);
	}
	
	return 0;
}
