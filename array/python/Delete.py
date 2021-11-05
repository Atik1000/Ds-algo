
number_array = [4, 2, 7, 9, 13,5]
print("=====Initial Array====")
for index, value in enumerate(number_array):
    print(index, value)

for index,enumerated_number in enumerate(number_array):
    if enumerated_number == 5:
        print("Found 5 at index:", index)
        del number_array[index]
        print("=====After Delete====")
print(number_array)