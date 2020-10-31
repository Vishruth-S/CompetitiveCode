//716A - Crazy Computer 
//Contributed by Mohd Warid (waridrox)

#include <bits/stdc++.h> 
using namespace std;

int main() {
        int n,c; cin >> n >> c;
        int a[n];
        int w1 = 0,w2 = 0;
        for (int i =0; i < n; i++)
        {
            cin >> a[i];
        }
 
        for (int i = 0; i < n-1; i++)
        {
            int diff = a[i+1]-a[i];
            if (diff <= c)//1 <= 1
            {
            w1++;
            }
            else if (diff > c)//2 > 1.2 > 1.2 > 1.2 > 1.
            {
            w1= 0;//w = 0.
            }
        }
    cout << w1+1;
return 0;
}