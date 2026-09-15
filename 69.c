#include <stdio.h>

int main()
{
    int arr[100], n, i;
    int largest, second;

    scanf("%d", &n);

    // Input array elements
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    largest = second = -2147483648;

    // Find largest and second largest
    for (i = 0; i < n; i++)
    {
        if (arr[i] > largest)
        {
            second = largest;
            largest = arr[i];
        }
        else if (arr[i] > second && arr[i] != largest)
        {
            second = arr[i];
        }
    }

    printf("%d", second);

    return 0;
}