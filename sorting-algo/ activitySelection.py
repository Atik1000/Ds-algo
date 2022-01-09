

def printMaxActivities(s, f):
    n = len(f)
    i = 0
    print (i, end = " ")
    for j in range(n):
        if s[j] >= f[i]:
            print ('activities=====',j,'\n') 
            i = j


s = [1, 3, 0, 5, 8, 5, 6, 8, 9, 10]
f = [2, 4, 6, 7, 9, 9, 10, 11, 12, 13]
printMaxActivities(s, f)


