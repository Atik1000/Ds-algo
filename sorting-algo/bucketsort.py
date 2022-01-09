def  bucketsort(alist):
    """
    >>> bucketsort([3,2,1,4,5])
    [1, 2, 3, 4, 5]
    """
    bucket = []
    for i in range(len(alist)):
        bucket.append([])
    for i in alist:
        bucket[i].append(i)
    alist = []
    for i in range(len(bucket)):
        alist += bucket[i]
    return alist
print(bucketsort([3,2,1,4,5]))