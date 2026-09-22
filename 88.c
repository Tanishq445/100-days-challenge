#include <stdio.h>

int main()
{
    char str[100];
    int i = 0;

    // Read string
    fgets(str, sizeof(str), stdin);

    // Replace spaces with hyphens
    while (str[i] != '\0' && str[i] != '\n')
    {
        if (str[i] == ' ')
        {
            str[i] = '-';
        }

        i++;
    }

    // Print modified string
    printf("%s", str);

    return 0;
}