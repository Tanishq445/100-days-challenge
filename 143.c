#include <stdio.h>

struct Student {
    char name[50];
    int roll;
    int marks;
};

int main() {
    struct Student s[100];
    int n, i, topper = 0;

    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        scanf("%s %d %d", s[i].name, &s[i].roll, &s[i].marks);
    }

    for (i = 1; i < n; i++) {
        if (s[i].marks > s[topper].marks) {
            topper = i;
        }
    }

    printf("Topper: %s (Marks: %d)", 
           s[topper].name, s[topper].marks);

    return 0;
}