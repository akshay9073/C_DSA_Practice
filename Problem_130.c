#include<stdio.h>
int main()
{
	FILE *fp;
	char ch;
	
	fp=fopen("Matrix.txt","r");
	
	while(1)
	{
		ch=fgetc(fp);
		if(ch == EOF)
		break;
		
		putchar(ch);
		
	}
	printf("\n");
	fclose(fp);
	return 0;
}
