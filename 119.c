#include <stdio.h>
#include <stdbool.h>

#define MAX_VAL 100000 // Adjust based on the maximum expected element value

int findRepeatedElement(int nums[], int size) {
    // Boolean array to keep track of seen elements, initialized to false
    static bool seen[MAX_VAL] = {false}; 
    
    for (int i = 0; i < size; i++) {
        // If the element has been seen before, it is the duplicate
        if (seen[nums[i]]) {
            return nums[i];
        }
        // Mark the current element as seen
        seen[nums[i]] = true;
    }
    
    return -1; // Return -1 if no repeated element is found
}

int main() {
    // Test Case 1
    int nums1[] = {1, 3, 3, 4};
    int size1 = sizeof(nums1) / sizeof(nums1[0]);
    printf("Output 1: %d\n", findRepeatedElement(nums1, size1));

    // Test Case 2
    int nums2[] = {1, 2, 2};
    int size2 = sizeof(nums2) / sizeof(nums2[0]);
    printf("Output 2: %d\n", findRepeatedElement(nums2, size2));

    // Test Case 3
    int nums3[] = {0, 4, 1, 1, 5};
    int size3 = sizeof(nums3) / sizeof(nums3[0]);
    printf("Output 3: %d\n", findRepeatedElement(nums3, size3));

    return 0;
}
