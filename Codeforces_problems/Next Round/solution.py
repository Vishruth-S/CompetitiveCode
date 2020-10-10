n, k = map(int, input().split()) #taking number of elements and k as input
x = []
x = [int(x) for x in input().split()] #inputting elements in list x[]

count = 0 #initialising count to 0

for i in x:
    if i>=x[k-1] and i>0: #checking if score is greater than kth place score and positive
        count=count+1

print(count) #final count of participants advancing to next round