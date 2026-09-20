#include <stdio.h>

int main()
{
    char str[100];
    int i = 0;

    // Read string
    fgets(str, sizeof(str), stdin);

    // Convert lowercase characters to uppercase
    while (str[i] != '\0' && str[i] != '\n')
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] = str[i] - 32;
        }

        i++;
    }

    // Print uppercase string
    printf("%s", str);

    return 0;
}