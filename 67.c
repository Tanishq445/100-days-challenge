#include <stdio.h>

int main()
{
    int arr[100], n, i;
    int pos, element;

    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    scanf("%d %d", &pos, &element);

    // Shift elements one position to the right
    for (i = n; i > pos; i--)
    {
        arr[i] = arr[i - 1];
    }

    // Insert element at given position
    arr[pos] = element;
    n++;

    // Print updated array
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}