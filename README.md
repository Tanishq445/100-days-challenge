//First day program

Q1: Write a program to input two numbers and display their sum.

/*
Sample Test Cases:
Input 1:
3 4
Output 1:
Sum = 7
*/

#include <stdio.h>

int main() {
    int num1, num2, sum;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    sum = num1 + num2;

    printf("Sum = %d", sum);

    return 0;
}


Q2: Write a program to input two numbers and display their sum, difference, product, and quotient.

/*
Sample Test Cases:
Input 1:
10 2
Output 1:
Sum=12, Diff=8, Product=20, Quotient=5
*/

#include <stdio.h>

int main() {
    float num1, num2;

    printf("Enter two numbers: ");
    scanf("%f %f", &num1, &num2);

    printf("Sum = %.2f\n", num1 + num2);
    printf("Difference = %.2f\n", num1 - num2);
    printf("Product = %.2f\n", num1 * num2);

    if (num2 != 0)
        printf("Quotient = %.2f\n", num1 / num2);
    else
        printf("Quotient = Cannot divide by zero\n");

    return 0;
}

//Second day program

Q3: Write a program to calculate the area and perimeter of a rectangle given its length and breadth.

/*
Sample Test Cases:
Input 1:
5 10
Output 1:
Area=50, Perimeter=30
*/

#include <stdio.h>

int main() {
    float length, breadth, area, perimeter;

    printf("Enter length: ");
    scanf("%f", &length);

    printf("Enter breadth: ");
    scanf("%f", &breadth);

    area = length * breadth;
    perimeter = 2 * (length + breadth);

    printf("Area of rectangle = %.2f\n", area);
    printf("Perimeter of rectangle = %.2f\n", perimeter);

    return 0;
}

Q4: Write a program to calculate the area and circumference of a circle given its radius.

/*
Sample Test Cases:
Input 1:
7
Output 1:
Area=153.94, Circumference=43.96
*/

#include <stdio.h>

int main() {
    float radius, area, circumference;
    float pi = 3.14;

    printf("Enter radius: ");
    scanf("%f", &radius);

    area = pi * radius * radius;
    circumference = 2 * pi * radius;

    printf("Area of circle = %.2f\n", area);
    printf("Circumference of circle = %.2f\n", circumference);

    return 0;
}

// third day program

Q5: Write a program to convert temperature from Celsius to Fahrenheit.

/*
Sample Test Cases:
Input 1:
0
Output 1:
Fahrenheit=32
*/

#include <stdio.h>

int main() {
    float celsius, fahrenheit;

    printf("Enter temperature in Celsius: ");
    scanf("%f", &celsius);

    fahrenheit = (celsius * 9 / 5) + 32;

    printf("Temperature in Fahrenheit = %.2f\n", fahrenheit);

    return 0;
}

Q6: Write a program to swap two numbers using a third variable.

/*
Sample Test Cases:
Input 1:
3 5
Output 1:
After swap: 5 3
*/
#include <stdio.h>

int main() {
    int a, b, temp;

    printf("Enter first number: ");
    scanf("%d", &a);

    printf("Enter second number: ");
    scanf("%d", &b);

    // Swapping using third variable
    temp = a;
    a = b;
    b = temp;

    printf("After swapping:\n");
    printf("First number = %d\n", a);
    printf("Second number = %d\n", b);

    return 0;
}

//forth day program

Q7: Write a program to swap two numbers without using a third variable.

/*
Sample Test Cases:
Input 1:
10 20
Output 1:
After swap: 20 10
*/

#include <stdio.h>

int main() {
    int a, b;

    printf("Enter first number: ");
    scanf("%d", &a);

    printf("Enter second number: ");
    scanf("%d", &b);

    // Swapping without third variable
    a = a + b;
    b = a - b;
    a = a - b;

    printf("After swapping:\n");
    printf("First number = %d\n", a);
    printf("Second number = %d\n", b);

    return 0;
}

Q8: Write a program to find and display the sum of the first n natural numbers.

/*
Sample Test Cases:
Input 1:
5
Output 1:
Sum=15
*/

#include <stdio.h>

int main() {
    int n, sum;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    sum = n * (n + 1) / 2;

    printf("Sum of first %d natural numbers = %d\n", n, sum);

    return 0;
}

//fifth day program

Q9: Write a program to calculate simple and compound interest for given principal, rate, and time.

/*
Sample Test Cases:
Input 1:
1000 5 2
Output 1:
Simple Interest=100, Compound Interest=102.5
*/

#include <stdio.h>
#include <math.h>

int main() {
    float principal, rate, time;
    float simpleInterest, compoundInterest;

    printf("Enter principal amount: ");
    scanf("%f", &principal);

    printf("Enter rate of interest: ");
    scanf("%f", &rate);

    printf("Enter time in years: ");
    scanf("%f", &time);

    simpleInterest = (principal * rate * time) / 100;

    compoundInterest = principal * pow((1 + rate / 100), time) - principal;

    printf("Simple Interest = %.2f\n", simpleInterest);
    printf("Compound Interest = %.2f\n", compoundInterest);

    return 0;
}

Q10: Write a program to input time in seconds and convert it to hours:minutes:seconds format.

/*
Sample Test Cases:
Input 1:
3661
Output 1:
1:1:1
*/

#include <stdio.h>

int main() {
    int totalSeconds, hours, minutes, seconds;

    printf("Enter time in seconds: ");
    scanf("%d", &totalSeconds);

    hours = totalSeconds / 3600;
    minutes = (totalSeconds % 3600) / 60;
    seconds = totalSeconds % 60;

    printf("Time = %02d:%02d:%02d\n", hours, minutes, seconds);

    return 0;
}

// sixth day program

Q11: Write a program to input an integer and check whether it is even or odd using if–else.

/*
Sample Test Cases:
Input 1:
7
Output 1:
7 is odd
*/

#include <stdio.h>

int main() {
    int num;

    printf("Enter an integer: ");
    scanf("%d", &num);

    if (num % 2 == 0) {
        printf("%d is Even.\n", num);
    } else {
        printf("%d is Odd.\n", num);
    }

    return 0;
}

Q12: Write a program to input an integer and check whether it is positive, negative or zero using nested if–else.

/*
Sample Test Cases:
Input 1:
-5
Output 1:
Negative
*/

#include <stdio.h>

int main() {
    int num;

    printf("Enter an integer: ");
    scanf("%d", &num);

    if (num >= 0) {
        if (num == 0) {
            printf("The number is Zero.\n");
        } else {
            printf("The number is Positive.\n");
        }
    } else {
        printf("The number is Negative.\n");
    }

    return 0;
}

//seventh day program

Q13: Write a program to input a year and check whether it is a leap year or not using conditional statements.

/*
Sample Test Cases:
Input 1:
2020
Output 1:
Leap year
*/

#include <stdio.h>

int main() {
    int year;

    printf("Enter a year: ");
    scanf("%d", &year);

    if (year % 400 == 0) {
        printf("%d is a Leap Year.\n", year);
    }
    else if (year % 100 == 0) {
        printf("%d is not a Leap Year.\n", year);
    }
    else if (year % 4 == 0) {
        printf("%d is a Leap Year.\n", year);
    }
    else {
        printf("%d is not a Leap Year.\n", year);
    }

    return 0;
}

Q14: Write a program to input a character and check whether it is a vowel or consonant using if–else.

/*
Sample Test Cases:
Input 1:
a
Output 1:
Vowel
*/

#include <stdio.h>

int main() {
    char ch;

    printf("Enter a character: ");
    scanf(" %c", &ch);

    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
        ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
        
        printf("%c is a Vowel.\n", ch);
    }
    else {
        printf("%c is a Consonant.\n", ch);
    }

    return 0;
}

// eighth day program

Q15: Write a program to input a character and check whether it is an uppercase alphabet, lowercase alphabet, digit, or special character.

/*
Sample Test Cases:
Input 1:
A
Output 1:
Uppercase alphabet

Input 2:
a
Output 2:
Lowercase alphabet
*/

#include <stdio.h>

int main() {
    char ch;

    printf("Enter a character: ");
    scanf("%c", &ch);

    if (ch >= 'A' && ch <= 'Z') {
        printf("%c is an Uppercase Alphabet.\n", ch);
    }
    else if (ch >= 'a' && ch <= 'z') {
        printf("%c is a Lowercase Alphabet.\n", ch);
    }
    else if (ch >= '0' && ch <= '9') {
        printf("%c is a Digit.\n", ch);
    }
    else {
        printf("%c is a Special Character.\n", ch);
    }

    return 0;
}

Q16: Write a program to input three numbers and find the largest among them using if–else.

/*
Sample Test Cases:
Input 1:
3 7 5
Output 1:
Largest is 7

Input 2:
-1 -5 0
Output 2:
Largest is 0
*/

#include <stdio.h>

int main() {
    int a, b, c;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a >= b && a >= c) {
        printf("Largest number = %d\n", a);
    }
    else if (b >= a && b >= c) {
        printf("Largest number = %d\n", b);
    }
    else {
        printf("Largest number = %d\n", c);
    }

    return 0;
}

// ninth day program

Q17: Write a program to find the roots of a quadratic equation and categorize them.

/*
Sample Test Cases:
Input 1:
1 -3 2
Output 1:
Roots are real and different: 2, 1

Input 2:
1 -2 1
Output 2:
Roots are real and same: 1
*/

#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c, discriminant, root1, root2, realPart, imaginaryPart;

    printf("Enter coefficients a, b and c: ");
    scanf("%f %f %f", &a, &b, &c);

    if (a == 0) {
        printf("Not a quadratic equation.\n");
        return 0;
    }

    discriminant = b * b - 4 * a * c;

    if (discriminant > 0) {
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);

        printf("Roots are Real and Distinct.\n");
        printf("Root 1 = %.2f\n", root1);
        printf("Root 2 = %.2f\n", root2);
    }
    else if (discriminant == 0) {
        root1 = -b / (2 * a);

        printf("Roots are Real and Equal.\n");
        printf("Root 1 = Root 2 = %.2f\n", root1);
    }
    else {
        realPart = -b / (2 * a);
        imaginaryPart = sqrt(-discriminant) / (2 * a);

        printf("Roots are Complex and Imaginary.\n");
        printf("Root 1 = %.2f + %.2fi\n", realPart, imaginaryPart);
        printf("Root 2 = %.2f - %.2fi\n", realPart, imaginaryPart);
    }

    return 0;
}

Q18: Write a program that accepts a percentage (0-100) and assigns a grade based on the following criteria: 
90-100: Grade A 
80-89: Grade B 
70-79: Grade C 
60-69: Grade D 
below 60: Grade F.

/*
Sample Test Cases:
Input 1:
95
Output 1:
Grade A

Input 2:
82
Output 2:
Grade B
*/

#include <stdio.h>

int main() {
    float percentage;

    printf("Enter percentage (0-100): ");
    scanf("%f", &percentage);

    if (percentage < 0 || percentage > 100) {
        printf("Invalid percentage!\n");
    }
    else if (percentage >= 90) {
        printf("Grade A\n");
    }
    else if (percentage >= 80) {
        printf("Grade B\n");
    }
    else if (percentage >= 70) {
        printf("Grade C\n");
    }
    else if (percentage >= 60) {
        printf("Grade D\n");
    }
    else {
        printf("Grade F\n");
    }

    return 0;
}

// tenth day program

Q19: Write a program to classify a triangle as Equilateral, Isosceles, or Scalene based on its side lengths.

/*
Sample Test Cases:
Input 1:
3 3 3
Output 1:
Equilateral

Input 2:
3 3 4
Output 2:
Isosceles
*/

#include <stdio.h>

int main() {
    float side1, side2, side3;

    printf("Enter the three sides of the triangle: ");
    scanf("%f %f %f", &side1, &side2, &side3);

    // Check if the sides form a valid triangle
    if ((side1 + side2 > side3) &&
        (side1 + side3 > side2) &&
        (side2 + side3 > side1)) {

        if (side1 == side2 && side2 == side3) {
            printf("The triangle is Equilateral.\n");
        }
        else if (side1 == side2 || side1 == side3 || side2 == side3) {
            printf("The triangle is Isosceles.\n");
        }
        else {
            printf("The triangle is Scalene.\n");
        }
    }
    else {
        printf("The given sides do not form a valid triangle.\n");
    }

    return 0;
}

Q20: Write a program to display the day of the week based on a number (1–7) using switch-case.

/*
Sample Test Cases:
Input 1:
1
Output 1:
Monday

Input 2:
5
Output 2:
Friday
*/

#include <stdio.h>

int main() {
    int day;

    printf("Enter a number (1-7): ");
    scanf("%d", &day);

    switch (day) {
        case 1:
            printf("Monday\n");
            break;
        case 2:
            printf("Tuesday\n");
            break;
        case 3:
            printf("Wednesday\n");
            break;
        case 4:
            printf("Thursday\n");
            break;
        case 5:
            printf("Friday\n");
            break;
        case 6:
            printf("Saturday\n");
            break;
        case 7:
            printf("Sunday\n");
            break;
        default:
            printf("Invalid input! Please enter a number between 1 and 7.\n");
    }

    return 0;
}

Q21: Write a program to display the month name and number of days using switch-case for a given month number.

/*
Sample Test Cases:
Input 1:
2
Output 1:
February, 28 days

Input 2:
12
Output 2:
December, 31 days
*/

#include <stdio.h>

int main() {
    int month;

    printf("Enter month number (1-12): ");
    scanf("%d", &month);

    switch (month) {
        case 1:
            printf("January - 31 days\n");
            break;
        case 2:
            printf("February - 28 or 29 days\n");
            break;
        case 3:
            printf("March - 31 days\n");
            break;
        case 4:
            printf("April - 30 days\n");
            break;
        case 5:
            printf("May - 31 days\n");
            break;
        case 6:
            printf("June - 30 days\n");
            break;
        case 7:
            printf("July - 31 days\n");
            break;
        case 8:
            printf("August - 31 days\n");
            break;
        case 9:
            printf("September - 30 days\n");
            break;
        case 10:
            printf("October - 31 days\n");
            break;
        case 11:
            printf("November - 30 days\n");
            break;
        case 12:
            printf("December - 31 days\n");
            break;
        default:
            printf("Invalid month number! Please enter a number between 1 and 12.\n");
    }

    return 0;
}

Q22: Write a program to find profit or loss percentage given cost price and selling price.

/*
Sample Test Cases:
Input 1:
1000 1200
Output 1:
Profit 20%

Input 2:
1000 800
Output 2:
Loss 20%

Input 3:
1000 1000
Output 3:
No Profit No Loss
*/

#include <stdio.h>

int main() {
    float costPrice, sellingPrice, profit, loss, percentage;

    printf("Enter Cost Price: ");
    scanf("%f", &costPrice);

    printf("Enter Selling Price: ");
    scanf("%f", &sellingPrice);

    if (sellingPrice > costPrice) {
        profit = sellingPrice - costPrice;
        percentage = (profit / costPrice) * 100;
        printf("Profit = %.2f\n", profit);
        printf("Profit Percentage = %.2f%%\n", percentage);
    }
    else if (sellingPrice < costPrice) {
        loss = costPrice - sellingPrice;
        percentage = (loss / costPrice) * 100;
        printf("Loss = %.2f\n", loss);
        printf("Loss Percentage = %.2f%%\n", percentage);
    }
    else {
        printf("No Profit, No Loss.\n");
    }

    return 0;
}

// twelveth day program

Q23: Write a program to calculate library fine based on late days as follows: 
First 5 days late: ₹2/day 
Next 5 days late: ₹4/day 
Next 20 days days late: ₹6/day 
More than 30 days: Membership Cancelled.

/*
Sample Test Cases:
Input 1:
4
Output 1:
Fine ₹8

Input 2:
8
Output 2:
Fine ₹22
*/

#include <stdio.h>

int main() {
    int daysLate, fine = 0;

    printf("Enter the number of late days: ");
    scanf("%d", &daysLate);

    if (daysLate < 0) {
        printf("Invalid input!\n");
    }
    else if (daysLate <= 5) {
        fine = daysLate * 2;
        printf("Library Fine = Rs. %d\n", fine);
    }
    else if (daysLate <= 10) {
        fine = (5 * 2) + (daysLate - 5) * 4;
        printf("Library Fine = Rs. %d\n", fine);
    }
    else if (daysLate <= 30) {
        fine = (5 * 2) + (5 * 4) + (daysLate - 10) * 6;
        printf("Library Fine = Rs. %d\n", fine);
    }
    else {
        printf("Membership Cancelled.\n");
    }

    return 0;
}

Q24: Write a program to calculate electricity bill based on units consumed with these rates: 
First 100 units at ₹5/unit 
Next 100 units at ₹7/unit 
Next 100 units at ₹10/unit 
Above at ₹12/unit

/*
Sample Test Cases:
Input 1:
50
Output 1:
Bill: ₹250

Input 2:
150
Output 2:
Bill: ₹850
*/

#include <stdio.h>

int main() {
    int units;
    float bill;

    printf("Enter electricity units consumed: ");
    scanf("%d", &units);

    if (units < 0) {
        printf("Invalid input!\n");
    }
    else if (units <= 100) {
        bill = units * 5;
    }
    else if (units <= 200) {
        bill = (100 * 5) + (units - 100) * 7;
    }
    else if (units <= 300) {
        bill = (100 * 5) + (100 * 7) + (units - 200) * 10;
    }
    else {
        bill = (100 * 5) + (100 * 7) + (100 * 10) + (units - 300) * 12;
    }

    if (units >= 0)
        printf("Electricity Bill = Rs. %.2f\n", bill);

    return 0;
}

// thirteen day program 

