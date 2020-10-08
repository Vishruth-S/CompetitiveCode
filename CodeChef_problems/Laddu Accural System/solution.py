# Sample Input:
# 2
# 4 INDIAN
# CONTEST_WON 1
# TOP_CONTRIBUTOR
# BUG_FOUND 100
# CONTEST_HOSTED
# 4 NON_INDIAN
# CONTEST_WON 1
# TOP_CONTRIBUTOR
# BUG_FOUND 100
# CONTEST_HOSTED

# Sample Output:
# 3
# 1

# Explanation
# In the first example,
# For winning contest with rank 1, user gets 300 + 20 - 1 = 319 laddus.
# For top contributor, user gets 300 laddus.
# For finding a bug with severity of 100, user gets 100 laddus.
# For hosting a contest, user gets 50 laddus.
# So, overall user gets 319 + 300 + 100 + 50 = 769 laddus. Now, the user is an Indian user, he can redeem only 200 laddus per month. So, for first three months, he will redeem 200 * 3 = 600 laddus. The remaining 169 laddus, he can not redeem as he requires at least 200 laddues in a month to redeem. So, answer is 3.

# In the second example, user is a non-Indian user, he can redeem 400 laddues per month. So, in the first month, he will redeem 400 laddus. The remaining 369 laddus, he can not redeem as he requires at least 400 laddues in a month to redeem. So, answer is 1.


t = int(input())
for i in range(t):
    activity=input().split()
    h={"TOP_CONTRIBUTOR":300,"CONTEST_HOSTED":50}
    total=0
    for i in range(int(activity[0])):
        st=input().split()
        if len(st)==2:
            if st[0]=="BUG_FOUND":
                    total+=int(st[1])
            else:
                if int(st[1])<=20:
                    total+=320-int(st[1])
                else:
                    total+=300
        else:
            total+=h[st[0]]
    if activity[1]=="INDIAN":
        print(total//200)
    else:
        print(total//400)