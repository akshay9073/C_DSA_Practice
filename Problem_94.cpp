#include<stdio.h>
int digit(int [],int);
int main()
{
	int n;
	printf("\nEnter size of array : ");
	scanf("%d",&n);
	
	int arr[n];
	printf("\nEnter array elements only single digits : ");
	for(int i=0;i<n;i++)
	scanf("%d",&arr[i]);
	
	printf("digit is :%d",digit(arr,n));
	return 0;
}

int digit(int arr[],int n)
{
	int num=0;
	for(int i=0;i<n;i++)
	num=num*10+arr[i];
	
	return num;
}
