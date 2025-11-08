#include <stdio.h>
// Recursive Binary Search Function
int binarySearchRecursive(int arr[], int low, int high, int key) {
    if (low > high)
        return -1; // Element not found
    int mid = (low + high) / 2;
    if (arr[mid] == key)
        return mid; // Element found
    else if (arr[mid] < key)
        return binarySearchRecursive(arr, mid + 1, high, key); // Search right half
    else
        return binarySearchRecursive(arr, low, mid - 1, key); // Search left half
}
int main() {
    int n, key;
    // Input array size
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int arr[n];
    // Input sorted elements
    printf("Enter %d sorted elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Input element to search
    printf("Enter element to search: ");
    scanf("%d", &key);
    // Perform binary search (recursive)
    int result = binarySearchRecursive(arr, 0, n - 1, key);
    // Print result
    if (result != -1)
        printf("Element %d found at index %d\n", key, result);
    else
        printf("Element %d not found in the array\n", key);
    return 0;
}
