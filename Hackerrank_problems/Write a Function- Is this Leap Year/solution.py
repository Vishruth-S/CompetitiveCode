#Author : @Aashrut

def is_leap(year):
    leap = False
    
    if (year%4)==0:
        leap=True
        if (year%100)==0:
            leap=False
            if (year%400)==0:
                leap=True
    
    return leap

'''
To test the function run the below lines:
year = 1990
print(is_leap(year)) # Outputs False
'''