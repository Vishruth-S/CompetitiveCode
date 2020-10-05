def fibonacci(n, sequence=(0, 1)):
    # sequence=(0, 1) -> Tuple containing the first 2 values of the fibonacci sequence

    # If the 'n' is less than the len(sequence), the first 2 elements of the fibonacci
    # sequence, 0 and 1, are already returned
    return sequence if len(sequence) == n else \
        fibonacci(n, sequence + (sum(sequence[-2:]),))
    # The fibonacci function itself will be called
    # (sum(sequence[-2:]),) -> makes the sum of the last two values of the tuple and
    # generates a new tuple, contains that single value which is the sum

    # sequence + (sum(sequence[-2:]),) -> Sum the two tuples, the tuple with the initial
    # values and the tuple with the sum value, and recursively update the value from
    # sequence=(0, 1) to sequence=(0, 1, (sum(sequence[-2:]),)), and so on until
    # len(sequence) is greater than or equal to 'n'


if __name__ == '__main__':

    n = int(input())
    n += 1

    # Since the return of the fibonacci function is a tuple, one must take the required
    # position of the 'n'
    print(fibonacci(n)[n-1])
