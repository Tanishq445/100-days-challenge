#include <stdio.h>
#include <stdlib.h>

int main() {
    char sourceFile[100], destFile[100];
    FILE *sourcePtr, *destPtr;
    int ch;

    // Get filenames from the user
    printf("Enter source file name: ");
    scanf("%s", sourceFile);

    printf("Enter destination file name: ");
    scanf("%s", destFile);

    // Open source file in read mode
    sourcePtr = fopen(sourceFile, "r");
    if (sourcePtr == NULL) {
        printf("Error: Could not open source file '%s'.\n", sourceFile);
        return 1;
    }

    // Open destination file in write mode
    destPtr = fopen(destFile, "w");
    if (destPtr == NULL) {
        printf("Error: Could not open destination file '%s'.\n", destFile);
        fclose(sourcePtr);
        return 1;
    }

    // Copy contents character by character
    while ((ch = fgetc(sourcePtr)) != EOF) {
        fputc(ch, destPtr);
    }

    // Close both files
    fclose(sourcePtr);
    fclose(destPtr);

    printf("File copied successfully to %s.\n", destFile);

    return 0;
}
