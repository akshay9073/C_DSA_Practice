#include<stdio.h>
int main()
{
	FILE *fp;
	char ch;
	
	fp=fopen("Matrix.txt","r");
	int noc=0,nos=0,notab=0,nol=0;
	while(1)
	{
		ch=fgetc(fp);
		
		if(ch==EOF)
		break;

			noc++;		
			if(ch==' ')
			nos++;
			if(ch=='\t')
			notab++;
			if(ch=='\n')
			nol++;
			
		
	}
	printf("\nFile has %d space",nos);
	printf("\nFile has %d Tab",notab);
	printf("\nFile has %d new line",nol);
	printf("\nFile has %d Character",noc);
	
	fclose(fp);
	return 0;
	
}
