test_cases=int(input()) # Taking the number of test cases

for x in range(test_cases):
    num=int(input())
    rem=num%6

    # Finding column number
    if rem==0:
        col=num//6
    else:
        col=num//6+1

    if num%2!=0:
        if col%2==0:
            row=7-rem
        else:
            row=rem
    else:
        if col%2!=0:
            row=rem
            if row==0:
                row=6
        else:
            row=6-rem+1
            if rem==0:
                row=1
    
    # Logic for finding window , middle and aisle seat
    if row==1 or row==6:
        ans="WS"
    elif row==2 or row==5:
        ans="MS"
    elif row==3 or row ==4:
        ans="AS"

    # Finding row number
    if row==1:
        m=+11
    elif row==2:
        m=+9
    elif row==3:
        m=+7
    elif row==4:
        m=+5
    elif row==5:
        m=+3
    else:
        m=+1
    if col%2==0:
        m=-m

    # Finding the front seat number
    front=num+m

    print(front,ans)