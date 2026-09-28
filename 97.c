#include <stdio.h>

int main()
{
    char name[100];
    int i;

    // Input full name
    fgets(name, sizeof(name), stdin);

    // Print first initial
    printf("%c.", name[0]);

    // Find and print initials after spaces
    for (i = 1; name[i] != '\0'; i++)
    {
        if (name[i - 1] == ' ' && name[i] != ' ')
        {
            printf("%c.", name[i]);
        }
    }

    return 0;
}