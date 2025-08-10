#include<stdio.h>
int main()
{
	int n;
	printf("\nEnter how many elements you want in array : ");
	scanf("%d",&n);
	
	int arr[n];
	printf("\nEnter the array elements :");
	
	for(int i=0;i<n;i++)
	scanf("%d",&arr[i]);
	
	int x;
	printf("\nEnter element for search");
	scanf("%d",&x);
	
	for(int i=0;i<n;i++)
	{
		if(arr[i]==x)
		{
			printf("\n%d found at position %d",x,i);
			break;
		}
	}
	return 0;
}
