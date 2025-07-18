#include<stdio.h>
int main()
{
	int n;
	printf("\nEnter the size of array :");
	scanf("%d",&n);
	
	int arr[n];
	printf("\nEnter array elements : ");
	for(int i=0;i<n;i++)
	scanf("%d",&arr[i]);
	
	printf("\nDisplay array elements : ");
	for(int i=0;i<n;i++)
	printf("%d\t",arr[i]);
	
	return 0;
}
