#include<stdio.h>
void display(int [],int);
int delete_pos(int [],int,int);

int main()
{
	int n;
	printf("\nEnter size of array : ");
	scanf("%d",&n);
	
	int arr[n];
	printf("\nEnter array elements : ");
	for(int i=0;i<n;i++)
	scanf("%d",&arr[i]);
	
	display(arr,n);
	
	int pos;
	printf("\nEnter position of element to delete : ");
	scanf("%d",&pos);
	
	if(n=delete_pos(arr,n,pos))
	{
		printf("\nElement delete success!!\n");
		display(arr,n);
	}
	else
	printf("\nEnter proper index ");
	
	
	return 0;
	
	
}
void display(int arr[],int n)
{
	for(int i=0;i<n;i++)
	printf("%d\t",arr[i]);
}

int delete_pos(int arr[],int n,int pos)
{
	int temp;
	int i=0;
	for(;i<pos;i++)
	;
	
	for(int j=i;j<n;j++)
	{
		temp=arr[j];
		arr[j]=arr[j+1];
		arr[j+1]=temp;
	}
	n--;
	return n;
	
}
