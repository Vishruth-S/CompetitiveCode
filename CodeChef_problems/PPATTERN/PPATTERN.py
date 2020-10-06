# This loop will runs for each test case
for x in range(1 , int(input()) + 1):
    num = int(input()) # Taking the number of rows input
    lis = []

    # CORE LOGIC
    # This for loop runs from (-ve num to +ve num)
    for i in range(-num + 1 , num):
        if num - abs(i) != num:
            lis.append(num - abs(i))
    lis.append(0)
    print(lis)

    # This list will contain values from [1 to (num - 1) and then (num -1) to 0]
            # For example for num
                # 1 when num = 4 -> lis = [1 , 2, 3, 3, 2, 1 , 0]
                # 2 when num = 2 -> lis = [1 , 2, 2, 1, 0]
    # This list contains values to be added to get next number

    for i in range(1 , num + 1): # Row controlling for loop
        k = i - 1
        digit = i * (i + 1) // 2     # num * (num + 1) // 2 to get sum till that number
        for j in range(1 , num + 1): # Column Controlling for loop
            print(digit , end = " ")
            digit += lis[k]
            k += 1
        print("")
