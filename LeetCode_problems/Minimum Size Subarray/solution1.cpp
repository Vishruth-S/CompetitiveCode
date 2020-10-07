class Solution {
public:
    int minSubArrayLen(int s, vector<int>& arr) {
        if(arr.size()==0){
            return 0;   // if size of array is 0, return 0
        }
        int start=0;    // initialize start of window
        int end=0;      //initialize end of window
        int sum=arr[0]; // intialize the sum with the first array element
        int min=INT_MAX;// initialize the minimum value
        while(start<arr.size() && end<arr.size()){
            if(sum<s){          // if sum<s, then increase the size of the window to include more elements to increase the sum
                end++;
                if(end>=arr.size()){
                    break;
                }
                sum=sum+arr[end];
            }
            if(sum>=s){         //if sum>s, then decrease the size of the window to decrease the number of elements to decrease the sum
                if(min>end-start+1){
                    min=end-start+1;
                }
                sum=sum-arr[start];
                start++;
            }
            
        }
        
        if(min==INT_MAX){   // if there is no subarray sum >=s
            return 0;
        }
        else{
            return min;
        }
    }
};
