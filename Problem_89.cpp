#include<stdio.h>
void display(int [],int);
int insert_at_pos(int [],int,int,int);
int main()
{
	int n;
	printf("\nEnter size of array element : ");
	scanf("%d",&n);
	
	int arr[n],noe;
	
	printf("\nHow many elements you want : ");
	scanf("%d",&noe);
	
	for(int i=0;i<noe;i++)
	scanf("%d",&arr[i]);
	
	printf("\nArray elements are : ");
	display(arr,noe);
	
	int pos,value;
	printf("\nEnter position and value to insert :");
	scanf("%d %d",&pos,&value);
	
	if(noe=insert_at_pos(arr,noe,pos,value))
	{
		printf("\nInsert success : ");
		display(arr,noe-1);
	}
	else
	printf("\nEnter correct position and value");
	
	
}
void display(int arr[],int n)
{
	for(int i=0;i<n;i++)
	printf(" %d \t",arr[i]);
}

int insert_at_pos(int arr[],int noe,int pos,int value)
{
		for(int i=noe-1;i>pos-1;i--)
	arr[i+1]=arr[i];
	arr[pos-1]=value;
	
	return noe+1;
}
