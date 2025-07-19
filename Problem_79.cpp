#include<stdio.h>
int main()
{
	int n;
	printf("\nEnter size of array :");
	scanf("%d",&n);
	
	int arr[n];
	printf("\nEnter array elements : ");
	for(int i=0;i<n;i++)
	scanf("%d",&arr[i]);
	
	printf("\nEven elements in array : ");
	for(int i=0;i<n;i++)
	{
		if(arr[i]%2==0)
		printf("%d\t",arr[i]);
	}
	return 0;
}
