#include <stdio.h>
#include <stdbool.h>
#include <time.h>

int binarySearch(int arr[], int n, int target) {
    int left = 0;
    int right = n - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == target) {
            return mid; // Return the index where the element is found
        } else if (arr[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    return -1; // Return -1 if the element is not found
}

int main() {
    int n;

    printf("Enter the number of elements in the sorted array: ");
    scanf("%d", &n);

    int elements[n];

    printf("Enter %d sorted elements separated by spaces: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &elements[i]);
    }

    int target;
    printf("Enter the target element to search for: ");
    scanf("%d", &target);

    clock_t start_time = clock();
    int foundIndex = binarySearch(elements, n, target);
    clock_t end_time = clock();

    if (foundIndex != -1) {
        printf("Element %d found at index %d in the array.\n", target, foundIndex);
    } else {
        printf("Element %d not found in the array.\n", target);
    }

    double time_taken = ((double)(end_time - start_time)) / CLOCKS_PER_SEC;
    printf("Time taken: %f seconds\n", time_taken);

    return 0;
}
