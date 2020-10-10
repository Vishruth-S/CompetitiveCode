n = int(input()) #taking number of test cases as input
sures = [] #list for appending sureties of all 3
count = 0
for i in range(0,n):
    x = [int(x) for x in input().split()] #taking 3 elements as list together and appending in list sures[]
    sures.append(x)
    if x.count(1)>=2: #if more than 2 people are sure, that means the problem can be solved
        count=count+1

print(count) #printing final count on how many problems can be solved