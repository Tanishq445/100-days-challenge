#include <stdio.h>

int main()
{
    char str[100];
    int i, length = 0;
    int palindrome = 1;

    // Read string
    fgets(str, sizeof(str), stdin);

    // Find length of string
    while (str[length] != '\0' && str[length] != '\n')
    {
        length++;
    }

    // Check palindrome
    for (i = 0; i < length / 2; i++)
    {
        if (str[i] != str[length - i - 1])
        {
            palindrome = 0;
            break;
        }
    }

    // Display result
    if (palindrome == 1)
        printf("Palindrome");
    else
        printf("Not palindrome");

    return 0;
}