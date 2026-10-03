#include <stdio.h>

int main()
{
    int nums[100];
    int n, i;
    int totalSum = 0, leftSum = 0;
    int pivot = -1;

    // Input number of elements
    scanf("%d", &n);

    // Input array elements
    for (i = 0; i < n; i++)
    {
        scanf("%d", &nums[i]);
        totalSum += nums[i];
    }

    // Find pivot index
    for (i = 0; i < n; i++)
    {
        // Right sum = total sum - left sum - current element
        if (leftSum == totalSum - leftSum - nums[i])
        {
            pivot = i;
            break;
        }

        leftSum += nums[i];
    }

    // Print pivot index
    printf("%d", pivot);

    return 0;
}