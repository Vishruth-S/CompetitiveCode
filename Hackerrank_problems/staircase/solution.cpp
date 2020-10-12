#include <bits/stdc++.h>

using namespace std;


// Complete the staircase function below.
void staircase(int n) {
//first loop is used to make rows 
    for (int i = 0 ; i <n ; i++) {
//second loop is used to make columns
        for (int j=n-1 ; j>=0; j--){
			
            if (j==i){
                cout << ("#");
            }
            else if(j<i){
                 cout << ("#");
            }
            else {
                cout<<(" ");
            }
        }
        cout <<('\n');
    }
}

int main()
{
    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    staircase(n);

    return 0;
}
