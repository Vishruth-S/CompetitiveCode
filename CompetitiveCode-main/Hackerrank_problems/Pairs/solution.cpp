/*
 So the problem Statement  demands to count the number of pairs of array elements that have a difference equal to a target value (here k is our target).

 Think of it this way store each value once in a hashTable (unordered_map or map in C++). Iterate through the array and check if the   current element + k exists in the hash-table
 if yes then we need to either increment the counter or add pairs in a vector. This way we'll know that any a[i]-a[j] is
 k or not. 
 a[j]-a[i]=k 
 => a[j] = a[i]+k (Basic maths)
 At the end you can either print the pairs or size of the vectors as per the questions demand.
*/
#include<bits/stdc++.h>
using namespace std;
#define ll unsigned long long int
#define mp make_pair
#define pb push_back
typedef vector<ll> vll;
typedef pair<ll,ll> pll;
typedef vector<pll> vpll;
typedef map<pll,ll> mpll;
typedef map<ll,ll> mll;
int main()
{
    ll n,k;
    cin>>n>>k;
    vll a(n);
    mll hash;
    mpll pairHash;
    vpll result;
    for(auto &i:a)cin>>i,hash[i]=1;
    for(auto &i:a){
        if(hash.find(k+i)!=hash.end()){
            result.pb(mp(k+i,i));
        }
    }
    cout<<result.size();
}
