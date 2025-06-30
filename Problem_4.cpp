#include<stdio.h>
int main()
{
	printf("\n We are now using format specifier for printf ");
	printf("\nFlags\n");
	printf("\n1: (+) used to display sign of particular number : %+d",5);
	printf("\n2: (0) used to pad with 0 instead of space : %05d",42);
	printf("\n3: (#) used to pad with 0x : %#x",35);
	printf("\n4: (-) used to Left-align within the field width :%-5d",33);
}
