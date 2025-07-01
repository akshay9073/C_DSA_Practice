#include<stdio.h>
int main()
{
	char ch;
	
	printf("\nEnter any albhapet(A-Z) :");
	scanf(" %c",&ch);
	int flag=0;
	
	switch(ch)
	{
		case 'a':
		case 'A':
				{
					flag=1;
					break;
				}
			
		case 'e':
		case 'E':
				{
					flag=1;
					break;
				}
				
		case 'i':
		case 'I':
				{
					flag=1;
					break;
				}
				
		case 'o':
		case 'O':
				{
					flag=1;
					break;
				}
				
		case 'u':
		case 'U':
				{
					flag=1;
					break;
				}
	}
				if(flag==1)
				printf("%c is vowel ",ch);
				else
				printf("%c is not vowel",ch);
				
				return 0;
}
