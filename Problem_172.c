#include<stdio.h>
int main()
{
	int n;
	printf("\nEnter how many elements you want : ");
	scanf("%d",&n);
	
	int *ptr=(int *)calloc(n,sizeof(int));

	printf("\nBefore Initializing\n");
	for(int i=0;i<n;i++)
	printf("%d\t",ptr[i]);
	
	printf("\nEnter the array elements : ");
	for(int i=0;i<n;i++)
	scanf("%d",&ptr[i]);
	
	printf("\nAfter Initializing\n");
	for(int i=0;i<n;i++)
	printf("%d\t",ptr[i]);
}
