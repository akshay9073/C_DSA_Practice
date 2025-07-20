#include<stdio.h>
int main()
{
	int n;
	printf("\nEnter the size of Array : ");
	scanf("%d",&n);
	
	int arr1[n];
	
	for(int i=0;i<n;i++)
	scanf("%d",&arr1[i]);
	
	int even_index=0,odd_index=0;
	
	for(int i=1;i<=n;i++)
	{
		if(i%2==0)
		even_index+=arr1[i-1];
		else
		odd_index+=arr1[i-1];
	}
	
	printf("\nSum of difference of even and odd index : %d",even_index-odd_index);
	
	return 0;
}
