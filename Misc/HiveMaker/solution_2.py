def HiveMaker(sticks):
    hives, stickU = 0, 0
    while sticks >= 4:
        hives += 1
        if hives == 1:
            sticks, stickU = sticks - 6, stickU + 6
        elif hives == 2:
            sticks, stickU = sticks - 5, stickU + 5
        else: 
            sticks, stickU = sticks - 4, stickU + 4
    return [hives, stickU, sticks]

# Works for all testcases except for one wrong testcase.
