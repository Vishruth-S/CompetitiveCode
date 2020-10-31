# We need to make our string alternating, i. e. si≠si+1. When we reverse substring sl…sr, 
# we change no more than two pairs sl−1,sl and sr,sr+1. Moreover, one pair should be a 
# consecutive pair 00 and other — 11. So, we can find lower bound to our answer as maximum
# between number of pairs of 00 and number of pairs of 11. And we can always reach this 
# lower bound, by pairing 00 with 11 or with left/right border of s.

for _ in range(int(input())):

    n = int(input())
    s = input()

    z, o = 0, 0 # will store total number of pairs
    zeros, ones = 0, 0 # will store no of pairs in one streak
    for el in s:
        if el == '1':
            ones += 1
            # streak of zeros are broken by one so no of pairs of zeros are added to z 
            z += max(zeros-1, 0)
            zeros = 0

        if el == '0':
            zeros += 1
            # streak of ones are broken by one so no of pairs of ones are added to o
            o += max(ones-1, 0)
            ones = 0

    # we count pairs only when it the streak is broken. So to count the final unbroken streak
    o += max(ones-1, 0)
    z += max(zeros-1, 0)

    print(max(o, z))
