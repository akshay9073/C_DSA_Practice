#include<stdio.h>
int main()
{
	int n;
	printf("\nEnter the number of Array elements : ");
	scanf("%d",&n);
	
	int arr[n];
	printf("\nEnter the array elements : ");
	
	for(int i=0;i<n;i++)
	scanf("%d",&arr[i]);
	
	int low=0;
	int high=n-1;
	
	int x;
	printf("\nEnter array elment to serach");
	scanf("%d",&x);
	
	while(low<=high)
	{
		int mid=low+(high-low);
		
		if(arr[mid]==x)
		{
			printf("\n%d element found at %d",x,mid);
			break;
		}
		else if(arr[mid]>x)
		high=mid-1;
		else
		low=mid+1;
	}
	
	return 0;
}
