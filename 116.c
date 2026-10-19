#include <stdio.h>

int main()
{
    int nums[100], n, target;
    int i, j;
    int found = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &nums[i]);
    }

    printf("Enter target: ");
    scanf("%d", &target);

    for (i = 0; i < n - 1; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (nums[i] + nums[j] == target)
            {
                printf("%d %d", i, j);
                found = 1;
                break;
            }
        }

        if (found)
            break;
    }

    if (!found)
    {
        printf("-1 -1");
    }

    return 0;
}