#include<stdio.h>
int main()
{
	int n;
	printf("\nEnter the size of array : ");
	scanf("%d",&n);
	
	int arr[n];
	for(int i=0;i<n;i++)
	scanf("%d",&arr[i]);
	
	int min=arr[0];
	for(int i=0;i<n;i++)
	{
		if(min>arr[i])
		min=arr[i];
	}
	printf("%d is min in array",min);
	return 0;
}
