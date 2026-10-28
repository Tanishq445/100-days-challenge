#include <stdio.h>

int main()
{
    FILE *fp;
    char filename[100];
    char ch;

    // Input filename
    scanf("%99s", filename);

    // Open file in read mode
    fp = fopen(filename, "r");

    // Check if file exists
    if (fp == NULL)
    {
        printf("Error: File does not exist!");
        return 1;
    }

    printf("File opened successfully.\n");

    // Read and display file content
    while ((ch = fgetc(fp)) != EOF)
    {
        printf("%c", ch);
    }

    // Close file
    fclose(fp);

    return 0;
}