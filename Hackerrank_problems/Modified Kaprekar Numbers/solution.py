def check(i):
    sq = str(i**2)                     # squaring the input
    le = len(str(i))                   # calculating the length
    r = sq[-le:]                       # extracting the right hand part
    l = sq[:-le] or '0'                # extracting the left hand part
    return sum(map(int,(l,r)))==i      # sum the right and left part and checking if                                              equals to the input number 

def kaprekarNumbers(p, q):
    return [i for i in range(p,q+1) if check(i)]

p = int(input())
q = int(input())
print(*kaprekarNumbers(p, q) or ["INVALID RANGE"])