#include<stdio.h>
int main()
{
	char str[15],rev[15];
	
	printf("\nEnter any string : ");
	scanf("%[^\n]",str);
	
	int i=0,len=0;
	
	while(str[i]!='\0')
	{
		len++;
		i++;
	}
	int j=len-1,k=0;
	while(j>=0)
	{
		rev[k]=str[j];
		j--;
		k++;
	}
	
	printf("\n%s reverse string is %s",str,rev);
	
	return 0;
}
