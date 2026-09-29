#include <stdio.h>

int main()
{
    int nums[100];
    int n, target, i;
    int first = -1, last = -1;

    // Input number of elements
    scanf("%d", &n);

    // Input sorted array
    for (i = 0; i < n; i++)
    {
        scanf("%d", &nums[i]);
    }

    // Input target
    scanf("%d", &target);

    // Find first and last occurrence
    for (i = 0; i < n; i++)
    {
        if (nums[i] == target)
        {
            if (first == -1)
            {
                first = i;
            }

            last = i;
        }
    }

    // Print result
    printf("%d,%d", first, last);

    return 0;
}