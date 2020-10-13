import time
time_start = time.time()
import math

triples = {}  # a dictionary of lists to hold results, the key is the perimeter p
for n in range(1000):
    triples[n]=[]
p=100  # start by generating pythagorean triples with 2 digits, will use them to generate the rest
for a in range(1,p//2):   
    for b in range(a+1,p//2):
        if (a%2 == 0 and b%2 == 0) or (a%2 == 1 and b%2 == 1): # one of a or b must be odd
            continue
        c = math.sqrt(a**2 + b**2)
        if c != int(c): # c must be an integer
            continue
        total=a+b+c
        if total > 1000: # total must be < 1000
            continue
        if int(c) == c:  # we have found a triple
            for n in range(1,500):  # use it to generate a lot more, and fill dictionary using their totals
                an = a*n
                bn = b*n
                cn = c*n
                total = an+bn+cn
                if total < 1000:
                    triples[total].append((an,bn,cn))  # add this triple

maximum = 0 # maximum number of triples for a key
answer = 0  # length of the longest set of triples
for index in triples.keys():
    length = len(set(triples[index]))
    if length > maximum: # found a longer one
        maximum = length        
        if index > answer: 
            answer = index # this is the index of the longest one so far
            
print('answer = ',answer)

print("--- %s seconds ---" % (time.time() - time_start))