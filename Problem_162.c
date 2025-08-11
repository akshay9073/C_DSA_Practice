#include<stdio.h>
int main()
{
	int n;
	printf("\nEnter the number of array elements : ");
	scanf("%d",&n);
	
	int arr[n];
	printf("\nEnter the array elements : ");
	for(int i=0;i<n;i++)
	scanf("%d",&arr[i]);
	
	if(n==1)
	{
		printf("\npeak element is : %d",arr[0]);
		return 0;
	}
	
	if(arr[n-1]>arr[n-2])
	{
		printf("\nPeak element is : %d",arr[n-1]);
	}
	
	for(int i=1;i<n-1;i++)
	{
		if(arr[i]>arr[i-1] && arr[i]>arr[i+1])
		{
			printf("\nPeak element is : %d",arr[i]);
		break;
		}
	}
	
	return 0;	
}
