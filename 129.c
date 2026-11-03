
#include <stdio.h>

int main()
{
    FILE *fp;
    int num, sum = 0, count = 0;
    float average;

    // Open file in read mode
    fp = fopen("numbers.txt", "r");

    if (fp == NULL)
    {
        printf("Error opening file");
        return 1;
    }

    // Read integers from file
    while (fscanf(fp, "%d", &num) == 1)
    {
        sum = sum + num;
        count++;
    }

    // Calculate average
    if (count > 0)
    {
        average = (float)sum / count;

        printf("Sum = %d\n", sum);
        printf("Average = %.2f", average);
    }
    else
    {
        printf("File is empty");
    }

    // Close file
    fclose(fp);

    return 0;
}

