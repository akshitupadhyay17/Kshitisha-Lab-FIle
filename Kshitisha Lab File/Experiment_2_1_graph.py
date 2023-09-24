import matplotlib.pyplot as plt
import time

def linear_search(arr, target):
    for i, num in enumerate(arr):
        if num == target:
            return i
    return -1

def measure_time(n, target):
    elements = list(range(1, n + 1))  # Create an array of n elements (1, 2, 3, ..., n)
    start_time = time.time()
    found_index = linear_search(elements, target)
    end_time = time.time()
    elapsed_time = end_time - start_time
    return n, elapsed_time

# Initialize variables
array_sizes = []
elapsed_times = []

# Input the number of searches
num_searches = int(input("Enter the number of searches: "))

# Input the search targets and measure time for different array sizes
for _ in range(num_searches):
    n = int(input("Enter the number of elements in the array: "))
    target = int(input("Enter the target element to search for: "))
    
    array_size, elapsed_time = measure_time(n, target)
    array_sizes.append(array_size)
    elapsed_times.append(elapsed_time)

# Create a line plot with two separate lines
plt.figure(figsize=(10, 6))
plt.plot(array_sizes, label='Number of Elements', marker='o', linestyle='-')
plt.plot(elapsed_times, label='Elapsed Time (seconds)', marker='o', linestyle='-')
plt.title('Number of Elements vs. Elapsed Time')
plt.xlabel('Search Iteration')
plt.ylabel('Value')
plt.legend()
plt.grid(True)

# Show the plot
plt.show()
