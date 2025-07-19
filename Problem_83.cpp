#include<stdio.h>
int main()
{
	int n;
	printf("\nEnter size of Array : ");
	scanf("%d",&n);
	
	int arr[n];
	for(int i=0;i<n;i++)
	scanf("%d",&arr[i]);
	
	int count_even=0,count_odd=0;
	for(int i=0;i<n;i++)
	{
		if(arr[i]%2==0)
		count_even++;
		else
		count_odd++;
	}
	printf("\nCount of Even %d and Count of Odd is %d",count_even,count_odd);
	return 0;
}
