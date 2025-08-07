#include<stdio.h>
int main()
{
	char str[10];
	printf("\nEnter any string : ");
	scanf(" %[^\n]s",&str);
	
	int i=0,flag=1;
	while(str[i]!='\0')
	{
		if(!isdigit(str[i]))
		{
			flag=0;
			break;
		}
		i++;
	}
	if(flag)
	printf("\nString entered has digits(0-9) only");
	else
	printf("\nString entered is not a numeric string");
	
	return 0;
}
