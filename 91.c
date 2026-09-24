#include <stdio.h>

int main()
{
    char str[100];
    int i, j = 0;

    // Input string
    scanf("%s", str);

    // Remove vowels
    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] != 'a' && str[i] != 'e' &&
            str[i] != 'i' && str[i] != 'o' &&
            str[i] != 'u' && str[i] != 'A' &&
            str[i] != 'E' && str[i] != 'I' &&
            str[i] != 'O' && str[i] != 'U')
        {
            str[j] = str[i];
            j++;
        }
    }

    str[j] = '\0';

    // Print modified string
    printf("%s", str);

    return 0;
}