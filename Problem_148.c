#include<stdio.h>
int main()
{
	char str1[15];
	printf("\nEnter the String : ");
	scanf("%[^\n]s",&str1);
	
	int i=0,flag=1;
	while(str1[i]!='\0')
	{
		if(!isalnum(str1[i]))
		{
			flag=0;
		break;
		}
		i++;		
	}
	
	if(flag)
	printf("\nString is Alphanumeric");
	else
	printf("\nString is Not Alphanumeric");
	return 0;
}
