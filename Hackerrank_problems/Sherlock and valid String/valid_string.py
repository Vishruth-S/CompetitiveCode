#Problem link in the md file
def isValid(s):
    dic = {}
    dic1 = {}
    for i in s:
        if i not in dic:
            dic[i] = 1
        else:
            dic[i]+=1
    for i in dic:
        if dic[i] not in dic1:
            dic1[dic[i]] = 1
        else:
            dic1[dic[i]]+=1
    
    if len(dic1)>2:
        return "NO"
    elif len(dic1)==1:
        return "YES"
    if dic1[min(dic1, key = dic1.get)]>1 : 
        return "NO"
    else :
        if min(dic1, key = dic1.get) == 1:
            return "YES"
        else:
            if max(dic1)-min(dic1)>1:
                return "NO"
    return "YES"
isValid(input()) #enter a valid string
