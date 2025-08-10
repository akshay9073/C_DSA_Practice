#include<stdio.h>
int binary_search(int [],int,int,int,int);
int main()
{
	int n;
	printf("\nEnter the size of array : ");
	scanf("%d",&n);
	
	int arr[n];
	printf("\nEnter the array elements : ");
	
	for(int i=0;i<n;i++)
	scanf("%d",&arr[i]);
	
	int x;int low=0;int high=n-1;
	printf("\nEnter the element to found");
	scanf("%d",&x);
	int result=binary_search(arr,n,low,high,x);
	printf("\n%d found at positon %d",x,result);
	return 0;
}

int binary_search(int arr[],int n,int low, int high,int x)
{
	
		int mid=low+(high-low)/2;
		
		if(arr[mid]==x)
		return mid;
		else if(arr[mid]>x)
		binary_search(arr,n,0,mid+1,x);
		else
		binary_search(arr,n,mid+1,n-1,x);
}
