#Question Link
#https://www.codechef.com/problems/ANIRWO

t=int(input()) #input test cases
for a0 in range(t):
    s=input().lower() #input string
    ns="" #creating empty string to store result
    
    for i in range(len(s)):
        val=ord(s[i]) #fetching the ASCII value of the character at position i
        if val<110: #checking if character is first half of the lowercase alphabets
            ns+=chr(122-(val-97)) 
        else:
            ns+=chr(97+(122-val))
    print(ns)
                
        
