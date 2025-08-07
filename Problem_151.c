#include<stdio.h>
int main()
{
	char str[20];
	printf("\nEnter any string : ");
	scanf(" %[^\n]s",&str);
	
	int i=0,count=0;
	while(str[i]!='\0')
	{
		if(isspace(str[i]))
		count++;
		
		i++;
	}
	printf("\nString has %d spaces",count);
	return 0;
}
