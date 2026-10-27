#include <stdio.h>

int main()
{
    FILE *fp;
    char text[200];

    // Open file in append mode
    fp = fopen("data.txt", "a");

    // Check if file opened successfully
    if (fp == NULL)
    {
        printf("Error opening file");
        return 1;
    }

    // Input text from user
    fgets(text, sizeof(text), stdin);

    // Append text to file
    fputc('\n', fp);
    fputs(text, fp);

    // Close file
    fclose(fp);

    printf("File updated successfully with appended text.");

    return 0;
}