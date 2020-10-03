#!/bin/python3

import typing as t
import math
import os
import random
import re
import sys

# Complete the permutationEquation function below.
def permutationEquation(p: t.List[int]) -> t.List[int]:
    results = []
    for x in range(1, len(p) + 1):
        results.append(p.index(p.index(x) + 1) + 1)
    return results


if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    n = int(input())

    p = list(map(int, input().rstrip().split()))

    result = permutationEquation(p)

    fptr.write('\n'.join(map(str, result)))
    fptr.write('\n')

    fptr.close()

