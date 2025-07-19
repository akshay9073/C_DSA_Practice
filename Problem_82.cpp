#include<stdio.h>
int main()
{
	int n;
	printf("\nEnter size of array : ");
	scanf("%d",&n);
	
	
	int arr[n];
	for(int i=0;i<n;i++)
	scanf("%d",&arr[i]);
	
	int sum=0,prod=1;
	for(int i=0;i<n;i++)
	{
		sum+=arr[i];
		prod*=arr[i];
	}
	printf("\nSum of Array element is : %d and Product of Array element is : %d",sum,prod);
	return 0;
}
