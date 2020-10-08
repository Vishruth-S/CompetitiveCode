#include<bits/stdc++.h>

using namespace std;

typedef long long int ll;

int main()
{
    // a for chest, b for biceps and c for back

	int n, t, a=0, b=0, c=0;
    cin >> n;

    // Here we are not storing the n integers in an array.
    // Instead, we know 1, 1+3, 1+3+3 entry corresponds to chest
    // Similarly 2, 2+3, 2+3+3 entry corresponds to biceps
    // 3, 3+3, 3+3+3 entry corresponds to chest.
    // To be more clear the n integers are like chest, biceps, back, chest, biceps, back and so on upto n.
    for (int i = 1; i <= n; i++)    // Loop Runs for 'n' Times.
    {
        cin >> t; // This is nth integer
        if (i % 3 == 1)
            a += t;
        else if (i % 3 == 2)
            b += t;
        else
            c += t;
    }

    // Now applying the logic of maximum among 3 numbers and displaying the desired result. 
    if (a>b && a > c)
        cout << "chest" << endl;
    else if (b>a && b>c)
        cout << "biceps" << endl;
    else
        cout << "back" << endl;
        
    return 0;
}
