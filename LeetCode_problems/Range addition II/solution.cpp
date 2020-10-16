class Solution {
public:
    int maxCount(int m, int n, vector<vector<int>>& ops) {
        if(ops.size()==0)// if there is nothing in ops, then all the elements of the array will have same value, which will be the maximum value
            return m*n;
        int min1=ops[0][0];// storing the first value of first column
        int min2=ops[0][1];//storing the first value of second column
        
        for (int i = 1; i < ops.size(); i++) { 
            if(ops[i][0]<max1)
                min1=ops[i][0];//to store the minimum value of first column
            if(ops[i][1]<max2)
                min2=ops[i][1];//to store the minimum value of second column
        }
        return max1*max2;// this will be the elements that will be covered maximum times and thus will have the maximum value 
    }
};
