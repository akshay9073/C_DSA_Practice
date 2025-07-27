#include<stdio.h>
int main()
{
	char str[20];
	printf("\nEnter space seprated string : ");
	scanf("%[^\n]s",&str);
	
	printf("\n%s",str);
	
	getchar();
	
	char name[25];
	printf("\nEnter full name : ");
	fgets(name,sizeof(name),stdin);
	
	printf("\nUsing fgets : %s ",name);
	
	return 0;
}
