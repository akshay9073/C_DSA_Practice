#include<stdio.h>
#include<stdlib.h>

int main(int argc ,char *argv[])
{
	int min,max;
	min=max=atoi(argv[1]);
	
	for(int i=1;i<argc;i++)
	{
		if(atoi(argv[i])>max)
		max=atoi(argv[i]);
		if(atoi(argv[i])<min)
		min=atoi(argv[i]);
	}
	
	printf("\n Max :%d and Min :%d",max,min);
	return 0;
}
