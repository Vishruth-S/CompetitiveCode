def repeat_counts(n):
    if len(n)==1:            # checking for the length of n. If it is 1 then returns 1
        return 1
    maxx=c=0                 # initializing maxx and c as 0. maxx is used for maximum check and c is used for counting
    for i in range(1,len(n)):
        if n[i-1]==n[i]:     # check if the element previous the current element is same or not
            c+=1
        if n[i-1]!=n[i] or i==len(n)-1:      # check if the element previous is not same as the present one or the present index is the last index
            c+=1                             # count increased by 1 here because it is still taking account of the previous element
            if maxx<c:                       # checks if c is the maximum or not
                maxx=c
            c=0                              # initializes c back to 0 and there the next check goes on

    return maxx
    

n = input()
print(repeat_counts(n))                     # calls the repeat_counts(n) function and prints the returned value