// Link to Ques: https://www.interviewbit.com/problems/remove-duplicates-from-sorted-array-ii/

// Using 2 pointers to keep track of indexes within which a number lies.
// If difference b/w indexes(i & j) is more than 2, 
// leave behind first 2 numbers & erase the rest from given vector
int Solution::removeDuplicates(vector<int> &A) {
    int n = A.size();
    if(A.size() == 0 || A.size() == 1){
        return n;
    }
    // Initialise the pointers
    int i =0, j =0;
    while( j<A.size()){
        // Increment 2nd pointer untill the number repeats
        if(A[i] == A[j]){
            j++ ;
            continue;
        }
        // If number repeats more than twice, erase the extra repeatations
        if(j > i+2){
            A.erase(A.begin()+i+2, A.begin()+j);
            j = i;
        }
        i = j;
    }
    // Erase extra repeatations, if number at the end of array also repeats more than twice.
    if( (j-i)> 2){
        A.erase( A.begin() + i+2, A.end());
    }
    return A.size();
}
