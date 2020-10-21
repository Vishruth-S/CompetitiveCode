class Solution {
public:
    int getWinner(vector<int>& arr, int k) {
        int count = 0; //taking counter to check how many times a number has won
        while(count!=k){
            if(arr[0] > arr[1]){
                arr.push_back(arr[1]); //used to insert the smaller number at the end
                arr.erase(arr.begin()+1); //used to remove the smaller number from its orignal position
                count++; //increase the number won counter as the same number would have won
            } else {
                arr.push_back(arr[0]); //used to insert the smaller number at the end
                arr.erase(arr.begin()); //used to remove the smaller number from its orignal position
                count = 1; //making the won counter to 1 as a new number would have won in this iteration
            }
        }
        return arr[0]; //return the number at the first index, as it is the winner for 'k' times
    }
};
