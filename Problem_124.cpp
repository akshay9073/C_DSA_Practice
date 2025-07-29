#include<stdio.h>
int main()
{
	char str[20];
	printf("\nEnter any string : ");
	scanf("%[^\n]",str);
	
	int i=0;
	while(str[i]!='\0')
	{
		if(str[i]==' ')
		{
			str[i]='*';
		}
		i++;
	}
	printf("\nThe new string is : %s",str);
}
