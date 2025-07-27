#include<stdio.h>
int main()
{
	char str[100];
	printf("\nEnter any String ");
	scanf("%[^\n]",str);
	
	int i=0,count=0,inword=0;
	while(str[i]!='\0')
	{
		if(str[i]!=' ' && inword==0)
		{
			inword=1;
			count++;
		}
		else if(str[i]==' ')
		{
			inword=0;
		}
		
		i++;
	}
	printf("%s has %d words ",str,count);
	return 0;
}
