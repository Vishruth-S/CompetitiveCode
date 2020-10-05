grades = [] #list to store grades
N = int(input()) 
secondscore = 0.0 #secondscore to get the 2nd lowest grade

def sortSecond(val): 
    return val[1],val[0] #sorting with respect to grades primarily and then names as names are present in index 0 and grades in index 1

for _ in range(0,N):
    string = input().split() #taking the inputs
    grd = float(input())
    string.append(grd)
    grades.append(string)

grades.sort(key = sortSecond)
secondscore = grades[0][1]
for _ in range(1,N):
    if(grades[_][1]>secondscore):
        secondscore = grades[_][1] #finding out the second lowest score from the list
        break

for _ in range(0,N):
    if(float(grades[_][1])==secondscore): #printing the names corresponding to the second lowest score
        print(grades[_][0])
