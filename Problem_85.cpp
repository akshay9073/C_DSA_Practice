#include<stdio.h>
int is_palindrome(int [],int);
int main()
{
	int n;
	printf("\nEnter size of Array : ");
	scanf("%d",&n);
	
	int arr[n];
	for(int i=0;i<n;i++)
	scanf("%d",&arr[i]);
	
	if(is_palindrome(arr,n))
	printf("\nArray is palindrome ");
	else
	printf("\nArray is not palindrome");
	
	return 0;
}

int is_palindrome(int arr[],int n)
{
	int i=0,j=n-1;
	
	while(i<j)
	{
		if(arr[i]!=arr[j])
		return 0;
			i++;
			j--;
	}
	return 1;
}
