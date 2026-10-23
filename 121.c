#include <stdio.h>

int main() {
    char name[50];
    int age;

    // Open info.txt in write mode
    FILE *fptr = fopen("info.txt", "w");

    // Check if the file opened successfully
    if (fptr == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    // Get user input for name and age
    printf("Enter Name: ");
    scanf("%s", name);

    printf("Enter Age: ");
    scanf("%d", &age);

    // Write name and age to the file using fprintf()
    fprintf(fptr, "Name: %s, Age: %d\n", name, age);

    // Close the file
    fclose(fptr);

    // Display confirmation message
    printf("File created successfully!\nData written to info.txt\n");

    return 0;
}
