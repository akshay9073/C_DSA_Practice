#include<stdio.h>
int main()
{
	char str1[20],pat[20];
	
	printf("\nEnter the string : ");
	scanf("%[^\n]s",&str1);
	
	printf("\nEnter the substring : ");
	scanf(" %[^\n]s",pat);
	
	char *p=strstr(str1,pat);
	
	if(p==NULL)
	printf("\nSubstring not found!!");
	
	while(p)
	{
		printf("\n%s substring found at %ld",pat,p-str1);
		p=strstr(p+1,pat);
	}
	return 0;
}
