#include<stdio.h>
int main()
{
	int a,*p;
	printf("\nEnter any integer : ");
	scanf("%d",&a);
	
	printf("\n%d integer and it's address is : %d",a,&a);
	p=&a;
	
	printf("\nvalue stored in pointer p : %d",p);
	printf("\nvalue stored in address pointed by p : %d",*p);
	
	printf("\nvalue of a before changing using pointer : %d",a);
	*p=45;
	printf("\nValue after changing the pointer : %d",a);
	printf("\nValue using pointer : %d",*p);
	
	printf("\nAddress of pointer p : %d",&p);
	return 0;
}
