#include <stdio.h>

int main()
{
    int n, x, i;
    int leftSum, rightSum;
    int pivot = -1;

    // Input n
    scanf("%d", &n);

    // Check each number from 1 to n
    for (x = 1; x <= n; x++)
    {
        leftSum = 0;
        rightSum = 0;

        // Sum from 1 to x
        for (i = 1; i <= x; i++)
        {
            leftSum += i;
        }

        // Sum from x to n
        for (i = x; i <= n; i++)
        {
            rightSum += i;
        }

        if (leftSum == rightSum)
        {
            pivot = x;
            break;
        }
    }

    // Print pivot integer
    printf("%d", pivot);

    return 0;
}