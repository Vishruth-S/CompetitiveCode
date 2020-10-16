/*
This problem checks the Array Concepts as well as encoding aptitude.
*/
/* 
Assumptions:
Lets say N = size of the array. Then, following holds true :
--All elements in the array are in the range [0, N-1]
--N * N does not overflow for a signed integer
*/

//The function is coded as follows:
void Solution::arrange(vector<int> &A) {
    int n=A.size();
    for(int i=0;i<n;i++)
    {
        A[i]=A[i]+(A[A[i]]%n)*n;
        /*See how we used Modulus and array indexing properties to rearrange array.*/
        
    }
    for(int i=0;i<n;i++)
    {
        A[i]/=n;
    }

    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
}
