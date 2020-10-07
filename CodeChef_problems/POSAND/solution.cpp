#include <bits/stdc++.h>
using namespace std;

int main(){
    int T =0 ;
    cin >> T;
    while(T--){  
        int long N = 0;
        cin >> N;
        bool value = false;

        if(ceil(log2(N)) == floor(log2(N)) && N !=1)
        {
            cout << -1<< "\n";
            continue;
        }
        else if(N == 1) {
            cout << 1<< "\n";
            continue;
        }
        
        for(int long i =1; i <=N; i++)
        {
            if(i==3)
            {
                cout << 1 << " ";
            }
            else if(ceil(log2(i)) == floor(log2(i)))
            {
                cout << i+1<< " ";
                value = true;
                continue;
            }
            else if(value == true)
            {
            cout << i-1<<" ";
            value  = false;
            }
            else
            {
                cout << i << " ";
            }

        }
        printf("\n");
    } 
        return 0;
}

