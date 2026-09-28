#include <stdio.h>
#include <string.h>

int main()
{
    char name[100];
    int i, lastSpace = -1;

    // Input full name
    fgets(name, sizeof(name), stdin);

    // Remove newline character
    name[strcspn(name, "\n")] = '\0';

    // Find the last space
    for (i = 0; name[i] != '\0'; i++)
    {
        if (name[i] == ' ')
        {
            lastSpace = i;
        }
    }

    // Print initials before surname
    printf("%c.", name[0]);

    for (i = 1; i < lastSpace; i++)
    {
        if (name[i - 1] == ' ' && name[i] != ' ')
        {
            printf("%c.", name[i]);
        }
    }

    // Print surname in full
    printf(" %s", &name[lastSpace + 1]);

    return 0;
}