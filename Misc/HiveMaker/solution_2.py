def HiveMaker(sticks):
    hives, stickU = 0, 0 # I will set # of hives and sticks used to 0
    if sticks <= 5:
        return [0, 0, sticks]
    while sticks >= 4: # While the sticks are more than or equal to 4(minimum to make a hive)
        hives += 1
        if hives == 1:
            sticks, stickU = sticks - 6, stickU + 6 # First hexagon has six sides, so sticksUsed += 6
        elif hives == 2:
            sticks, stickU = sticks - 5, stickU + 5 # Second requires five sticks.
        else: 
            sticks, stickU = sticks - 4, stickU + 4 # The rest just need 4 sticks as there are two sides available
        # Subtracts sticks left because you used it, and adds it to sticks used
    return [hives, stickU, sticks]

# Works for all testcases except for one wrong testcase.
