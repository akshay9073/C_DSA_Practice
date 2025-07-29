#include<stdio.h>
int main()
{
	int arr[5];
	int *p;
	p=arr;
	
	printf("\nEnter the array elements : ");
	for(int i=0;i<5;i++)
	scanf("%d",&arr[i]);
	
	printf("\nPrint array using pointer : ");
	for(int i=0;i<5 ;i++)
	printf("\n%d element is : %d",i,*(p+i));
	
	return 0;
}
