#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(int argc, char *argv[])
{
	printf("\nCalculate basic arithmetic operations : ");
	
	char *operation=argv[1];
	
	int a=atoi(argv[2]);
	int b=atoi(argv[3]);
	
	if(strcmp(operation,"add")==0)
	printf("\n Result :%d ",a+b);
	else if(strcmp(operation,"sub")==0)
	printf("\n Result :%d ",a-b);
	else if(strcmp(operation,"mul")==0)
	printf("\n Result :%d ",a*b);
	else if(strcmp(operation,"div")==0)
	{
		if(b==0)
		printf("Error divide by zero");
		else
		printf("\n Result : %d",a/b);	
	}
	else if(strcmp(operation,"mod")==0)
	printf("\n Result :%d ",a%b);
	else
	printf("\nUnkonwn operation %s ",operation);
	
	return 0;	
	
}
