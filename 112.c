#include <stdio.h>

int main()
{
    int arr[100], n, i;
    int currentSum, maxSum;

    // Input size of array
    scanf("%d", &n);

    // Input array elements
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Initialize sums
    currentSum = arr[0];
    maxSum = arr[0];

    // Kadane's Algorithm
    for (i = 1; i < n; i++)
    {
        if (currentSum + arr[i] > arr[i])
        {
            currentSum = currentSum + arr[i];
        }
        else
        {
            currentSum = arr[i];
        }

        if (currentSum > maxSum)
        {
            maxSum = currentSum;
        }
    }

    // Print maximum sum
    printf("%d", maxSum);

    return 0;
}