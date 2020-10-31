#include <bits/stdc++.h>
using namespace std;

int solve(vector<int>& a) {
    int i=1;
    //Copy array into unordered_set
    unordered_set<int> us(a.begin(), a.end());
    while(i <= us.size()){
        //Increment i by 1 and search in set. Searching is O(1)
        if (us.find(i) == us.end())
        break;
        ++i;
    }
    //if i is not found return i.
    return i;  
}
int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin >> n;
        vector<int> v;
        for(int i=0;i<n;i++){
            int x;
            cin >> x;
            v.push_back(x);
        }
        // function responsible for calculating answer
        cout << solve(v);
    }
	return 0;
}
