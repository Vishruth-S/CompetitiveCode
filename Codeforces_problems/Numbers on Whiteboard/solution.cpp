#include<bits/stdc++.h>
using namespace std;
//here the round up of 2.5 is 3 so the average of 1 to n will be 2 only.
//Here we can start from n to 1
//and take average of current and average of previous operation
//So here we used stack to make it easy 
//We pop last two elements and push the average into same stack contains only one element
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        stack<int>arr;
        for(int i=0;i<n;i++){
            arr.push(i+1);
        }
        cout<<2<<endl;
        while(arr.size()>1){
            int a = arr.top();
            arr.pop();
            int b = arr.top();
            arr.pop();
            cout<<a<<" "<<b<<endl;
            //round is eg. 2.5 is 3
            arr.push(ceil((float)(a+b)/2));
        }
    }
    return 0;
}


