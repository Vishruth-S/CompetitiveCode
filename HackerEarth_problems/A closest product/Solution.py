n,t = map(int,input().split())
a = list(map(int,input().split()))
b = list(map(int,input().split()))
matrix = [[0 for i in range(n)] for i in range(n)]
product = 0
original = []
for i in range(n):
    for j in range(n):
        matrix[i][j] = a[i]*b[j]
        if(i==j):
            product = product + matrix[i][i]
            original.append([i,i])
isFound = False
isPossible = True
while(isFound == False and isPossible == True):
    mi = -1
    mj = -1
    mp = -1
    mpt = -1
    if(product==t):
        break
    elif(product>t):
        isProduct = False
        for i in range(n):
            for j in range(i+1,n):
                temp = product - matrix[original[i][0]][original[i][1]] - matrix[original[j][0]][original[j][1]]+ matrix[original[i][0]][original[j][1]]+matrix[original[j][0]][original[i][1]]
                if(temp<t and temp>mpt):
                    mpt = temp 
                    mi = i
                    mj = j
                    isProduct = True
                elif(temp>t and temp<product and temp>mp and isProduct == False):
                    mp = temp 
                    mi = i
                    mj = j
                elif(temp == t):
                    mi = i
                    mj = j
                    isFound = True
                    break
            if(isFound):
                break
    else:
        for i in range(n):
            for j in range(i+1,n):
                temp = product - matrix[original[i][0]][original[i][1]] - matrix[original[j][0]][original[j][1]]+ matrix[original[i][0]][original[j][1]]+matrix[original[j][0]][original[i][1]]
                if(temp<t and temp>mpt):
                    mpt = temp 
                    mi = i
                    mj = j
                elif(temp == t):
                    mi = i
                    mj = j
                    isFound = True
                    break
            if(isFound):
                break

    if(mj==-1 and mi == -1):
        isPossible = False
    else:
        product = product - matrix[original[mi][0]][original[mi][1]] - matrix[original[mj][0]][original[mj][1]]+ matrix[original[mi][0]][original[mj][1]]+matrix[original[mj][0]][original[mi][1]]
        temp = original[mi][1]
        original[mi][1] = original[mj][1]
        original[mj][1] = temp

for i in range(n):
    print(a[original[i][0]],end=" ")
print("")
for i in range(n):
    print(b[original[i][1]],end = "")
