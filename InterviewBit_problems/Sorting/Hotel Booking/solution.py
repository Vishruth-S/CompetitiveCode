'''
- A hotel manager has to process N advance bookings of rooms for the next season. 
His hotel has C rooms. Bookings contain a list A of arrival date and a list B of departure date. 
He wants to find out whether there are enough rooms in the hotel to satisfy the demand.

- Creating a function hotel which will take 3 arguments as arrive, depart and K
- First we will sort both the list arrive and depart
- Then we will traverse the list arrive and check for the index elements at i+K that the element in
arrive is less than depart i.e. arrive date is less than depart date
- If arrive date is less than depart date then there are no rooms and returning False
- But if no arrive date is less than depart date then there are enough rooms for N bookings and hence returning True
'''
def hotel(arrive, depart, K):
        arrive.sort()
        depart.sort()
        for i in range(len(arrive)):
            if i+K<len(arrive) and arrive[i+K]<depart[i]:
                return False
        return True

if __name__=="__main__":

    A=[ 13, 14, 36, 19, 44, 1, 45, 4, 48, 23, 32, 16, 37, 44, 47, 28, 8, 47, 4, 31, 25, 48, 49, 12, 7, 8 ]
    B=[ 28, 27, 61, 34, 73, 18, 50, 5, 86, 28, 34, 32, 75, 45, 68, 65, 35, 91, 13, 76, 60, 90, 67, 22, 51, 53 ]
    C=23

    result=hotel(A,B,C)
    print(result)