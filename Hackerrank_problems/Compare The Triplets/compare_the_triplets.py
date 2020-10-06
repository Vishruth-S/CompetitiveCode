
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
            Alice += 1
            
        elif b[i] > a[i]:
            Bob += 1
        
    print(f"{Alice} {Bob}")


# Taking input from user.
a = list(map(int, input().split()))
b = list(map(int, input().split()))

# Function calling.
func(a, b)