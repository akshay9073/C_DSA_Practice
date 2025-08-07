#include<stdio.h>
int main()
{
	char str[20];
	printf("\nEnter any String : ");
	scanf("%[^\n]s",&str);
	
	int i=0,countl=0,countu=0;
	while(str[i]!='\0')
	{
		if(islower(str[i]))
		countl++;
		else if(isupper(str[i]))
		countu++;
		
		i++;
	}
	
	printf("%s string has %d lower case letter and %d upper case letter ",str,countl,countu);
	
	return 0;
	
}
