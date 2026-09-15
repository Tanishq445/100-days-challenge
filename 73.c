#include <stdio.h>

int main()
{
    int a[100][100], rowSum[100];
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

    // Find sum of each row
    for (i = 0; i < rows; i++)
    {
        rowSum[i] = 0;

        for (j = 0; j < cols; j++)
        {
            rowSum[i] = rowSum[i] + a[i][j];
        }
    }

    // Print row sums
    for (i = 0; i < rows; i++)
    {
        printf("%d ", rowSum[i]);
    }

    return 0;
}