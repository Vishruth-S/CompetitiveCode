#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
/*
 *	A good problem to determine factorials and dealing with big numbers.
 *	This method demonstrates the use of arrays, BigIntegers in java can also be used for the same.
 *	The logic is to calculate the factorial using arrays where each element represents the digit of a number.
 *	num = 1 :-> [1]
 *	num = 2 :-> [1*2] = [2]
 *	num = 3 :-> [2*3] = [6]
 *	num = 4 :-> [6*4] = [4] and carry = 2 -> [4, 2] ~= 24
 *	num = 5 :-> [(4)*5 :-> 0 and carry = 2, (2)*5+carry :-> 2 and carry = 1, carry :-> 1] = [0, 2, 1] ~= 120
 *	num = 6 :-> [(0)*6 :-> 0, (2)*6 :-> 2 and carry = 1, (1)*6 + carry :-> 7] = [0, 2, 7] ~= 720
 *	num = 7 :-> [(0)*7 :-> 0, (2)*7 :-> 4 and carry = 1, (7)*7 + carry :-> 0 and carry = 5, carry :-> 5] = [0, 4, 0, 5] ~= 5040
 *	
 * */
vector< vector<int> > vec_2d(101, vector<int> (1, 0));
// { 0: { },
//   1: {1},
//   .....,
//   5: {0, 2, 1} }


void print_fact(int n){						//To print the factorial of n, i.e., contents in array(vec_2d[n])
    vector<int> :: iterator it;
    for(it = vec_2d[n].end()-1; it>=vec_2d[n].begin(); it--)	//In reverse order
        cout<<*it;
    cout<<endl;
}

void calc_fact(int n){						// Function to calculate factorial
    int res = 0, carry = 0;					// Store the result of n in array for reusing. 
    vec_2d[n].resize(0);
    for(int i: vec_2d[n-1]){					// Iterating each digit of the immediate prev factorial result (e.g., for num = 5, immediate prev factorial will be 24 (4*3*2*1) ) 
        res = (n*i) + carry;					// In each iteration, calculating the new value (obtained by multiplying n with each digit) starting with unit digit and adding it with the previous carry value
        vec_2d[n].push_back(res%10);				// Store the unit digit of the new value in array
        carry = res/10;						// Calculate the carry of the new value
    }
    while(carry>0){						// if carry is not 0
        vec_2d[n].push_back(carry%10);				// Store the carry value in array
        carry/=10;						// Calculate carry if possible
    }
}

void solve(){
    // solution starts from here
    int n, i;
    cin>>n;


    if ( vec_2d[n][0] != 0 ){					//Print factorial, if its already calculated
        print_fact(n);
    }
    else{
        for (i=n-1; i>=1; i--)					// Check for calculated factorial of immediate prev num (less than num)
            if (vec_2d[i][0] != 0)				
                break;	
	
        for (int k=i+1; k<=n; k++){				// Calculate factorial from the point, its not present till n
            calc_fact(k);
        }
        print_fact(n);						// Print the factorial of n
    }

}

int main(){
    int tt;
    cin>>tt;

    vec_2d[1][0] = 1;
    while(tt--){
        solve();
    }
    return 0;
}
