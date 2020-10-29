#include<bits/stdc++.h>

using namespace std;

bool solve(){
    int arr[3];
    int count = 0;
    for(int i=0;i<3;i++){ // this loop takes the input and also check if the number given as input is 1 or 0
        cin >> arr[i];
        if(arr[i]==1){
            count++;  // increments the count if the number given as input if 1
        }
    }
    if(count >=2){  // checks if 2 or more people are sure about the solution
        return true;  // returns true if 2 or more people are sure about the answer
    }

    return false; // else returns false
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int tests,count = 0;
    cin >> tests; // taking the number of test cases as input
    while(tests--){
        count += solve(); // incrementing the variable count which signifies the number of test cases which returned true (the required answer)
    }
    cout << count;
}
