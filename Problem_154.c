#include<stdio.h>
int main()
{
	char str1[20],pat[20];
	printf("\nEnter any String : ");
	scanf("%[^\n]s",&str1);
	
	printf("\nEnter the pattern of string : ");
	scanf(" %[^\n]s",&pat);
	
	char *p=strstr(str1,pat);
	
	if(p)
	{
		printf("First occurance found at %ld ",p-str1);
	}
	else
	printf("String not found");
	
	return 0;
}
