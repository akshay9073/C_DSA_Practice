#include<stdio.h>
int main()
{
	int n;
	printf("\nEnter the size of array : ");
	scanf("%d",&n);
	
	int arr[n];
	
	printf("\nEnter array elements : ");
	for(int i=0;i<n;i++)
	scanf("%d",&arr[i]);
	
	int max=arr[0];
	for(int i=0;i<n;i++)
	{
		if(arr[i]>max)
		max=arr[i];
	}
	printf("\n%d is max array element",max);
	return 0;
}
