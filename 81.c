#include <stdio.h>

int main()
{
    char str[100];
    int count = 0;

    // Read string including spaces
    fgets(str, sizeof(str), stdin);

    // Count characters
    while (str[count] != '\0' && str[count] != '\n')
    {
        count++;
    }

    printf("%d", count);

    return 0;
}