#include <stdio.h>

int main()
{
    int a[100][100];
    int rows, cols, i, j;
    int sum = 0;

    scanf("%d %d", &rows, &cols);

    // Input matrix elements
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    // Check if matrix is square
    if (rows == cols)
    {
        // Calculate sum of main diagonal
        for (i = 0; i < rows; i++)
        {
            sum = sum + a[i][i];
        }

        printf("%d", sum);
    }
    else
    {
        printf("Matrix is not square");
    }

    return 0;
}