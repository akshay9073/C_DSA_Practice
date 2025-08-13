#include<stdio.h>
float string_to_float(char []);
int string_to_int(char []);
int main()
{
	char str[20];
	
	printf("\nEnter the floating number : ");
	scanf("%s",&str);
	
	float no1;
	no1=string_to_float(str);
	printf("\n%s converted to float :%f",str,no1);
	
	return 0;
}

float string_to_float(char str[])
{
	char str1[20];
	char str2[20];
	
	int i=0,j=0;
	for(;str[i]!='.';i++)
	{
		str1[i]=str[i];
	}
	str1[i]='\0';
	for(i=i+1;str[i]!='\0';i++,j++)
	{
		str2[j]=str[i];
	}
	
	str2[j]='\0';
	
	int base=string_to_int(str1);
	float exp=string_to_int(str2);
	
	double p=pow(10,j);
	return (base+(exp/p));
	
}

int string_to_int(char str[])
{
	int sum=0;
	
	for(int i=0;str[i]!='\0';i++)
	{
		int num=str[i]-48;
		sum=sum*10+num;
	}
	
	return sum;
}
