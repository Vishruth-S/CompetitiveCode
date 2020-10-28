/* Given two sorted integer arrays A and B, merge B into A as one sorted array.

 Note: You have to modify the array A to contain the merge of A and B. Do not output anything in your code.
TIP: C users, please malloc the result into a new array and return the result. 
If the number of elements initialized in A and B are m and n respectively, the resulting size of array A after your code is executed should be m + n

Example :

Input : 
         A : [1 5 8]
         B : [6 9]

Modified A : [1 5 6 8 9] */

void Solution::merge(vector<int> &A, vector<int> &B)
{

    vector<int> arr;  //use of additional memory allowed
    int i = 0, j = 0; //2 pointers to at head of A and B resp.
    while (i < A.size() && j < B.size())
    {
        if (A[i] > B[j])
        {
            arr.push_back(B[j]); 
            j++;
        }
        else
        {
            arr.push_back(A[i]);
            i++;
        }
    }
    if (i < A.size()) //if elements of A are left, keep pushing them in arr till end
    {
        while (i != A.size())
        {
            arr.push_back(A[i]); //since vector elements are sorted we can directly push them 
            i++;
        }
    }
    if (j < B.size())
    {
        while (j != B.size()) //if elements of B are left, keep pushing them in arr till end
        {
            arr.push_back(B[j]); //since vector elements are sorted we can directly push them
            j++;
        }
    }

    A = arr; //copy vector arr to A to modify A
}
