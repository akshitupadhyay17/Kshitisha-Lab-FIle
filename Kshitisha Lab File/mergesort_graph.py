import matplotlib.pyplot as plt
import time
import random

def merge(arr, p, q, r):
    n1 = q - p + 1
    n2 = r - q

    L = [0] * (n1 + 1)
    R = [0] * (n2 + 1)

    for i in range(n1):
        L[i] = arr[p + i]

    for j in range(n2):
        R[j] = arr[q + j + 1]

    L[n1] = float('inf')
    R[n2] = float('inf')

    i = j = 0

    for k in range(p, r + 1):
        if L[i] <= R[j]:
            arr[k] = L[i]
            i += 1
        else:
            arr[k] = R[j]
            j += 1

def merge_sort(arr, p, r):
    if p < r:
        q = (p + r) // 2
        merge_sort(arr, p, q)
        merge_sort(arr, q + 1, r)
        merge(arr, p, q, r)

def measure_time(arr):
    start_time = time.time()
    merge_sort(arr, 0, len(arr) - 1)
    end_time = time.time()
    elapsed_time = end_time - start_time
    return len(arr), elapsed_time

array_sizes = []
elapsed_times = []

num_searches = int(input("Enter the number of searches: "))

for _ in range(num_searches):
    n = int(input("Enter the number of elements in the array: "))
    elements = [random.randint(1, 1000) for _ in range(n)]
    
    array_size, elapsed_time = measure_time(elements)
    array_sizes.append(array_size)
    elapsed_times.append(elapsed_time)

plt.figure(figsize=(10, 6))
plt.plot(array_sizes, label='Number of Elements', marker='o', linestyle='-')
plt.plot(elapsed_times, label='Elapsed Time (seconds)', marker='o', linestyle='-')
plt.title('Number of Elements vs. Elapsed Time (Merge Sort)')
plt.xlabel('Search Iteration')
plt.ylabel('Value')
plt.legend()
plt.grid(True)

plt.show()
