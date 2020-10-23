#include <bits/stdc++.h>
#include <string.h>

using namespace std;

int sum(int x)
{
    int t = 0;

    x++;

    while(x--)
    {
        t += x;
    }

    return t;
}

int main () {

    int n;
    string str;

    cin >> n;

    // this loop is going to run n times
    while(n--)
    {
        cin >> str;

        /*
        each time the digit changes (from 1 to 2 for example)
        we know that he had to press 10 digits
        (that explains the first half of the expression)

        in the second half we pass the string size to our sum function
        based on the size it calculates how many digits have been pressed

        some examples of the sum function in action:
        if size = 2 then he pressed 1 + 2 digits
        if size = 3 then he pressed 1 + 2 + 3 digits
        */

        cout << ((str.at(0) - '1') * 10) + ( sum( str.size() ) ) << endl;
    }

    return 0;
}