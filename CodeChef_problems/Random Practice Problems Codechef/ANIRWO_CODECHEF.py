#Question Link
#https://www.codechef.com/problems/ANIRWO
t=int(input())
for a0 in range(t):
    s=input().lower()
    ns=""
    
    for i in range(len(s)):
        val=ord(s[i])
        if val<110:
            ns+=chr(122-(val-97))
        else:
            ns+=chr(97+(122-val))
    print(ns)
                
        
