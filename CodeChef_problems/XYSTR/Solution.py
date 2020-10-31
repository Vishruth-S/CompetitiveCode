#Python solution to Codechef problem XYSTR

for i in range(int(input())):     #for loop to output answer for each of the T test cases(given as first line of input)
    l=list(input())                 #list to store string 
    x=0                             #initialised value of max. no. of pairs
    while(l!=[]):                 #if list is not empty
        if(len(l)>2):             #if length is string is >2
            if(l[0]!=l[1]):             #if first 2 students are not of same gender
                x+=1                    #form a pair
                del(l[0])               #delete first student of pair form list
                del(l[0])               #delete second student of pair form list that is now first person of list after above deletion
                continue                #continue to skip and evaluate remaining list
            else:                   #if both students of same gender
                del(l[0])           #delete first student which cannot form pair but second may with next student
                continue            #continue to skip and evaluate remaining list
        elif(len(l)==2 and l[0]!=l[1]):     #if there are only 2 students in string and they are a girl and a boy
            x+=1                            #if above condition is true => form a pair
            break                           #no more students left and no more pairing possible
        else:           #for any other case
            break       #no possibility of further pairing hence break
    print(x)                    #ouput maximum no. of pairs for test case
