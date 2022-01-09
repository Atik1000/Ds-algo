def radixsort(arr):
    """
    Radix sort is a non-comparative integer sorting algorithm.
    It sorts data with integer keys by grouping keys that have the same number of digits and value.
    """
    # Find the maximum number to know number of digits
    max_num = max(arr)
    max_digits = len(str(max_num))

    # Do counting sort for every digit. Note that instead of passing digit number,
    # we pass a function, that will return the digit at given index.
    for digit in range(max_digits):
        # Create a list of empty lists
        buckets = [[] for _ in range(10)]

        # Sort the numbers based on their ith digit
        for num in arr:
            # Get the ith digit
            curr_digit = (num // (10 ** digit)) % 10

            # Append to corresponding bucket
            buckets[curr_digit].append(num)

        # Concatenate all the lists in the buckets
        arr = [num for bucket in buckets for num in bucket]

    return arr
print(radixsort([3,2,1,4,5]))