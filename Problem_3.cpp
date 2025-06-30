#include<stdio.h>
int main()
{
	printf("\n We are using format specifier syntax used in scanf()");
	int a;
	printf("\nUsing * --> this will supress the input it will read but not store it\n");
	scanf("%*d %d",&a);// Reads and discards the first integer, stores the second into x
	printf("a : %d",a);
	
	printf("\nWe are using Maximum Field Width");// reads at most 5 characters into str
	char str[10];
	printf("\nEnter any String : ");
	scanf("%5s",&str);
	printf("\n str is : %.3s",str);// prints only the first 3 characters
	return 0;
	
}
