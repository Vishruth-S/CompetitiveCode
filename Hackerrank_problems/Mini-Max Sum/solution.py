# Complete the miniMaxSum function below.

def miniMaxSum(arr):
    a=[]                              #empty list to add sum of numbers except the number of each element the list
    for i in range(len(arr)):
        if i==0:                      #checking for the empty list
            a=[sum(arr)-arr[i]]       #adding the first element in that empty list
        else:
            a.append(sum(arr)-arr[i]) #appending the sum for other elements

    print("{} {}".format(min(a),max(a)))  #printing the minimum of all the sums and maximum of all the sums



if __name__ == '__main__':
    arr = list(map(int, input().rstrip().split()))

    miniMaxSum(arr) #calling the function miniMaxSum(arr)
