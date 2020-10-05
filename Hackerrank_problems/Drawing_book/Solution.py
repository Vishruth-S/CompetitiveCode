#Author : @shashankseth01
#Simple solution for drawing book in python language

n = int(input("Enter the number of pages"))   
p = int(input("Destination Page"))  
print (min(p/2,n/2-p/2)) # if we open the book from front then destination page will take p/2 turn overs.
                        # if we open the book form back then destination page will take n/2-p/2 turn overs.

