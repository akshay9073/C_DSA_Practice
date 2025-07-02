#include<stdio.h>
#include<math.h>
int main()
{
	float Principal,Rate,Time,simple_interest,compound_interest;
	
	printf("\nEnter a Principal Amount : ");
	scanf("%f",&Principal);
	printf("\nEnter Rate of interest : ");
	scanf("%f",&Rate);
	printf("\nEnter Time Period : ");
	scanf("%f",&Time);
	
	simple_interest=(Principal*Rate*Time)/100;
	printf("\n Simple Interest is : %f",simple_interest);
	
	compound_interest=Principal*pow((1+(Rate/100)),Time);
	
	printf("\n Compound Interest is : %f",compound_interest);
	
	return 0;
	
	
}
