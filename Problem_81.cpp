#include<stdio.h>
int is_prime(int);
int main()
{
	int n;
	printf("\nEnter size of array : ");
	scanf("%d",&n);
	
	
	
	int arr[n];
	for(int i=0;i<n;i++)
	scanf("%d",&arr[i]);
	
	printf("\nPrime number in array is : ");
	for(int i=0;i<n;i++)
	{
		if(is_prime(arr[i]))
		printf("%d\t",arr[i]);
	}
	return 0;
}

int is_prime(int a)
{
	if (a <= 1)
        return 0;
        
	for(int i=2;i<=a/2;i++)
	{
		if(a%i==0)
		return 0;
	}
	return 1;
}
