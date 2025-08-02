#include<stdio.h>
int main()
{
	char str[10];
	printf("\nEnter any integer : ");
	scanf("%s",&str);
	
	int result=string_to_integer(str);
	printf("\n String :%s is converted to %d integer\n",str,result);
	
	return 0;
}

int string_to_integer(char str[10])
{
	int i=0,num=0,sign;
	if(str[0]=='-')
	{
		sign=-1;
		i++;
	}
	
	while(str[i]!='\0')
	{
		
		num=(num*10)+(str[i]-48);
		i++;
	}
	if(sign!=-1)
	return num;
	else
	return (num*sign);
}
