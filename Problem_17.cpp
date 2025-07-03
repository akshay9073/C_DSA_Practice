#include<stdio.h>
int greatest_of_three(int,int,int);
int main()
{
	int a,b,c;
	printf("\nEnter any three integers : ");
	scanf("%d %d %d",&a,&b,&c);
	
	printf("\nGreatest of three numbers : %d",greatest_of_three(a,b,c));
	return 0;
}

int greatest_of_three(int a, int b, int c)
{
	return ((a>b && b>c)?a:(b>c)?b:c);
}

