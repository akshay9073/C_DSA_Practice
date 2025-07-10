#include<stdio.h>
struct student
{
	int id ;
	float marks;
	struct {
		char fname[10];
		char mname[10];
		char lname[10];
	}name;

};

int main()
{
	struct student s1;
	printf("\nEnter data of student 1 [ID, Full Name, Marks] : ");
	scanf("%d %s %s %s %f",&s1.id,&s1.name.fname,&s1.name.mname,&s1.name.lname,&s1.marks);	
	
	printf("\nDisplay data of student 1 [ID, Full Name, Marks] : ");
	printf("%d %s %s %s %f",s1.id,s1.name.fname,s1.name.mname,s1.name.lname,s1.marks);
}
