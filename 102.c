#include <stdio.h>

int main()
{
    int arr[100];
    int n, x, i;
    int index = -1;

    // Input number of elements
    scanf("%d", &n);

    // Input sorted array
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Input x
    scanf("%d", &x);

    // Find the first element greater than or equal to x
    for (i = 0; i < n; i++)
    {
        if (arr[i] >= x)
        {
            index = i;
            break;
        }
    }

    // Print index
    printf("%d", index);

    return 0;
}