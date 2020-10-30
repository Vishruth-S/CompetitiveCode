// Link to Ques: https://www.interviewbit.com/problems/remove-duplicates-from-sorted-array-ii/

int Solution::removeDuplicates(vector<int> &A) {
    int n = A.size();
    if(A.size() == 0 || A.size() == 1){
        return n;
    }
    int i =0, j =0;
    while( j<A.size()){
        if(A[i] == A[j]){
            j++ ;
            continue;
        }
        if(j > i+2){
            A.erase(A.begin()+i+2, A.begin()+j);
            j = i;
        }
        i = j;
    }
    if( (j-i)> 2){
        A.erase( A.begin() + i+2, A.end());
    }
    return A.size();
}
