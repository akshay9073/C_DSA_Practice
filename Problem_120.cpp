#include<stdio.h>
int main()
{
	char str[15];
	
	printf("\nEnter any String : ");
	scanf("%[^\n]",str);
	
	int i=0,len=0;
	
	while(str[i]!='\0')
	{
		len++;
		i++;
	}

	printf("%s ",str);
	int k=0,j=len-1;
	while(k<j)
	{
		char temp=str[k];
		str[k]=str[j];
		str[j]=temp;
		k++;
		j--;
	}

	
	printf("String reverse is %s",str);
}
