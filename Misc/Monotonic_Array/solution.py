'''
An array is said to be monotonic if its elements, from left to right,
are entirely non-increasing or entirely non-decreasing.
'''


def isMonotonicAlternative(array):
    # Edge condition to check for array less than 2 elements
    if len(array) <= 2:
        return True
    else:
        # Initialise the entry point
        j = 1
        # Monotonic Check conditions
        # Below condition for decreasing
        aflag = array[0] <= array[2]
        # Condition for increasing
        dflag = array[0] > array[2]
        # Looping through each element in array
        while j < len(array):
            # Decreasing check
            if array[j - 1] <= array[j] and aflag:
                j += 1
            # Increasing check
            elif array[j - 1] >= array[j] and dflag:
                j += 1
            # If not both then break and return false
            else:
                return False
    return True

