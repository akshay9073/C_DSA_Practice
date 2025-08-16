#include<stdio.h>
int main()
{
	int n;
	printf("\nEnter the Number of elements in Array : ");
	scanf("%d",&n);
	
	int *ptr=(int *)malloc(sizeof(int)*n);
	
	printf("\nEnter the Array elements\n");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&ptr[i]);
	}
	
	for(int i=0;i<n;i++)
	printf("%d\t",ptr[i]);
	
	return 0;
}
