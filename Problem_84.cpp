#include<stdio.h>
int display(int [],int);
int main()
{
	int n;
	
	printf("\nSize of array : ");
	scanf("%d",&n);
	int arr1[n];
	
	for(int i=0;i<n;i++)
	scanf("%d",&arr1[i]);
	
	printf("\nArray 1 elements :");
	display(arr1,n);
	
	int arr2[n];
	for(int i=0;i<n;i++)
	arr2[i]=arr1[i];
	
	printf("\nArray 2 elements :");
	display(arr2,n);
	
	
}
int display(int arr[],int n)
{
	for(int i=0;i<n;i++)
	printf("%d\t",arr[i]);
	
	return 0;
}
