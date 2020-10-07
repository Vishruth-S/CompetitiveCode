def missing_num(n):
    n=sorted(n)                          # shuffling the items of n in a sorted manner
    n.append(0)                          #adding the number 0 at the end for checking purpose
    for i in range(1,len(n)+1):
        if i!=n[i-1]:                    # checking for the missing number
            return i                     # returning the missing number

input()
n = list(map(int, input().split(" ")))  # Splitting the input line in a list
print(missing_num(n))                   # Calling the missing_num(n) function and printing the returned value