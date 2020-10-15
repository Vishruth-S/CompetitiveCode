for i in range(int(input())):

    n,k = map(int,input().split())

    a = [x for x in map(int,input().split()) if x < k]  # checking each element(x) in array if x<k

    if len(a) == 0:  # if length of array equals to 0, print 0
        print(0)

    else:
        print(k - min(a))  # if not, subtracts the min element in the array to the value of k