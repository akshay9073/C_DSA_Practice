#include<stdio.h>
int main()
{
	char str[20];
	
	printf("\nEnter any String : ");
	scanf("%[^\n]",str);
	
	int i=0,count_alpha=0,count_number=0,count_special=0;
	while(str[i]!='\0')
	{
		if((str[i]>='A' && str[i]<='Z') || (str[i]>='a' && str[i]<='z'))
		{
			count_alpha++;
		}
		else if(str[i]>='0' && str[i]<='9')
		{
			count_number++;
		}
		else
		count_special++;
		
		i++;
	}
	
	printf("%s has \nAlphabet :%d \n Digit :%d \n Special Character :%d",str,count_alpha,count_number,count_special);
	return 0;
}
