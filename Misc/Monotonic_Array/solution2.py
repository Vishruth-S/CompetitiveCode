'''
An array is said to be monotonic if its elements, from left to right,
are entirely non-increasing or entirely non-decreasing.
'''

def isMonotonic(array):
    # Edge condition to check for array less than 2 elements
    if len(array) <= 2:
        return True
    # Determining weather increasing or decreasing
    direction = array[1] - array[0]
    # Looping through all elements in array
    for i in range(2, len(array)):
        # Check if direction is maintained
        if direction == 0:
            direction = array[i] - array[i - 1]
            continue
        # If direction is changed break and return false
        if breakDirection(direction, array[i - 1], array[i]):
            return False
    return True


def breakDirection(direction, previousInt, currentInt):
    # Get direction
    difference = currentInt - previousInt
    # Check if directions is maintained
    if direction > 0:
        # If direction and difference have the same pattern
        return difference < 0
    # Else return the opposite
    return difference > 0