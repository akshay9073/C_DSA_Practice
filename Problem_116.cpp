#include<stdio.h>
int main()
{
	char str[15];
	printf("\nEnter any string : ");
	scanf("%[^\n]",str);
	
	int i=0,count=0;
	while(str[i]!='\0')
	{
		count++;
		i++;
	}
	printf("\n%d",count);
}
