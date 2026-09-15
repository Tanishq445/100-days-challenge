#include <stdio.h>

int main()
{
    int arr[100], n, k, i, j, temp;

    scanf("%d", &n);

    // Input array elements
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    scanf("%d", &k);

    // Handle k greater than n
    k = k % n;

    // Rotate array k times
    for (i = 0; i < k; i++)
    {
        temp = arr[n - 1];

        for (j = n - 1; j > 0; j--)
        {
            arr[j] = arr[j - 1];
        }

        arr[0] = temp;
    }

    // Print rotated array
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}