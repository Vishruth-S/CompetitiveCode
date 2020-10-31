#Problem link in the md file
def isValid(s):
    dic = {} #dictionary for counting the frequency of each character in given string
    dic1 = {}   #dictionary for counting the frequency of counts from the above dictionary (frequency of frequency)
    #Below for loop stores data in dic 
    for i in s:
        if i not in dic:
            dic[i] = 1
        else:
            dic[i]+=1
    #Below for loop stores frequency of counts from dic
    for i in dic:
        if dic[i] not in dic1:
            dic1[dic[i]] = 1
        else:
            dic1[dic[i]]+=1
   #if number of entires in dic1 is >2, the string is invalid as 1 deletion is not possible 
    if len(dic1)>2:
        return "NO"
    #if all the characters in the string have equal counts, the string is valid
    elif len(dic1)==1:
        return "YES"
    #if frequency of counts is >1 we will not be able to perform 1 deletion to make counts equal
    if dic1[min(dic1, key = dic1.get)]>1 : 
        return "NO"
    else :
        #if frequency of a count is 1 we will be able to delete it and make a Sherlock string hence print YES
        if min(dic1, key = dic1.get) == 1:
            return "YES"
        else:
            #return NO if the difference between count frequencies is greater than 1
            if max(dic1)-min(dic1)>1:
                return "NO"
    #if the string clears above ladder then return YES
    return "YES"
isValid(input()) #enter a valid string
