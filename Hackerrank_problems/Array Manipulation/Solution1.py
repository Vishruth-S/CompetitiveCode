
import os
from itertools import accumulate

def arrayManipulation(n, queries):
   
    n = [0] * (n + 1)                            # take a array of n+1 element with zero i.e [0,0,0,0,0,0].                    

    for i in range(len(queries)):                # this for loop run 3 times that is depends of number of queries.
        n[queries[i][0] - 1] += queries[i][2]    # Here I am using prefix sum alogorithm, this logics will add the k value at n[a-1] and n[b] index in the array n.
        n[queries[i][1]] -= queries[i][2]        # but in prefix sum alogorithm has one side effect that if we adding values then effect will continue till last elements
                                                 # to avoid that I am adding -ve of k value from the n[b] which is the 2nd statement in the for loop.

    return max(accumulate(n))                   # This accumlate function is performing the prefix sum alogorithm which I have imported from intertools.
    
if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')    # it will open file and write.

    nm = input().split()                           # it will take n and m in the same line as a string e.g ['5', '3'].

    n = int(nm[0])                                   # it will extract n from nm that is '5'.

    m = int(nm[1])                                    # it will extract m from nm that is '3'.

    queries = []                                      # intitializing the empty list.

    for _ in range(m):                                # for loop run m times.
        queries.append(list(map(int, input().rstrip().split())))        # it will take inputs a,b,k in same line and convert it in to integer and append it into queries vaiable.

    result = arrayManipulation(n, queries)                              # calling the arrayManipulation function by passing number of array and queries.

    fptr.write(str(result) + '\n')                                      # write the results into the file.

    fptr.close()                                                        # it will close the file after writing thee result.
