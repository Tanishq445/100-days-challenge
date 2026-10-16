#include <stdio.h>
#include <string.h>

int lengthOfLongestSubstring(char* s) {
    int n = strlen(s);
    int maxLen = 0;
    int left = 0;
    // Array to store the last index of each ASCII character
    int lastIndex[256];
    for (int i = 0; i < 256; i++) {
        lastIndex[i] = -1;
    }

    for (int right = 0; right < n; right++) {
        unsigned char currentChar = s[right];
        if (lastIndex[currentChar] >= left) {
            left = lastIndex[currentChar] + 1;
        }
        lastIndex[currentChar] = right;
        int currentLen = right - left + 1;
        if (currentLen > maxLen) {
            maxLen = currentLen;
        }
    }
    return maxLen;
}

int main() {
    char s[1000];
    if (scanf("%999s", s) == 1) {
        printf("%d\n", lengthOfLongestSubstring(s));
    }
    return 0;
}
