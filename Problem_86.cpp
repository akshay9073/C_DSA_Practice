#include<stdio.h>
void display(int [],int);
int main()
{
	int n;
	printf("\nEnter size of the array : ");
	scanf("%d",&n);
	
	int arr[n];
	
	for(int i=0;i<n;i++)
	scanf("%d",&arr[i]);
	
	printf("\nArray before reverse : ");
	display(arr,n);
	
	int i=0,j=n-1;
	int temp;
	while(i<j)
	{
		temp=arr[i];
		arr[i]=arr[j];
		arr[j]=temp;
		
		i++;
		j--;
	}
	
	printf("\nArray after reverse : ");
	display(arr,n);
	
		
}
void display(int arr[],int n)
{
	for(int i=0;i<n;i++)
	printf("\t%d",arr[i]);

}

