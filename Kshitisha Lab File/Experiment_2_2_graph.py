import matplotlib.pyplot as plt
import time
import random

def binary_search(arr, target):
    left = 0
    right = len(arr) - 1

    while left <= right:
        mid = left + (right - left) // 2

        if arr[mid] == target:
            return mid
        elif arr[mid] < target:
            left = mid + 1
        else:
            right = mid - 1

    return -1

def measure_time(arr, target):
    start_time = time.time()
    found_index = binary_search(arr, target)
    end_time = time.time()
    elapsed_time = end_time - start_time
    return len(arr), elapsed_time

array_sizes = []
elapsed_times = []

num_searches = int(input("Enter the number of searches: "))

for _ in range(num_searches):
    n = int(input("Enter the number of elements in the sorted array: "))
    elements = [random.randint(1, 1000) for _ in range(n)]
    target = random.randint(1, 1000)
    
    array_size, elapsed_time = measure_time(elements, target)
    array_sizes.append(array_size)
    elapsed_times.append(elapsed_time)

plt.figure(figsize=(10, 6))
plt.plot(array_sizes, label='Number of Elements', marker='o', linestyle='-')
plt.plot(elapsed_times, label='Elapsed Time (seconds)', marker='o', linestyle='-')
plt.title('Number of Elements vs. Elapsed Time (Binary Search)')
plt.xlabel('Search Iteration')
plt.ylabel('Value')
plt.legend()
plt.grid(True)

plt.show()
