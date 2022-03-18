def linear_search(arr, n):
    for i in range(len(arr)):
        if arr[i] == n:
            return i+1
    return -1

print(linear_search([1, 2, 3, 4, 5,67, 89, 43, 94], 5))