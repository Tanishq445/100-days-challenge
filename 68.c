#include <stdio.h>

int main()
{
    int arr[100], n, i, pos;

    scanf("%d", &n);

    // Input array elements
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Input position to delete
    scanf("%d", &pos);

    // Shift elements to the left
    for (i = pos; i < n - 1; i++)
    {
        arr[i] = arr[i + 1];
    }

    n--;

    // Print updated array
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}