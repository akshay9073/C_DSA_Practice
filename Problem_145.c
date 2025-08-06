#include<stdio.h>
int main()
{
	char str1[20];
	char str2[20];
	
	printf("\nEnter the String 1 : ");
	scanf("%[^\n]s",&str1);
	
	printf("\nEnter the String 2 : ");
	scanf(" %[^\n]s",&str2);
	
	printf("\nCompare two String");
	if(!strcmp(str1,str2))
	printf("\nStrings are same");
	else
	printf("\nStrings are not same");
}
