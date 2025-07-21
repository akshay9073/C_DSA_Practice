#include<stdio.h>
int common_elements(int [],int [],int ,int []);
int main()
{
	int n1;
	printf("\nEnter size of array 1: ");
	scanf("%d",&n1);

    
	
	int arr1[n1];
	
	printf("\nEnter elements of Array 1 :");
	for(int i=0;i<n1;i++)
	scanf("%d",&arr1[i]);
	
		int n2;
	printf("\nEnter size of array 1: ");
	scanf("%d",&n2);
	
	int arr2[n2];
	printf("\nEnter elements of Array 2 :");
	for(int i=0;i<n2;i++)
	scanf("%d",&arr2[i]);
	
	int max;
	n1>n2?max=n1:max=n2;
	int arr3[max];
	printf("\nThe common elements of array : ");
	int noe=common_elements(arr1,arr2,max,arr3);
	for(int i=0;i<noe;i++)
	printf("%d\t",arr3[i]);
	
	return 0;
	
}

int common_elements(int arr1[],int arr2[],int n,int arr3[])
{
	int k=0;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(arr1[i]==arr2[j])
			arr3[k++]=arr1[i];
		}
	}
	
	return k;
}
