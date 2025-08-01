#include<stdio.h>
int main()
{
	FILE *fp;
	char ch;
	
	fp=fopen("Practice.txt","r");
	
	if(fp==NULL)
	printf("\n Error File doesn't exist");
	else
	printf("\nFile found");
	return 0;
	
}
