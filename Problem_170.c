#include<stdio.h>
void accept_matrix(int r,int c,int [][c]);
void display_matrix(int r,int c,int [][c]);
void accept_sm(int smat[][3]);
void display_sm(int smat[][3],int);
void matrix_to_sparse(int smat[][3],int mat[][smat[0][1]]);
void sparse_to_matrix(int smat[][3],int mat[][smat[0][1]]);
int main()
{
	int mat[20][20],r,c;
	int smat[20][3];
	int choice;
	
	
	while(1)
	{
		printf("\n==========================================\n");
		printf("\n 1)Accept Matrix");
		printf("\n 2)Display Matrix");
		printf("\n 3)Accept Sparse Matrix");
		printf("\n 4)Display Sparse Matrix");
		printf("\n 5)Convert Matrix to Sparse");
		printf("\n 6)Convert Sparse to Matrix");
		printf("\n===========================================\n");
		
		printf("\nEnter the choice : ");
	scanf("%d",&choice);
		
		switch(choice)
		{
			case 1:
				printf("\nEnter the rows and cols in Matrix : ");
				scanf("%d %d",&r,&c); 
				accept_matrix(r,c,mat);
				break;
				
			case 2:
				printf("\nDisplay Matrix\n");
				display_matrix(r,c,mat);
				break;
				
			case 3:
				accept_sm(smat);
				break;
				
			case 4:
				printf("\nDisplay Sparse Matrix");
				display_sm(smat,r);
				break;
				
			case 5:
				smat[0][0]=r;
				smat[0][1]=c;
				matrix_to_sparse(smat,mat);
				printf("\nConversion Success!!");
				break;
				
			case 6:
				sparse_to_matrix(smat,mat);
				printf("\nConversion Success!!");
				r=smat[0][0];
				c=smat[0][1];
				break;
				
				
		}
	}
}

void accept_matrix(int r,int c,int mat[][c])
{
	printf("\nEnter the Matrix element : ");
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
			scanf("%d",&mat[i][j]);
		}
	}
}

void display_matrix(int r,int c,int mat[][c])
{
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		printf("%d\t",mat[i][j]);
		
		printf("\n");
	}
}

void accept_sm(int smat[][3])
{
	int i, nonZeroCount;

    printf("Enter total rows in original matrix: ");
    scanf("%d", &smat[0][0]);

    printf("Enter total columns in original matrix: ");
    scanf("%d", &smat[0][1]);

    printf("Enter number of non-zero elements: ");
    scanf("%d", &nonZeroCount);

    smat[0][2] = nonZeroCount;

    for(i = 1; i <= nonZeroCount; i++)
    {
        printf("\nEnter row index for element %d: ", i);
        scanf("%d", &smat[i][0]);

        printf("Enter column index for element %d: ", i);
        scanf("%d", &smat[i][1]);

        printf("Enter value for element %d: ", i);
        scanf("%d", &smat[i][2]);
    }
}

void display_sm(int smat[][3],int r)
{
	printf("\nSparse Matrix Representation (Triplet Form):\n");
    printf("[TotalRows, TotalCols, NonZeroCount]\n");
    printf("%d\t%d\t%d\n", smat[0][0], smat[0][1], smat[0][2]);

    printf("\n[RowIndex, ColIndex, Value]\n");
	for(int i=0;i<=smat[0][2];i++)
	{
		for(int j=0;j<3;j++)
		{
			printf("%d\t",smat[i][j]);
		}
		
		printf("\n");
	}
}

void matrix_to_sparse(int smat[][3],int mat[][smat[0][1]])
{
	int k=1;
	for(int i=0;i<smat[0][0];i++)
	{
		for(int j=0;j<smat[0][1];j++)
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
}

void sparse_to_matrix(int smat[][3],int mat[][smat[0][1]])
{
	for(int i=0;i<smat[0][0];i++)
	{
		for(int j=0;j<smat[0][1];j++)
		{
			mat[i][j]=0;
		}
	}
	
	for(int i=1;i<=smat[0][2];i++)
	mat[smat[i][0]][smat[i][1]]=smat[i][2];
}
