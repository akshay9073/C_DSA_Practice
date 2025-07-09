#include<stdio.h>
int main()
{
	char ch[26];
	printf("\nEnter any string : ");
	scanf("%[^\n]",&ch);
	
	int i=0,vowels=0,consonant=0;
	while(ch[i]!='\0')
	{
		if((ch[i]>='a' && ch[i]<='z') || (ch[i]>='A' && ch[i]<='Z'))	
		{
			if(ch[i]=='a' || ch[i]=='e' || ch[i]=='i' || ch[i]=='o' || ch[i]=='u' || ch[i]=='A' || ch[i]=='E' || ch[i]=='I' || ch[i]=='O' || ch[i]=='U')
			vowels++;
			else
			consonant++;
		}
		i++;
	}
	printf("%s has %d vowels and %d consonants ",ch,vowels,consonant);
	return 0;	
}
