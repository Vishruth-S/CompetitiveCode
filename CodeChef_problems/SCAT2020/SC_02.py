#PROBLEM : https://www.codechef.com/SCAT2020/problems/SC_02
#ORIGINAL SOLUTION : https://www.codechef.com/SCAT2020/status/SC_02,sahiljena

a = int(input()) #Input for number of testcases
for i in range(a): 
    n = int(input()) #input for number of boys and girls in the classroom
    b = list(map(int,input().split())) #input height of boys
    g = list(map(int,input().split())) #input height of girls
    b.sort()  #sorting height of boys
    g.sort()  #sorting height of girls
    h1 =[]  #Empty List with height starting with boys ,ie. B1,G1,B2,G2 to be updated later
    h2= []  #List with height starting with girls ,ie. G1,B1,G2,B2 to be updated later
    for i in range(n): #Inserting Heights of boys and girls into list h1 (Starting from Boys ie. B1,G1,B2,G2)
        h1.append(b[i])
        h1.append(g[i])
    for i in range(n): #Inserting Heights of boys and girls into list h1 (Starting from girls ie. G1,B1,G2,B2)
        h2.append(g[i])
        h2.append(b[i])
    if h1 == sorted(h1) or h2 ==  sorted(h2):  #--Main Logic-- to check if arranged height order of boys and girls is sorted 
        print("YES") #If any of the arranged height order is sorted then output "YES"
    else:
        print("NO") # If None of the arrnaged height order is sorted then output "NO"
