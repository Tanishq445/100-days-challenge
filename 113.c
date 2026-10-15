#include <stdio.h>
#include <stdlib.h>

// Comparison function used by qsort to sort in ascending order
int compare(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}

// Function to find the kth smallest element
int findKthSmallest(int arr[], int n, int k) {
    // Sort the array in ascending order
    qsort(arr, n, sizeof(int), compare);
    
    // The kth smallest element will be at index k - 1
    return arr[k - 1];
}

int main() {
    // Test Case 1
    int arr1[] = {10, 5, 4, 3, 48, 6, 2, 33, 53, 10};
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    int k1 = 4;
    printf("Output 1: %d\n", findKthSmallest(arr1, n1, k1));

    // Test Case 2
    int arr2[] = {7, 10, 4, 3, 20, 15};
    int n2 = sizeof(arr2) / sizeof(arr2[0]);
    int k2 = 3;
    printf("Output 2: %d\n", findKthSmallest(arr2, n2, k2));

    return 0;
}
