#


# working
    # this function takes steps and detail of steps as input
    # we declare a zero level above which any up step will be considered as a valley that is climbed
    # we run from 0 to length of steps

    # if we detect a "U" we increase the zero level
    # similary if we detect "D" we decrease the zero level
    # thus calculating the net valley value
    
def FindValleys(t, steps):
    pass
    zeroLevel = 0
    Valley = 0

    for i in range(t):
        if steps[i] == "U":
            zeroLevel = zeroLevel + 1
        else:
            zeroLevel = zeroLevel - 1

        if steps[i] == "U" and zeroLevel ==0:
            Valley = Valley + 1

    return Valley


# drive code
    # this code takes number os steps and details of steps as input
    # where steps will be given in "U" for step up and "D" for step down
    # we pass this data to Function FindValleys()

if __name__ == "__main__":
    t = int(input())
    steps = list(map(int, input().strip().split()))
    print(FindValleys(t, steps))
