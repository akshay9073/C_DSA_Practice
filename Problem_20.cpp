#include<stdio.h>
int main()
{
	char ch;
	
	printf("\nEnter any character : ");
	scanf("%c",&ch);
	
	if(ch>=48 && ch<=57)
	printf("%c is number",ch);
	else
	{
		if(ch>='a'&&ch<='z')
		printf("%c is lowercase alphabet",ch);
		else if(ch>='A'&&ch<='Z')
		printf("%c is uppercase alphabet",ch);
		else
		printf("\n%c is Neither a Number nor a alphabet",ch);
	}
	return 0;	
}
