
#include <stdio.h>

int main()
{
    char str[100], temp;
    int i, length = 0;

    // Read string
    fgets(str, sizeof(str), stdin);

    // Find length of string
    while (str[length] != '\0' && str[length] != '\n')
    {
        length++;
    }

    // Reverse the string
    for (i = 0; i < length / 2; i++)
    {
        temp = str[i];
        str[i] = str[length - i - 1];
        str[length - i - 1] = temp;
    }

    // Print reversed string
    for (i = 0; i < length; i++)
    {
        printf("%c", str[i]);
    }

    return 0;
}