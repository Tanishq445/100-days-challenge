
#include <stdio.h>

int main()
{
    int arr[100], n, i;
    int sum = 0, total, missing;

    // Input size of array
    scanf("%d", &n);

    // Input array elements
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        sum = sum + arr[i];
    }

    // Calculate expected sum from 0 to n
    total = n * (n + 1) / 2;

    // Find missing number
    missing = total - sum;

    // Print result
    printf("%d", missing);

    return 0;
}
