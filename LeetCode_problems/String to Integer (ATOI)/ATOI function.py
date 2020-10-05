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
                return 2147483647
            if negative and out >= 2147483648:
                return -2147483648
        else:
            break

    if not negative:
        return out
    else:
        return -out


s = input()
print(myAtoi(s))