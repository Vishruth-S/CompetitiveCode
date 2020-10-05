// Logic- If a,b,c are in a straight line then d can be either greater than it or equal to it or smaller than it,
// it wont bw possible to make a quadrilateral if d is equal or larger than a+b+c but a d shouldn't be so small
//     such that a+d<b+c, therefore we select a value just smaller than a+b+b.

#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long t,a,b,c,d,i,j;
    cin>>t;
    while(t--){
        cin>>a>>b>>c;
        d=a+b+c;
        cout<<d-1<<endl;
    }
 
    return 0;
 
}
