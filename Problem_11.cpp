#include<stdio.h>
int main()
{
	char str[20];
	int count=0;
	
	printf("\nEnter any string : ");
	scanf("%[^\n]s",&str);
	
	int i=0,flag=0;
	
	while(str[i]!='\0')
	{
		switch(str[i])
		{
			case 'a':
			case 'A':
					{
								count++;
						break;
					}
					
			case 'e':
			case 'E':
				{
							count++;
					break;
				}
			
			case 'i':
			case 'I':
				{
							count++;
					break;
				}
			
			case 'o':
			case 'O':
				{
							count++;
					break;
				}
			
			case 'u':
			case 'U':
				{
							count++;
					break;
				}
		}
		i++;
	}
	printf("\nCount of Vowels in %s is %d",str,count);
	return 0;	
}
