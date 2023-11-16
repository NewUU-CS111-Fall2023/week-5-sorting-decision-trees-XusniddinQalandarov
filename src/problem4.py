def count_elements_with_smaller_neighbors(arr):
    count = 0
    n = len(arr)
    
    for i in range(1, n - 1):
        if arr[i] > arr[i - 1] and arr[i] > arr[i + 1]:
            count += 1
    
    return count

arr = [5, 2, 8, 1, 4, 6]
count = count_elements_with_smaller_neighbors(arr)
print("Count of elements where both adjacent neighbors are smaller:", count)
