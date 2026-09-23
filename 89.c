#include <stdio.h>

int main()
{
    char str[100], ch;
    int i, count = 0;

    // Input string
    scanf("%s", str);

    // Input character
    scanf(" %c", &ch);

    // Count frequency
    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == ch)
        {
            count++;
        }
    }

    // Print frequency
    printf("%d", count);

    return 0;
}