#include<stdio.h>
int main()
{
	int n;
	printf("\nEnter size of array : ");
	scanf("%d",&n);
	
	int arr[n];
	printf("\nEnter elements of array : ");
	
	for(int i=0;i<n;i++)
	scanf("%d",&arr[i]);
	
	int min=arr[0],min_index;
	for(int i=0;i<n;i++)
	{
		if(min>arr[i])
		{
			min=arr[i];
			min_index=i;
		}
	}
	
	printf("%d minimum element at index %d ",min,min_index);
	return 0;
}
