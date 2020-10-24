/*
 IN THIS QUESTION THE NUMBER OF DISTINCT NUMBERS IN THE ARRAY SHOULD BE ATLEAST TWO
 IF THERE IS ONLY ONE DISTINCT NUMBER IN THE ARRAY THEN THE PIRANAHS CANNOT EAT OTHERS AS THE SIZE OF THE ADJACENT PIRANHAS ARE EQUAL TO ITS SIZE

 OUR GOAL IS TO FIND PIRANHA WHICH HAVE MAXIMUM SIZE AND THE ADJACENT PIRANHA SIZE IS STRICTLY LESS THAN IT'S SIZE
 THIS IS BECAUSE THE PIRANHA CAN ONLY EAT THE ADJACENT PIRANHA IF IT'S SIZE IS GREATER THAN ADJACENT 
 ONCE THE LARGE PIRANHA EAT OTHER PIRANHA THEN IT IS THE UNIQUE PIRANHA WITH MAXIMUM SIZE , SO IT CAN EAT ALL THE REMIANING PIRANHAS

*/

#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        int maxi = INT_MIN;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (maxi < a[i])
            {
                maxi = a[i];
            }
        }
        bool status = true;
        int i = 0;
        while (i < n - 1)
        {
            if (a[i] != a[i + 1])
            {
                status = false;
                break;
            }
            i++;
        }
        if (status)
        {
            cout << -1 << endl;
        }
        else
        {
            int i = 0;
            bool status = true;
            while (i < n && status)
            {
                if (a[i] == maxi)
                {
                    if (i > 0 && a[i] != a[i - 1])
                    {
                        status = false;
                    }
                    if (i < n - 1 && a[i] != a[i + 1])
                    {
                        status = false;
                    }
                }
                i++;
            }
            cout << i << endl;
        }
    }
    return 0;
}
