#include <stdio.h>
#include <stdbool.h>
#include <time.h>

bool linearSearch(int arr[], int n, int target) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == target) {
            return true;
        }
    }
    return false;
}

int main() {
    int elements[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(elements) / sizeof(elements[0]);
    int target = 22;

    clock_t start_time = clock();
    bool found = linearSearch(elements, n, target);
    clock_t end_time = clock();

    if (found) {
        printf("Element %d found in the array.\n", target);
    } else {
        printf("Element %d not found in the array.\n", target);
    }

    double time_taken = ((double)(end_time - start_time)) / CLOCKS_PER_SEC;
    printf("Time taken: %f seconds\n", time_taken);

    return 0;
}