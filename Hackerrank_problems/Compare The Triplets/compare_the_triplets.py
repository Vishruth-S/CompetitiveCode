
def func(a, b):
    ''' 
    Takes two parameters both are lists of int type
    None return type; finally it prints the points for
    Alice and Bob.
    '''
    Alice = 0
    Bob = 0

    for i in range(len(a)):
        if a[i] > b[i]:
            # If the score of a is greater then b then increase score of alice by 1.
            Alice += 1
            
        elif b[i] > a[i]:
            # If the score of b is greater then a then increase score of bob by 1.
            Bob += 1
        
    # At last print the score for Alice and Bob respectively.
    print(f"{Alice} {Bob}")


# Taking input from user.
a = list(map(int, input().split()))
b = list(map(int, input().split()))

# Function calling.
func(a, b)
