
nums=[1,2,3,44,45,59]
find=47
index=-1
for i in range(len(nums)):
    if nums[i]==find:
        index=i+1
        break
    else:
        index=-1
print(index)