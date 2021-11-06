num=[10,220,30,40,110,60,70,80,90,100]
print("Before Sorting:",num)
for i in range(len(num)-1):
    for j in range(len(num)-i-1):
        if num[j]>num[j+1]:
            num[j],num[j+1]=num[j+1],num[j]
print("After Sorting:",num)