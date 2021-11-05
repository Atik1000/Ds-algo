num1=[10,20,30,40,50]
num2=[]
for i in range(len(num1)-1,-1,-1):
    num2.append(num1[i])

for j in range(len(num2)):
    print(num2[j],end=" ")