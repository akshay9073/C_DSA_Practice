#include<stdio.h>
int main()
{
	char str[20];
	
	printf("\nEnter any String(lowercase) : ");
	scanf("%[^\n]",str);
	
	int i=0,len=0;
	
	while(str[i]!='\0')
	{
		i++;
		len++;
	}
	
	int k=0,j=len-1,flag=0;
	while(k<j)
	{
		if(str[k]!=str[j])
		{
			flag=1;
			break;
		}
		else
		k++;
		j--;
	}
	
	if(flag)
	printf("%s is not palindrome string",str);
	else
	printf("%s is palindrome",str);
	
	return 0;
}
