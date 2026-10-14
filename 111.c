#include <stdio.h>

int main()
{
    int arr[100], n, k, i, j;
    int firstNegative;

    // Input size of array
    scanf("%d", &n);

    // Input array elements
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Input window size
    scanf("%d", &k);

    // Check each subarray of size k
    for (i = 0; i <= n - k; i++)
    {
        firstNegative = 0;

        for (j = i; j < i + k; j++)
        {
            if (arr[j] < 0)
            {
                firstNegative = arr[j];
                break;
            }
        }

        printf("%d", firstNegative);

        if (i < n - k)
        {
            printf(" ");
        }
    }

    return 0;
}