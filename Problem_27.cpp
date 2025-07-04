#include<stdio.h>
int main()
{
	for(int i=1;i<8;i+=2)
	{
		for(int j=i;j>0;j--)
		{
			printf("*");
		}
		printf("\n");
	}
}
