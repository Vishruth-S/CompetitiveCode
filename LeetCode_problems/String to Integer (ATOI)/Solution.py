# here we check for first non whitespace character is numeric or not and print till non numeric constraint.

# simple condition we have to follow
# 1 for whitespace remove we use str.strip()
# 2 two variable one is negative which is true when value is negative and secuond out is final output
# at last we know that 1 and "1" is not same so that we are using ord() function in python
# ord("any number") - ord("0") = any number in interger format that we are doing for getting integer format
# ord("2") - ord("0") = 50 - 48 = 2 so that how it works
# other thing we are doing out = out*10 which means we are adding next digit to the previous one 
# if first digit is 9 then it become 90 then next digit is 5 then it become 95 and how that is works

def myAtoi(str: str) -> int:
    # handling space
    str = str.strip()

    # string is None
    if not str:
        return 0

    negative = False
    out = 0

    if str[0] == "-":
        negative = True
    elif str[0] == "+":
        negative = False

    # if a string is not a numeric then return 0
    elif not str[0].isnumeric():
        return 0

    else:
        out = ord(str[0]) - ord("0")

    for i in range(1, len(str)):
        if str[i].isnumeric():
            out = out * 10 + (ord(str[i]) - ord("0"))

            if not negative and out >= 2147483647:
                return 2147483647 # 2^31 - 1
            if negative and out >= 2147483648:
                return -2147483648 # -2^31
        else:
            break

    if not negative:
        return out
    else:
        return -out


s = input()
print(myAtoi(s))
