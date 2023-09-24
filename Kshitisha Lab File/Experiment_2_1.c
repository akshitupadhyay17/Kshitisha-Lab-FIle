#include <stdio.h>
#include <stdbool.h>
#include <time.h>

int linearSearch(int arr[], int n, int target) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == target) {
            return i;
        }
    }
    return -1;
}

int main() {
    int n;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int elements[n];

    printf("Enter %d elements separated by spaces: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &elements[i]);
    }

    int target;
    printf("Enter the target element to search for: ");
    scanf("%d", &target);

    clock_t start_time = clock();
    int foundIndex = linearSearch(elements, n, target);
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
