#include <stdio.h>

int main()
{
    int a[100][100];
    int rows, cols, i, j;
    int symmetric = 1;

    scanf("%d %d", &rows, &cols);

    // Input matrix
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    // A symmetric matrix must be square
    if (rows != cols)
    {
        symmetric = 0;
    }
    else
    {
        // Compare matrix with its transpose
        for (i = 0; i < rows; i++)
        {
            for (j = 0; j < cols; j++)
            {
                if (a[i][j] != a[j][i])
                {
                    symmetric = 0;
                    break;
                }
            }

            if (symmetric == 0)
                break;
        }
    }

    if (symmetric == 1)
        printf("True");
    else
        printf("False");

    return 0;
}