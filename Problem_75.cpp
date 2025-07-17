#include<stdio.h>
int main()
{
	int x,y;
	int *p1,*p2;
	
	printf("\nEnter two number : ");
	scanf("%d %d",&x,&y);
	
	p1=&x;
	p2=&y;
	
	
	printf("x is :%d",*p1);
	printf(" y is %d ",*p2);
	
	int temp=*p1;
	*p1=*p2;
	*p2=temp;
	
	printf("\nValue of x and y before swap :");
	printf("x is %d ",*p1);
	printf(" y is %d ",*p2);
	
	return 0;
	
}
