#include <stdio.h>

void display(int rows, int cols, int mat[rows][cols]);

int main()
{
    int rows,cols;
    printf("\nEnter rows and columns : ");
    scanf("%d %d",&rows,&cols);
	int mat[rows][cols];
    
    

    printf("\nEnter the matrix elements: \n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
            scanf("%d", &mat[i][j]);
    }

    printf("\nBefore replacement:\n");
    display(rows, cols, mat);

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (mat[i][j] == 0)
            {
                for (int k = 0; k < cols; k++)
                {
                    mat[i][k] = 0;
                }
                break;
            }
        }
    }

    printf("\nAfter replacement:\n");
    display(rows, cols, mat);

    return 0;
}

void display(int rows, int cols, int mat[rows][cols])
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
            printf("%d\t", mat[i][j]);
        printf("\n");
    }
}

