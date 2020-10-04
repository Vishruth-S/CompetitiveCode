
import os
from itertools import accumulate

def arrayManipulation(n, queries):
   
    n = [0] * (n + 1)                           

    for i in range(len(queries)):
        n[queries[i][0] - 1] += queries[i][2]
        n[queries[i][1]] -= queries[i][2]

    return max(accumulate(n))
    
if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    nm = input().split()

    n = int(nm[0])

    m = int(nm[1])

    queries = []

    for _ in range(m):
        queries.append(list(map(int, input().rstrip().split())))

    result = arrayManipulation(n, queries)

    fptr.write(str(result) + '\n')

    fptr.close()
