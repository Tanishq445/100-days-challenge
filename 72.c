#include <stdio.h>

int main()
{
    int a[100][100];
    int rows, cols, i, j;
    int sum = 0;

    // Input rows and columns
    scanf("%d %d", &rows, &cols);

    // Input matrix elements
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            scanf("%d", &a[i][j]);
            sum = sum + a[i][j];
        }
    }

    // Print sum
    printf("%d", sum);

    return 0;
}