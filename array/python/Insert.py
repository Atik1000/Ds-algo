# Array Insert operations

number_array = [4, 5, 2, 7, 9, 13]
print("=====================Initial Array================")
for index, item in enumerate(number_array):
    print("Array=[", index, "]", item)

n=len(number_array)
k=3 # position of index to insert
item=15 # value to insert

while k>n:
    print("Invalid position")
    # k=int(input("Enter position to insert: "))

number_array.insert(k, item)
print("=====================Inserted Array================")
for index, item in enumerate(number_array):
    print("Array=[", index, "]", item)