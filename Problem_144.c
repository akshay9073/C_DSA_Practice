#include<stdio.h>
#include<math.h>
int display(int []);
int evaluate(int [],int);

int main()
{
	int poly[20];
	printf("\nEnter the number of terms : ");
	scanf("%d",&poly[0]);
	
	printf("\nEnter the terms of equation : ");
	for(int i=1;i<poly[0]*2;i+=2)
	{
		int coefficient=0,power=0;
		printf("\nEnter coefficient : ");
		scanf(" %d",&coefficient);
		poly[i]=coefficient;
		printf("\nEnter power : ");
		scanf(" %d",&power);
		poly[i+1]=power;
	}
	
	display(poly);
	
	int x,value;
	printf("\nEnter the value of x : ");
	scanf("%d",&x);
	value=evaluate(poly,x);
	printf("\nvalue of polynomial is : %d",value);
	
	return 0;
}

int display(int poly[])
{
	for(int i = 1; i < poly[0] * 2; i += 2)
    {
        int coeff = poly[i];
        int power = poly[i + 1];

        if (i > 1 && coeff >= 0)
            printf(" + ");

        if (coeff < 0)
            printf(" - %dx^%d", -coeff, power);
        else
            printf("%dx^%d", coeff, power);
    }
    printf("\n");
}

int evaluate(int poly[],int x)
{
	int value=0;
	for(int i=1;i<poly[0]*2;i+=2)
	value+=poly[i]*(int)pow(x,poly[i+1]);
	
	return value;
}
