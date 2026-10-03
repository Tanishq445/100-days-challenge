#include <stdio.h>

int main()
{
    int nums[100];
    int n, i, j;
    int count;
    int majority = -1;

    // Input size of array
    scanf("%d", &n);

    // Input array elements
    for (i = 0; i < n; i++)
    {
        scanf("%d", &nums[i]);
    }

    // Find majority element
    for (i = 0; i < n; i++)
    {
        count = 0;

        for (j = 0; j < n; j++)
        {
            if (nums[i] == nums[j])
            {
                count++;
            }
        }

        // Majority element must occur more than n/2 times
        if (count > n / 2)
        {
            majority = nums[i];
            break;
        }
    }

    // Print result
    printf("%d", majority);

    return 0;
}