#Program to find out that whether a given input integer No. is Prime or Not  
a=int(input())  #Here we are taking the input No. from the user
t=0 #Initializing "t" as 0 for further use.
for i in range(1,a+1): #Constructed a loop for checking a No. from 1 to the position of the No. itself to find out that whether the No. of multiples are exactly 2 or not.
  if(a%i==0)
    t=t+1
if(t==2): #Added an if-else statement for returning the answer as "Prime" or "Not Prime",depending on the value of "t". 
  print(No. is Prime)
else:
  print(No. is Not Prime)
