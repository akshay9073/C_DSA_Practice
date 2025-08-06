#include<stdio.h>
int main()
{
	char str1[10];
	printf("\nEnter the string  : ");
	scanf("%[^\n]s",&str1);
	char ch;
	printf("\nEnter the character : ");
	scanf(" %c",&ch);
	
	char *ptr=strchr(str1,ch);
	if(ptr!=NULL)
	{
		int index=ptr-str1;
		printf("\n%c character found at index %d",ch,index);
	}
	else
	printf("\n%c character not found",ch);
	
	return 0;
	
}
