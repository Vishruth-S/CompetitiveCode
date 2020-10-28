/*Remove duplicates from Sorted Array
Given a sorted array, remove the duplicates in place such that each element appears only once and return the new length.

Note that even though we want you to return the new length, make sure to change the original array as well in place

Do not allocate extra space for another array, you must do this in place with constant memory.

 Example:
Given input array A = [1,1,2],
Your function should return length = 2, and A is now [1,2]. */

int Solution::removeDuplicates(vector<int> &A)
{
    if (A.size() == 1)
        return 1;
    int i = 1, j = 1;
    while (i < A.size() && j < A.size())
    {
        if (A[i] != A[j])
        {
            A[j] = A[i]; //allocate element only if it is unique i.e non duplicate
        }
        if (A[j - 1] != A[j]) //array is sorted so we compare adjacent indeces
        {
            j++;  //pointer j increments only for unique values
        }
        i++; //pointer i traverses through all vector elements
    }
    return j;
}
