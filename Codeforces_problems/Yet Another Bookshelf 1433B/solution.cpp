#include <bits/stdc++.h>

using namespace std;

int main () {

    int n, size, book;
    int first, total, zero;

    cin >> n;

    // this loop is going to run 'n' times
    while(n--)
    {
        cin >> size;

        // reseting our variables for each test case...
        first = total = zero = 0;

        // this loop is going to run 'size' times
        while(size--)
        {
            cin >> book;

            /*
            if you think about it this problem can be answered
            by simply looking at how many '0' exists between the first
            and last '1'

            so first we need to find our first '1', after that
            if we found a '0' we add +1 in a variable that's
            going to be added to our 'total' variable the next
            time we find a '1'
            */
           
            if(first == 0 && book == 1)
                first = 1;
            else if(first == 1 && book == 0)
                zero++;
            else if(first == 1 && book == 1)
            {
                total += zero;
                zero = 0;
            }
        }

        cout << total << endl;
    }

    return 0;
}