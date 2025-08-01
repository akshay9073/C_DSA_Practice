#include<stdio.h>
int main()
{
	FILE *fp,*ft;
	char ch;
	
	fp=fopen("a.txt","r");
	if(fp==EOF)
	{
		printf("\nError!! File doesn't exist");
		return 0;
	}
	
	ft=fopen("b.txt","w");
	if(ft==EOF)
	{
		printf("\nError!! File doesn't exist");
		return 0;
	}
	
	while(1)
	{
		ch=fgetc(fp);
		if(ch==EOF)
		break;
		
		fputc(ch,ft);
	}
	printf("\nFile Contet copied Success!!");
	fclose(ft);
	fclose(fp);
	
	return 0;
	
}
