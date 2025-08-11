#include<stdio.h>
int main()
{
	int n;
	printf("\nEnter the size of array ");
	scanf("%d",&n);
	
	int arr[n];
	printf("\nEnter the array elements in sorted way :");
	for(int i=0;i<n;i++)
	scanf("%d",&arr[i]);
	
	int x;
	printf("\nEnter the element to search : ");
	scanf("%d",&x);
	
	int low=0;int high=n-1;
	
	int index;
	while(low<=high)
	{
		int mid=low+(high-low)/2;
		
		if(arr[mid]==x)
		{
			index=mid;
			high=mid-1;
		}
		else if(arr[mid]<x)
		low=mid+1;
		else
		high=mid-1;
	}
	printf("\n%d element found at Index : %d",x,index);
	return 0;
}
