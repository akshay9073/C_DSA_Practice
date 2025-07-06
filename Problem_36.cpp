#include<stdio.h>
int sum_even(int,int);
int sum_odd(int,int);
int main()
{
	int a,b,choice;
	
	

	printf("\n 1: Sum of all even numbers in range");
	printf("\n 2: Sum of all odd numbers in range");
	
	printf("\nEnter your choice : ");	
	scanf("%d",&choice);
	
	switch(choice)
	{
		case 1:
			printf("\nEnter the range : ");
			scanf("%d %d",&a,&b);
			printf("\nSum of even number in %d and %d : %d ",a,b,sum_even(a,b));
			break;
			
		case 2:
			printf("\nEnter the range : ");
			scanf("%d %d",&a,&b);
			printf("\nSum of odd number in %d and %d : %d",a,b,sum_odd(a,b));
			break;
	}
	
	return 0;
}

int sum_even(int a,int b)
{
	int sum=0;
	for(int i=a;i<=b;i++)
	{
		if(i%2==0)
		sum+=i;
	}
	
	return sum;
}

int sum_odd(int a,int b)
{
	int sum=0;
	for(int i=a;i<=b;i++)
	{
		if(i%2!=0)
		sum+=i;
	}
	
	return sum;
}
