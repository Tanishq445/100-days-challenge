#include <stdio.h>
#include <ctype.h>

void toTitleCase(char *str) {
    int newWord = 1; // Flag to track the start of a new word

    for (int i = 0; str[i] != '\0'; i++) {
        // If it's a whitespace character, the next character will start a new word
        if (isspace((unsigned char)str[i])) {
            newWord = 1;
        } 
        // If it's an alphanumeric character and marks the start of a word
        else if (newWord) {
            str[i] = toupper((unsigned char)str[i]);
            newWord = 0; // Turn off the flag until the next space
        } 
        // Otherwise, make sure the rest of the word is in lowercase (optional, based on standard title case)
        else {
            str[i] = tolower((unsigned char)str[i]);
        }
    }
}

int main() {
    char str[1000];

    printf("Enter a string: ");
    // Read the full line including spaces
    fgets(str, sizeof(str), stdin);

    // Remove the trailing newline character added by fgets if present
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == '\n') {
            str[i] = '\0';
            break;
        }
    }

    toTitleCase(str);

    printf("Output:\n%s\n", str);

    return 0;
}