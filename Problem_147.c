#include<stdio.h>
int main()
{
	char str1[20];
	char str2[20];
	
	printf("\nEnter any string : ");
	scanf("%[^\n]s",&str1);
	
	printf("\nEnter a substring to find : ");
	scanf(" %[^\n]s",&str2);
	
	char *ptr=strstr(str1,str2);
	
	if(ptr!=NULL)
	{
		int index=ptr-str1;
		printf("\n%s substring found at index %d",str2,index);
	}
	else
		printf("\n%s substring not found",str2);
}
