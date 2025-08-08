#include<stdio.h>
int main()
{
	char str1[20],pat[20];
	
	printf("\nEnter any string : ");
	scanf("%[^\n]s",&str1);
	
	printf("\nEnter the pattern to find : ");
	scanf(" %[^\n]s",&pat);
	
	int m=strlen(str1);
	int n=strlen(pat);
	
	for(int i=0;i<=m-n;i++)
	{
		int a=i,j;
		for(j=0;j<n;j++)
		{
			if(str1[a]!=pat[j])
			break;
			a++;
		}
		if(j==n)
		printf("Pattern found at index %d \n",i);
	}
	
	return 0;
}
