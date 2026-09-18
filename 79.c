#include <stdio.h>

int main()
{
    int a[100][100];
    int rows, cols, i, j, d;

    scanf("%d %d", &rows, &cols);

    // Input matrix
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    // Diagonal traversal
    for (d = 0; d < rows + cols - 1; d++)
    {
        if (d % 2 == 0)
        {
            i = (d < rows) ? d : rows - 1;
            j = d - i;

            while (i >= 0 && j < cols)
            {
                printf("%d ", a[i][j]);
                i--;
                j++;
            }
        }
        else
        {
            j = (d < cols) ? d : cols - 1;
            i = d - j;

            while (j >= 0 && i < rows)
            {
                printf("%d ", a[i][j]);
                i++;
                j--;
            }
        }
    }

    return 0;
}