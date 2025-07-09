#include<stdio.h>
int main()
{
	char ch[30];
	printf("\nEnter any string :");
	scanf("%[^\n]",&ch);
	
	int i=0;
	while(ch[i]!='\0')
	{
		if(ch[i]>='A' && ch[i]<='Z')
		ch[i]+=32;
		else if(ch[i]>='a'&&ch[i]<='z')
		ch[i]-=32;
		
		printf("%c",ch[i]);
		i++;
	}
}
