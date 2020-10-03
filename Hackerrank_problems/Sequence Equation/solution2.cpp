// LOGIC
// Here we are given an array A of n size with numbers from 1 to n and 1-indexed. We have to calculate x for every number i  A[A[x]]=i .


// Brute-force approach
// The brute approach will be to go for every possible value of x for every number i.e.

// for i from 1 to n
//     for x from 1 to n
//         if A[A[x]]]=i


// As you can see the time complexity is clearly O(n^2) and space complexity is O(1).

// ### Optimized approach
// What we can do is move reversibly i.e. from x to i by saving the indexes (1-based) in a map say mp. This map will act as a inverse operator like this.
// <br>

// Let's say we have mp as map which stores the indexes of every element in array A and its name as mp.

//     A[A[i]]=x           
//     A[i]=mp[x]
//     i= mp[mp[x]]


// Let's explain it through an example with n=4
// Input - A = [2, 1, 4, 3]
// Expected Ouput - [1, 2, 3, 4]

// Now mp will be
// mp ={ 
//         2:1
//         1:2
//         4:3
//         3:4
//     }

// for i from 1 to 4 :
//      x= mp[mp[i]]             
     
//      (say i=1 then x= mp[mp[1]] i.e. mp[2] i.e. 1)
//      (say i=2 then x= mp[mp[2]] i.e. mp[1] i.e. 2)
//      (say i=3 then x= mp[mp[3]] i.e. mp[4] i.e. 3)
//      (say i=4 then x= mp[mp[4]] i.e. mp[3] i.e. 4)
     

// Thus our answer is [1, 2, 3, 4]

// Let's take another example with n=5

// Input - A = [5, 2, 1, 3, 4]
// Expected Ouput - [4, 2, 5, 1, 3]

// Now mp will be
// mp ={ 
//         5:1
//         2:2
//         1:3
//         3:4
//         4:5
//     }

// for i from 1 to n :
//      x= mp[mp[i]]             
     
//      (say i=1 then x= mp[mp[1]] i.e. mp[3] i.e. 4)
//      (say i=2 then x= mp[mp[2]] i.e. mp[2] i.e. 2)
//      (say i=3 then x= mp[mp[3]] i.e. mp[4] i.e. 5)
//      (say i=4 then x= mp[mp[4]] i.e. mp[5] i.e. 1)
//      (say i=5 then x= mp[mp[5]] i.e. mp[1] i.e. 3)
     

// Thus our answer is [4, 2, 5, 1, 3]

// As you can see the time complexity has been reduced to O(n) from O(n^2) and the space complexity is O(n) since we'll store all indexes from 1 to n.


#include<bits/stdc++.h>
using namespace std;

vector<int> permutationEquation(vector<int> v) {
    int n=v.size();
    unordered_map<int,int> mp;
    for(int i=0;i<n;i++){
        mp[v[i]]=i+1;
    }
    vector<int> ans;
    for(int i=1;i<=n;i++){
        int mi= mp[i];
        int mmi = mp[mi];
        ans.push_back(mmi);
    }
    return ans;
}

int main(){}