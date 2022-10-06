# We are using stack (list can be used as a stack in python) to store characters of the string
# so, Time complexity will be O(n)

class Solution:
    def isValid(self, string):
        s = []                              # list can be used as a stack in python
        for char in string:                 # iterating over the input string
            if char in '({[':               # checking if the input is of any of the open bracket ({[
                s.append(char)              # if above condition is true, append that char in s we initialized earlier
            elif char == ')':               # checking if char is ')' , if string is not null/empty and last char in s is ')'
                if(not s or s[-1]!='('):    # we will pop the last element which will be '('
                    return False            # if above condition is False then we will return False which means parentheses is not valid.
                s.pop()
            elif char == '}':               # similarly for '}' we check conditions
                if(not s or s[-1]!='{'):
                    return False
                s.pop()
            elif char == ']':
                if(not s or s[-1]!='['):    # similarly for ']' we check condiitons
                    return False
                s.pop()

        if (not s):                         # if s becomes empty/null after pop operations its valid
            return True
        return False                        # else not valid