"""Use a stack/list 'previous_states' to save the
last state of the string before apply the operation.
"""
if __name__ == '__main__':
    S = ''
    previous_states = []
    total_operations = int(input())
    for _ in range(total_operations):
        operation_line = input().split()
        operation = int(operation_line[0])
        if operation == 1:
            previous_states.append(S)
            w = operation_line[1]
            S += w
        if operation == 2:
            previous_states.append(S)
            k = int(operation_line[1])
            S = S[:-k]
        if operation == 3:
            k = int(operation_line[1])
            print(S[k-1])
        if operation == 4:
            S = previous_states.pop()
