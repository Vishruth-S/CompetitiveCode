'''
https://www.hackerrank.com/challenges/merge-the-tools/problem
'''



def check_non_dup(string):
    '''
    returns boolean if there are no duplicate characters
    '''
    from collections import Counter
    freq_count_char = Counter(string)
    modi_string = [k for k, v in freq_count_char.items() if v > 1]
    if len(modi_string) == len(string):
        return True
    else:
        return False

def non_dup(string):
    '''
    returns a non duplicate character string from a string input
    '''
    final_str = ''
    for k in string:
        if k not in final_str:
            final_str += k
    return final_str


def split_string(string, k):
    ''' returns a list of all the substrings broken by a length of k
    '''
    start = 0
    list_of_sub_strings = []
    for j in range(0, len(string), k):
        chk_str = string[start:start+k]
        if check_non_dup(chk_str):
            list_of_sub_strings.append(chk_str)
        else:
            list_of_sub_strings.append(non_dup(chk_str))
        start += k

    return list_of_sub_strings


def merge_the_tools(string, k):
    if k == len(string):
        if check_non_dup(string):
            print(string)
        else:
            print (non_dup(string))
    else:
        for i in split_string(string, k):
            print (i)



s = "thereisagreatplacetobeatthissummersowhatyoudoing"
print (len(s))
# k factor of #
k = 8

print (merge_the_tools(s, k))
