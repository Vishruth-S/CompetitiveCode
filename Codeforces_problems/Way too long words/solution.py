n = int(input()) #input number of test cases

words = [] #list of all test cases

for i in range(0,n):
    word = str(input())
    words.append(word) #appending test cases in list

for word in words:
    if len(word)<=10: #if word length less than 10
        print(word)
    else:
        print(word[0]+str((len(word)-2))+word[len(word)-1]) #if greater than 10, print first letter, number of letters in between, and last letter