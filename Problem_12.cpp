#include<stdio.h>
int main()
{
	char add[100];
	printf("\nEnter your address [Building Name, Flat No, Street Name, City Name, Pin Code]:");
	scanf("%[^\n]s",add);
	
	printf("\nAddress on new line : \n");
	
	int i=0;
	while(add[i]!='\0')
	{
		if(add[i]!=',')
		{
			printf("%c",add[i]);
			i++;
		}
		else
		{
			printf("\n");
			i++;
		}
	}
	
	return 0;
	
}
