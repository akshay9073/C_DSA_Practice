#include<stdio.h>
struct student
	{
		char name[10];
		int id;
		float marks;
	};
int main()
{
	student s1,s2;
	
	printf("\nEnter data for student 1 (Name, ID, Marks) : ");
	scanf("%s %d %f",&s1.name,&s1.id,&s1.marks);
	
	printf("\nEnter data for student 2 (Name, ID, Marks) : ");
	scanf("%s %d %f",&s2.name,&s2.id,&s2.marks);
	
	printf("\nDisplay Student data 1: Name : %s, ID : %d , Marks :%f",s1.name,s1.id,s1.marks);
    printf("\nDisplay Student data 2: Name : %s, ID : %d , Marks :%f",s2.name,s2.id,s2.marks);
	
	return 0; 	
	
}
