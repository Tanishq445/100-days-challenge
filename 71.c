#include <stdio.h>

int main()
{
    int a[100][100];
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

    // Print matrix
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    return 0;
}