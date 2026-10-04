#include <stdio.h>

int main()
{
    int arr[100];
    int n, i, j;
    int nextGreater;

    // Input size of array
    scanf("%d", &n);

    // Input array elements
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Find next greater element
    for (i = 0; i < n; i++)
    {
        nextGreater = -1;

        // Search towards the right
        for (j = i + 1; j < n; j++)
        {
            if (arr[j] > arr[i])
            {
                nextGreater = arr[j];
                break;
            }
        }

        // Print in comma-separated format
        printf("%d", nextGreater);

        if (i < n - 1)
        {
            printf(", ");
        }
    }

    return 0;
}