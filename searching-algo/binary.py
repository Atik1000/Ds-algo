def binary_search(arr, n):
    l = 0
    r = len(arr) - 1
    while l <= r:
        mid = (l + r) // 2
        if arr[mid] == n:
            return mid+1
        elif arr[mid] < n:
            l = mid + 1
        else:
            r = mid - 1
    return -1

print(binary_search([1, 2, 3, 4, 5,67, 89, 43, 94], 5))