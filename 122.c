#include <stdio.h>

int main()
{
    FILE *fp;
    char str[100];

    // Open file in read mode
    fp = fopen("info.txt", "r");

    // Check if file exists
    if (fp == NULL)
    {
        printf("File not found");
        return 1;
    }

    // Read file until EOF
    while (fgets(str, sizeof(str), fp) != NULL)
    {
        printf("%s", str);
    }

    // Close the file
    fclose(fp);

    return 0;
}