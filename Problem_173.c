#include<stdio.h>
int main()
{
	int n;
	printf("\nEnter the array elements : ");
	scanf("%d",&n);
	
	int *ptr=(int *)malloc(sizeof(int)*n);
	
	for(int i=0;i<n;i++)
	scanf("%d",&ptr[i]);
	
	for(int i=0;i<n;i++)
	printf("%d\t",ptr[i]);
	
	free(ptr);
	
	ptr=NULL;
	return 0;
}
