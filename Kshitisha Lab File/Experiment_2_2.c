#include <stdio.h>
#include <time.h>

void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j+1]) {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

int main() {
    int elements[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(elements) / sizeof(elements[0]);

    clock_t start_time = clock();
    bubbleSort(elements, n);
    clock_t end_time = clock();

    printf("Sorted array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", elements[i]);
    }
    printf("\n");

    double time_taken = ((double)(end_time - start_time)) / CLOCKS_PER_SEC;
    printf("Time taken: %f seconds\n", time_taken);

    return 0;
}