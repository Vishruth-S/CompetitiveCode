//@shivam23rawat
/*--------EXPLANATION--------------
We need to check if there exists any odd number which is multiple of all the given numbers
so we know that to find the common multiple we need to multiply all the given numbers and 
the answer will be common multiple of all but this will not generate an odd number on the 
condition that an even number is present in the array because even number multiplied by 
anything gives only even number.
-----------------------------------
*/

#include <bits/stdc++.h>

using namespace std;

int main(){
	int T = 0;
	cin>>T; 
	while(T--){
        int N = 0;
        cin>>N;
        int A[1000];
        int flag = 0;
        for(int i =0;i<N;i++){
            cin>>A[i];
            if(A[i]%2==0){          //if any element is even then we know answer is NO
                flag = 1;
            }
        }
        if(flag == 1){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
    }
    return 0;
}

