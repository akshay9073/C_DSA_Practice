#include<stdio.h>
int main()
{
	int n;
	printf("\nEnter size of the array : ");
	scanf("%d",&n);
	
	int arr[n];
	for(int i=0;i<n;i++)
	scanf("%d",&arr[i]);
	
	int p=0,ng=0,z=0;
	for(int i=0;i<n;i++)
	{
		if(arr[i]>0)
		{
			printf("%d\t",arr[i]);
			p++;
		}
		else if(arr[i]<0)
		{
			printf("%d\t",arr[i]);
			ng++;
		}
		else
		{
			printf("%d\t",arr[i]);
		z++;
		}
	}
	
	printf("\n %d positive numbers ",p);
		printf("\n %d negative numbers ",ng);
			printf("\n %d zero numbers ",z);
}
