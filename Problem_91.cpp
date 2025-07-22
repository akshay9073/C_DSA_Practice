#include<stdio.h>
int main()
{
	int n;
	printf("\nEnter size of the array : ");
	scanf("%d",&n);
	
	int arr[n];
	for(int i=0;i<n;i++)
	scanf("%d",&arr[i]);
	
	int max=arr[0],max_index;
	for(int i=0;i<n;i++)
	{
		if(arr[i]>max)
		{
			max=arr[i];
			max_index=i;
		}
	}
	printf("%d max element found at position %d",max,max_index);
	
	return 0;
}
