
/*Remove Element

Given an array and a value, remove all the instances of that value in the array.
Also return the number of elements left in the array after the operation.
It does not matter what is left beyond the expected length.

 Example:
If array A is [4, 1, 1, 2, 1, 3]
and value elem is 1,
then new length is 3, and A is now [4, 2, 3] 
Try to do it in less than linear additional space complexity.*/

int Solution::removeElement(vector<int> &A, int B)
{

    int i = 0, j = 0, duplicates = 0; //pointer i traverses through all vector elements

    while (i < A.size() && j < A.size())
    {
        if (A[i] != B)
        {
            A[j++] = A[i]; //pointer j gets updated only when an element is not equal to B
        }
        else
            duplicates++;   //when A[i] == B
        i++;
    }
    return A.size() - duplicates; //size of new vector that contains all elements apart from B
}
