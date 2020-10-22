if __name__ == "__main__":
    t = int(input())  # number of test cases
    while (t != 0):
        n = int(input()) # number of elements in the array
        X = []
        X = list(map(int, input().strip().split()))
        maxc = maxg = X[0]  # currentmax and globalmax initialized to first element
        for i in range(1, len(X)):
            if X[i] > maxc + X[i]:  # comparing current element with sum of currentmax and currentelement
                maxc = X[i]  # if greater substitute current max with current element
            else:
                maxc = maxc + X[i]  # else current element is added to cuurent max

            if maxc > maxg:  # compare globalmax and currentmax
                maxg = maxc  # if currentmax greater than globamax,initialize
        print(maxg)
        t=-1