#include<stdio.h>
int main()
{
	int n;
	printf("\nEnter the number of array elements : ");
	scanf("%d",&n);
	
	int arr[n];
	printf("\nEnter the binary digits in sorted form 1's and 0's at last");
	for(int i=0;i<n;i++)
	scanf("%d",&arr[i]);
	
	int low=0;int high=n-1;
	int index;
	while(low<=high)
	{
		int mid=low+(high-low)/2;
		
		if(arr[mid]==0)
		{
			index=mid;
			high=mid-1;
		}
		else
		low=mid+1;
	}
	
	printf("\nThe binary has %d 1's in it ",index);
	return 0;
}
