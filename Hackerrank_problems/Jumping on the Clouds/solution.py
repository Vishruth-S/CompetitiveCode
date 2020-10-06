
def jumpingOnClouds(c):

    count = -1 # initialize
    i = 0 
    while i < len(c): # iterate till the end of cloud
        count += 1 
        if i < len(c) - 2 and c[i + 2] == 0: # will check next jump on cloud
            i += 1 
        i += 1 # increment
    return count # returns output

if __name__ == '__main__':

    n = int(input()) # total number of clouds
    c = list(map(int, input().rstrip().split())) # n space-separated binary integers describing clouds
    result = jumpingOnClouds(c) # Calling Method
    print(result) # Output