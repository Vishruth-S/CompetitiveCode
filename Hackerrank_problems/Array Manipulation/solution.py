
#To decrease our runtime,instead of entering all the values into our array,we only 
# change the left and right endpoints in the array

def arrayManipulation(n, queries):
    arr = [0]*n
    for i in queries:
        arr[i[0] - 1] += i[2]          #The left endpoint is incremnted with the value
        if i[1] != len(arr):
            arr[i[1]] -= i[2]          #The right endpoint is decremented with the value
       
    val,tempval = 0,0                   
    for i in arr:                      
        tempval += i                    #The endpoints are added(negative values are effectively subtracted) 
        if tempval > val:               
            val = tempval               #The larger value is assigned to val thus giving us the max value
    return val


if __name__ == '__main__':


    nm = input().split()

    n = int(nm[0])

    m = int(nm[1])

    queries = []

    for _ in range(m):
        queries.append(list(map(int, input().rstrip().split())))

    result = arrayManipulation(n, queries)

    print(result)
