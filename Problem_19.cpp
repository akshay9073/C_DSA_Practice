#include<stdio.h>
int main()
{
	char ch;
	
	do
	{
		printf("\nEnter a Character : ");
		scanf(" %c",&ch);
		
		if(ch>='A' && ch<='Z')
		{
			printf("%c lower case is %c",ch,ch+32);
		}
		else if(ch>='a'&& ch<='z')
		{
			printf("%c upper case is %c",ch,ch-32);
		}
		
		if(ch!='*')
		printf("\n%c Character ASCII value is %d ",ch,ch);
	}while(ch !='*');
	
	return 0;
}
