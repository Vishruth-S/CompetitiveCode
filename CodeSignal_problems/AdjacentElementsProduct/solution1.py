#


# working
    # this function takes list as input
    # we declare a variable (Amax) to store local max of adjacent number
    # we run the loop from 0 to length - 1 of the array
    # we check if previously know max was lesser or greater than recently calculated max (multiplying the adjacent numbers)
    # and update the max respectively

def FindAdjacentMax(arr):
    Amax = 0
    for i in range(len(arr) - 1):
        Amax = max(Amax, (arr[i] * arr[i + 1]))
    return Amax


# driver code
# takes input as a list using map in int type
# and passes the list to function to calculate the max
if __name__ == "__main__":
    Arr = list(map(int, input().strip().split()))
    print(FindAdjacentMax(Arr))
