import math
import os
import random
import re
import sys

def detectMiss(n, k):
    k -= 1
    nlog = math.ceil(math.log(n,2))
    nloglessone = nlog - 1
    lower_base = 2**nloglessone - 1
    lowerbaseBack = lower_base
    diff_list = [2**i for i in range(nloglessone-1, 0, -1)]
    diff_lit_back = diff_list[1:-1]
    if lower_base == k and 2**nlog -1 == n:
        return(k)
    matchres = False
    while(lower_base <= k and len(diff_list)>0 ):
        if lower_base == k:
            matchres = True
            break
        else:
            addVal = diff_list[0]
            lower_base += addVal
            diff_list.remove(addVal)
    if matchres:
        k -= 1
    if k%2==0:
        return(k)
    else:
        while(len(diff_lit_back)>0 and lowerbaseBack<k):
            newAddVal = diff_lit_back[0]
            lowerbaseBack = lowerbaseBack+newAddVal
            postitionIndx = lowerbaseBack + newAddVal
            if lowerbaseBack == k and postitionIndx <= n:
                return(k)
            elif lowerbaseBack == k and postitionIndx > n:
                return(k-1)
            else:
                pass
            diff_lit_back.remove(newAddVal)
            
        return(k)



if __name__ == '__main__':
    t = int(input())

    for t_itr in range(t):
        nk = input().split()
        n = int(nk[0])
        k = int(nk[1])
        if n%2==0:
            if k>=n-1:
                print(n-2)
            elif k==n-2:
                print(detectMiss(n, k))
            else:
                if k%2!=0:
                    print(k-1)
                else:
                    print(detectMiss(n, k))

        else:
            if k >= n:
                print(n-1)
            elif k==n-2:
                print(k-1)
            else:
                print(detectMiss(n, k))
