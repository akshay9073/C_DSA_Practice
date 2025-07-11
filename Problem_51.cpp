#include<stdio.h>
int main(int argc, char *argv[])
{
	printf("\nPrinting argument in reverse : ");
	for(int i=argc-1;i>0;i--)
	printf("%s\t", argv[i]);
	
	return 0;
}
