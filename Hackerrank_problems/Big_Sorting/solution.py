#python3 with bucket sort
#What is bucket sort?
#Bucket sort is mainly useful when input is uniformly distributed over a range.

#taking input from user
n = int(input().strip())
bucket = {}

# read all integers as strings, store them by length in the bucket
for _ in range(n):
    number = input().strip()
    length = len(number)
    
    # create new bucket for length
    if not length in bucket:
        bucket[length] = []
    
    #adding number to the bucket 
    bucket[length].append(number)

# read from the bucket in ascending order
for key in sorted(bucket):
    for value in sorted(bucket[key]):
        print(value)