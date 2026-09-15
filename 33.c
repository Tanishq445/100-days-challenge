#include <stdio.h> #include <math.h>

int main() { int num, originalNum, remainder, digits = 0; int sum = 0;

printf("Enter a number: ");
scanf("%d", &num);

originalNum = num;

// Count the number of digits
while (originalNum != 0) {
    digits++;
    originalNum /= 10;
}

originalNum = num;

// Calculate the sum of each digit raised to the power of digits
while (originalNum != 0) {
    remainder = originalNum % 10;
    sum += (int)pow(remainder, digits);
    originalNum /= 10;
}

if (sum == num)
    printf("%d is an Armstrong number.\n", num);
else
    printf("%d is not an Armstrong number.\n", num);

return 0;
}