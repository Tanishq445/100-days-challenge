#include <stdio.h>

int main()
{
    int day, month, year;

    // Input date
    scanf("%d/%d/%d", &day, &month, &year);

    // Display date in required format
    if (month == 4)
    {
        printf("%02d-Apr-%d", day, year);
    }

    return 0;
}