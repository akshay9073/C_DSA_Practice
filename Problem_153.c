#include<stdio.h>
int main()
{
	char str1[25],str2[25];
	
	printf("\nEnter any string : ");
	scanf("%[^\n]s",&str1);
	
	printf("\nEnter second string : ");
	scanf(" %[^\n]s",&str2);
	
	
	printf("\nCheck prefix string :");
	int i=0,len=0;
	while(str2[i]!=' ')
	{
		len++;
		i++;
	}
	printf("\n\n%d",len);
	if(strncmp(str1,str2,len)==0)
	printf("\n%s string is prefix in %s",str2,str1);
	else
	printf("\n%s string is not prefix in %s",str2,str1);
	
	return 0;
	
}
