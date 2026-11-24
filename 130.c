
#include <stdio.h>

int main()
{
    FILE *fp;
    char name[50];
    int roll, marks, n, i;

    // Open file in write mode
    fp = fopen("students.txt", "w");

    if (fp == NULL)
    {
        printf("Error opening file");
        return 1;
    }

    // Input number of students
    scanf("%d", &n);

    // Input and store student records
    for (i = 0; i < n; i++)
    {
        scanf("%49s %d %d", name, &roll, &marks);
        fprintf(fp, "%s %d %d\n", name, roll, marks);
    }

    fclose(fp);

    // Open file in read mode
    fp = fopen("students.txt", "r");

    if (fp == NULL)
    {
        printf("Error opening file");
        return 1;
    }

    // Read and display student records
    while (fscanf(fp, "%49s %d %d",
                  name, &roll, &marks) == 3)
    {
        printf("Name: %s | Roll: %d | Marks: %d\n",
               name, roll, marks);
    }

    // Close file
    fclose(fp);

    return 0;
}

