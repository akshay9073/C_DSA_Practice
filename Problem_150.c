#include<stdio.h>
int main()
{
	char str[20];
	printf("\nEnter any string : ");
	scanf("%[^\n]s",&str);
	
	int i=0;
	printf("\nString has punction\n");
	while(str[i]!='\0')
	{
		if(ispunct(str[i]))
		printf("%c\t",str[i]);
		i++;
	}
	return 0;
}
