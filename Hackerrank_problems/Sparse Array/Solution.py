

import math
import os
import random
import re
import sys

# Complete the matchingStrings function below.
def matchingStrings(strings, queries):
    res = []
    for i in queries:
        res.append(strings.count(i))
    return res

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    strings_count = int(input())

    strings = []

    for _ in range(strings_count):
        strings_item = input()
        strings.append(strings_item)

    queries_count = int(input())

    queries = []

    for _ in range(queries_count):
        queries_item = input()
        queries.append(queries_item)

    res = matchingStrings(strings, queries)

    fptr.write('\n'.join(map(str, res)))
    fptr.write('\n')

    fptr.close()

# Logic : Simple for loop was used to traverse the sparse arrays one by one 
#ie:
# Store the input string in array of strings ie a character array,then for each query serch the entire string and check
# which all strings are equal to the current string by using strcmp and increment the answer accordingly.
