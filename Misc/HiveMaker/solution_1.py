# The idea is that except if we have less than 11 sticks where the solution is trivial
# in every other case we create as much pairs of hexagons as possible. The addition of
# two pairs provides the best solution and also return to us 3 sticks. We repeat until
# no new pairs can be created. Then with less than 11 sticks we can add 2 new hexagons
# at best case. 

def HiveMaker(sticks):
    #If less than 11 then only 1
    if sticks < 11:
        return [1, 6, sticks-6]

    hive = 0    
    initial = sticks
    while True:
        #A hex pair has 11 sticks
        pairs = sticks // 11
        #The remaining sticks
        sticks = sticks % 11
        #If no pairs
        if pairs == 0:
            #With 4 sticks we have a new hex
            hive += sticks//4
            sticks %= 4
            #But we cannot do anything else
            break
        #When we add two pairs we get 3 sticks
        additions = pairs - 1
        sticks += additions * 3
        #Add to hive
        hive += pairs * 2

    return [hive, initial-sticks, sticks]

print(HiveMaker(7))
print(HiveMaker(19))
print(HiveMaker(23))
print(HiveMaker(54))


        
