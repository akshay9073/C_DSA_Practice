#include<stdio.h>
int print_digit(int);
int reverse(int);
int main()
{
	int num;
	printf("\nEnter any number : ");
	scanf("%d",&num);
	

	int temp=reverse(num);
	while(temp>0)
	{
		int rem=temp%10;
		print_digit(rem);
		temp/=10;
	}
}

int print_digit(int n)
{
	printf("\n");
	for(int i=0;i<=n-1;i++)
	printf("%d",n);
	
}

int reverse(int n) {
    int rev = 0;
    while(n > 0) {
        rev = rev * 10 + n % 10;
        n /= 10;
    }
    return rev;
}
