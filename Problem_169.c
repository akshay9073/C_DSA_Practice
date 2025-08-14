#include<stdio.h>
int main()
{
	int rows,cols;
	printf("\nEnter Rows and Columns of Matrix : ");
	scanf("%d %d",&rows,&cols);
	
	int mat[rows][cols];
	
	for(int i=0;i<rows;i++)
	{
		for(int j=0;j<cols;j++)
		{
			scanf("%d",&mat[i][j]);
		}
	}
	
	int smat[rows][3],k=1;
	smat[0][0]=rows;
	smat[0][1]=3;
	printf("\nConverting matrix to sparse matrix : ");
	
	for(int i=0;i<rows;i++)
	{
		for(int j=0;j<3;j++)
		{
			if(mat[i][j]!=0)
			{
				smat[k][0]=i;
				smat[k][1]=j;
				smat[k][2]=mat[i][j];
				k++;
			}
		}
	}
	smat[0][2]=k-1;
	
	printf("\nRows\tCols\tValue\n");
    for(int i=0;i<=smat[0][2];i++)
    {
        for(int j=0;j<3;j++)
            printf("%d\t", smat[i][j]);
        printf("\n");
    }
}
