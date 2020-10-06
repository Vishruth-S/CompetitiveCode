#Author : @Aashrut

def is_leap(year):
    # We initialize the variable leap to False, so that if it doesn't pass all condition then it can return False.
    leap = False
    
    # conditions for leap year
    # If year is divided by 4, then it is leap year
    if (year%4)==0:
        leap=True
        # but if it is also evenly divided by 100, then it is not a leap year
        if (year%100)==0:
            leap=False
            # but also if it is evenly divided by 400, then it is leap year
            if (year%400)==0:
                leap=True
    
    return leap

'''
To test the function run the below lines:
year = 1990
print(is_leap(year)) # Outputs False
'''
