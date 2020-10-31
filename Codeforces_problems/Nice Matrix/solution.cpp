#include <bits/stdc++.h>

/*
 IN THIS QUESTION THE MATRIX SHOULD BE NICE THAT IS IT SHOULD BE POLINDROMIC ROW WISE AND 
 COLUMN WISE 

 THE IDEA GOES LIKE THIS :-
 IF THE MATRIX IS M THEN ACCORDING TO THE CONDITIONS OF PALINDROM ROW WISE M[i][j]==M[i][m-j-1] ,COLUMN WISE M[i][j]==M[n-i-1][j], ROW WISE IN (n-i-1)th ROW M[n-i-1][j]==M[n-i-1][m-j-1] 
 => M[i][j]==M[i][m-j-1]==M[n-i-1][m-j-1]==M[n-i-1][j] 
   
 BUT THE CORNER CASES ARE WHEN i==n-i-1 OR j==m-j-1

 FOR ANY SORTED ARRAY THE MINIMUM POSSIBLE CHANGE WE CAN MAKE IS THE MEDIAN OF THE ARRAY 

 THIS IS BECAUSE IF THE NUMBER IS X AFTER MAKING CHANGES IN M[i][j],M[n-i-1][j]...etc THEN WE HAVE TO MAKE THE FOLLOWING EXPRESSION MINIMUM
 |M[i][j]-x| + |M[n-i-1][j]-x| + |M[i][m-j-1]-x| + |M[n-i-1][m-j-1]-x|

 THIS IS THE REASON FOR SORTING THE M[i][j],M[i][m-j-1],...etc
*/

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t ;
    cin >> t;
    while (t--)
    {
        long long n, m;
        cin >> n >> m;
        long long a[n][m];
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> a[i][j];
            }
        }
        if (n == 1 && m == 1)
        {
            cout << 0 << endl;
        }
        else
        {
            int i = 0;
            long long ans = 0;
            while (i <= (n - 1) / 2)
            {
                int j = 0;
                while (j <= (m - 1) / 2)
                {
                    if (i == n - i - 1 && j == m - j - 1)
                    {
                    }
                    else if (i == n - i - 1)
                    {
                        ans += abs(a[i][j] - a[i][m - j - 1]);
                    }
                    else if (j == m - j - 1)
                    {
                        ans += abs(a[i][j] - a[n - i - 1][j]);
                    }
                    else
                    {
                        long long s[4];
                        s[0] = a[i][j];
                        s[1] = a[i][m - j - 1];
                        s[2] = a[n - i - 1][m - j - 1];
                        s[3] = a[n - i - 1][j];
                        sort(s, s + 4);
                        ans += (s[3] + s[2] - s[1] - s[0]);
                    }
                    j++;
                }
                i++;
            }
            cout << ans << endl;
        }
    }
    return 0;
}
