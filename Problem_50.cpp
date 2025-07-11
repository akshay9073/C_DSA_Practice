#include<stdio.h>
int main(int argc, char *argv[])
{
	printf("Number of arguement passed is : %d ",argc);
	printf("\nName of the Program is : %s",argv[0]);
	
	printf("\nArguments enterd are : ");
	for(int i=1;i<argc;i++)
	printf("%s\t",argv[i]);
	
	return 0;
	
}
