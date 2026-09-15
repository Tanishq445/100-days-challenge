#include <stdio.h>

int main() { long long n; int count[10] = {0}; int digit, i, max = 0, mostDigit = 0;

printf("Enter an integer number: ");
scanf("%lld", &n);

// Make negative number positive
if (n < 0)
    n = -n;

// Special case for 0
if (n == 0)
    count[0] = 1;

// Count frequency of each digit
while (n > 0)
{
    digit = n % 10;
    count[digit]++;
    n = n / 10;
}

// Find the digit with maximum frequency
for (i = 0; i < 10; i++)
{
    if (count[i] > max)
    {
        max = count[i];
        mostDigit = i;
    }
}

printf("Digit occurring most times = %d\n", mostDigit);
printf("Number of occurrences = %d\n", max);

return 0;
}