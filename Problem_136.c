#include<stdio.h>
#include<string.h>
int main()
{
	char str1[10],str2[10];
	
	printf("\nEnter any string1 : ");
	scanf(" %[^\n]",&str1);
	
	printf("\nEnter any string2 : ");
	scanf(" %[^\n]",&str2);
	
	printf("\nCompare two String : ");
	
	if(strlen(str1)!=strlen(str2))
	{
		printf("\n Strings are not equal in length");
		return 0;
	}
	
	int i=0;
	while(str1[i]!='\0' && str2[i]!='\0')
	{
		if(str1[i]!=str2[i])
		{
			printf("String are not same");
			return 0;
		}
		i++;
	}
	printf("\n Strings are same");
	
}
