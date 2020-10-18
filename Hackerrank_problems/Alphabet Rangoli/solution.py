def print_rangoli(n):
    import string
    letter_count = dict(zip(string.ascii_lowercase, [0]*26))
    alph =  list([key for key  in letter_count.keys()])
    d = (n-1)*2
    k = n-1
    f = 0
    for i in range(n):
        k-=1
        m= int(k)
        if i!=0:
            f = 1
        if m==-1:
            m= None
        print("-"*d, end="")
        print("-".join(alph[n-1:m:-1]), end="")
        print("-"*(f)+"-".join(alph[n-i:n]), end="")
        print("-"*d)
        d -= 2
    d = 2
    f = 1
    for i in range(n-1,0,-1):
        if i==1:
            f = 0
        print("-"*d, end="")
        print("-".join(alph[n-1:n-i-1:-1]),end="")
        print("-"*f+"-".join(alph[n-i+1:n]), end="")
        print("-"*d)
        d += 2