#include<stdio.h>
int main()
{
	char src[20];
	printf("\nEnter any String : ");
	scanf("%[^\n]",src);
	
	char target[20];
	printf("\nCopying string in other string ");
	
	int i=0;
	while(src[i]!='\0')
	{
		target[i]=src[i];
		i++;
	}
	target[i]='\0';
	
	printf("\nCopied String is : %s",target);
	
	return 0;
}
