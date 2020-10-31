import math
import os
import random
import re
import sys

def detectMiss(n, k):
    """
        This function identifies the maximum value of AND operation by making cosideration of missing values in higher order
        n                       Unique A&B
        2                       [0]
        3                       [0, 1, 2]
        4                       [0, 1, 2]
        5                       [0, 1, 2, 4]
        6                       [0, 1, 2, 4]
        7                       [0, 1, 2, 3, 4, 5, 6]
        8                       [0, 1, 2, 3, 4, 5, 6]
        9                       [0, 1, 2, 3, 4, 5, 6, 8]
        
        In the above table we can find that the output is almost continious number array like [0,1,2] or [0,1,2,3,4,5,6]
        But we can also observe that in case of n = 5,6,9 the sequence is not continious.
        in case where n = 6 and k = 4 the output will be 2 but in case of n = 7 and k = 4 the output will be 3 
        so we can not simply define straigt logic. We need to indetify where new values are getting added to sequence to make it continious 
        but the previous sequence is not continious.
        We have seen a pettern of missing value count and the value n which is related to log(n) base 2 as we are dealing with binary.
        This mehtod considers the discontinuty and identify those missing values to make the output proper
    """
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
    """
        Take test case count as input
    """
    t = int(input())
    """
        Iterate for every test cases
    """
    for t_itr in range(t):
        nk = input().split()
        """
            Store number of elements of the natural number set in n
        """
        n = int(nk[0])
        """
            Store value of k which can not be exceed by the Bitwise AND result
        """
        k = int(nk[1])
        if n%2==0:
            if k>=n-1:
                """
                    If the natural number set is having even number of elements
                    and the value of k is greater than the maximum value of the set then
                    the output will be n-2
                """
                print(n-2)
            elif k==n-2:
                """
                    If the natural number set is having even number of elements
                    and the value of k is equal to n-2 then
                    futher processing required
                """
                print(detectMiss(n, k))
            else:
                if k%2!=0:
                    """
                        If the natural number set is having even number of elements
                        and the value of k is less than n-2 and k is odd then
                        the output will be k-1
                    """
                    print(k-1)
                else:
                    """
                        If the natural number set is having even number of elements
                        and the value of k is less than n-2 and k is even then
                        further processing is required
                    """
                    print(detectMiss(n, k))

        else:
            if k >= n:
                """
                    If the natural number set is having odd number of elements
                    and the value of k is greater than or equal to n then
                    the output will be n-1
                """
                print(n-1)
            elif k==n-2:
                """
                    If the natural number set is having odd number of elements
                    and the value of k is equal to n-2 then
                    the output will be k-1
                """
                print(k-1)
            else:
                """
                    If the natural number set is having odd number of elements
                    and the value of k is less than n-2 or equal to n-1 then
                    further processing required
                """
                print(detectMiss(n, k))
