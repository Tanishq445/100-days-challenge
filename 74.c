#include <stdio.h>

int main()
{
    int a[100][100], transpose[100][100];
    int rows, cols, i, j;

    // Input rows and columns
    scanf("%d %d", &rows, &cols);

    // Input matrix elements
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    // Find transpose
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            transpose[j][i] = a[i][j];
        }
    }

    // Print transpose matrix
    for (i = 0; i < cols; i++)
    {
        for (j = 0; j < rows; j++)
        {
            printf("%d ", transpose[i][j]);
        }
        printf("\n");
    }

    return 0;
}