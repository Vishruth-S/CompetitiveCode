T=int(input()) # Taking T for T test cases


while T!=0 :
    n=int(input()) # Taking n :- no. of inputs in array
    v=[int(i) for i in  input().split()] # Taking array as input of 0's and 1's and coverting to int
    """
    Counting number of zeroes which are between the extreme 1's at the ends
    for example :
    1001 : 2
    001010100 : 2
    
    """
    
    ind=[i for i in range(n) if v[i]==1]
    least=min(ind)
    most=max(ind)
    count=0
    for i in v[least:most]:
        if i==0:
            count+=1
    print(count)
    
    T-=1
