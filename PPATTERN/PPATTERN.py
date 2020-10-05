# This loop will runs for each test case
for x in range(1 , int(input()) + 1): 
    num = int(input()) # Taking the number of rows input
    lis = []

    # CORE LOGIC
    for i in range(-num + 1 , num):
        if num - abs(i) != num:
            lis.append(num - abs(i))
    lis.append(0)

    for i in range(1 , num + 1):
        k = i - 1
        digit = i * (i + 1) // 2
        for j in range(1 , num + 1):
            print(digit , end = " ")
            digit += lis[k]
            k += 1
        print("")
