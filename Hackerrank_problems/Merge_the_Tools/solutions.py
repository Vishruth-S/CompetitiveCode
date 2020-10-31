'''
https://www.hackerrank.com/challenges/merge-the-tools/problem
'''

# break the problem into smaller helper functions


# for any string check if there are duplicate characters
def check_non_dup(string):
    '''
    this function will check for any duplicate characters
    input: a modi_string
    output: returns boolean
    '''
    from collections import Counter
    freq_count_char = Counter(string)
    modi_string = [k for k, v in freq_count_char.items() if v > 1]   # creating a list where a character appears once
    if len(modi_string) == len(string):  # check if the new list matches in len of old, if yes -> no duplicate character
        return True
    else:
        return False

# for any string remove duplicate characters and return the contiguous subsequence of characters
def non_dup(string):
    '''
    This function will return a string which will consist unique characters
    input: a modi_string
    output: returns a non duplicate character string
    '''
    final_str = ''
    for k in string:
        if k not in final_str:
            final_str += k
    return final_str


# for any string check if there are duplicate characters
def split_string(string, k):
    '''
    This function returns n/k list of contiguous subsequent strings where n = lenth of string, k = factor of n
    input: any string and integer k which is a factor of len(string)
    output: returns a list of all the n/k substrings of length k
    '''
    start = 0
    list_of_sub_strings = []
    for j in range(0, len(string), k):  # increment j by k since each string should be length k
        chk_str = string[start:start+k]
        if check_non_dup(chk_str):    # check fir presence of unique characters in string
            list_of_sub_strings.append(chk_str)
        else:
            list_of_sub_strings.append(non_dup(chk_str)) # if duplicate characters exist, remove and append
        start += k

    return list_of_sub_strings

# bring together
def merge_the_tools(string, k):
    '''
    This function prints n/k contiguous subsequent strings where n = lenth of string, k = factor of n
    input: any string and integer k which is a factor of len(string)
    output: returns a list of all the n/k substrings of length k
    '''
    if k == len(string):  # if the k is same length of the input string
        if check_non_dup(string):
            print(string)
        else:
            print (non_dup(string))
    else: # if not we just need to return the subsequent strings of length k and print them
        for i in split_string(string, k):
            print (i)

if __name__ == '__main__':
    string, k = raw_input(), int(raw_input())
    merge_the_tools(string, k)



# check your program against a test

s = "thereisagreatplacetobeatthissummersowhatyoudoing"
print (len(s))
# k factor of #
k = 8

print (merge_the_tools(s, k))
