#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    // No. of Test Cases
    cin >> t;

    int choc,rap;

    // For t Test Cases
    while(t--)
    {
        /* Input From User */
        int N,C,M;
        cin >> N >> C >> M;

        /* 
            choc = No. of chocolates
            rap = No. of wrappers

            Initially (before any iteration), Bobby will have N/C chocolates and N/C wrappers
        */
        choc = rap = N/C;

        /*
            We run a loop uptill the no. of wrappers becomes less than or equal to M (No. of wrappers which can bw turned into another bar of chocolate)
            we increment the choc variable by one denoting that Bobby has eaten one bar by turning M wrappers into a bar.
            rap = rap - M + 1;
            This means M wrappers are taken away (hence subracted) to make a bar and Once Bobby eats this chocolate bar, there is a new wrapper of the most recently made chocolate bar.
            Hence 1 is added.

            The Iteration continues untill our no. of wrappers becomes less than or equal to M.
        */
        while(rap >= M)
        {
            choc++;
            rap = rap - M + 1; 
        }

        // Display The Desired Output
        cout << choc << endl;
    }
    
    return 0;
}