#include<stdio.h>
int interpolation_search(int [],int,int,int,int);
int main()
{
	int n;
	printf("\nEnter the number of array elements you want : ");
	scanf("%d",&n);
	
	int arr[n];
	
	printf("\nEnter array elements in sorted way : ");
	for(int i=0;i<n;i++)
	scanf("%d",&arr[i]);
	
	int x;
	printf("\nEnter element to search : ");
	scanf("%d",&x);
	int index=interpolation_search(arr,n,0,n-1,x);
	if(index!=-1)
	printf("\n%d element found at position %d",x,index);
	else
	printf("\n%d element not found",x);
	return 0;
	
}

int interpolation_search(int arr[],int n,int low,int high,int x)
{
	int pos;
	if(low<=high && x>=arr[low] && x<=arr[high])
	{
		pos=low+(((x-arr[low])*(high-low))/(arr[high]-arr[low]));
		
		if(arr[pos]==x)
		return pos;
		
		if(arr[pos]<x)
		return interpolation_search(arr,n,pos+1,n-1,x);
		
		if(arr[pos]>x)
		return interpolation_search(arr,n,low,pos-1,x);	
	}
	return -1;
}
