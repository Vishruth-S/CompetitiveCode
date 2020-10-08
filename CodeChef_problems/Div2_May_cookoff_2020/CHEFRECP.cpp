#include <bits/stdc++.h>
using namespace std;

int main() 
{
	int t;
	cin >> t;
	
	while (t--)
	{
	    int n;
	    cin >> n;
	    
	    int a[n];
	    for (int i=0; i<n; i++)
	        cin >> a[i];
	         
	    map <int, int> m, c;
	    int curr=a[0], count=1, flag=0;
	    for (int i=1; i<n; i++)
	    {
	        if (a[i] == curr)
	        {
	            count++;
	            
	            if (i == n-1)
	            {
	                if (c.find(count) != c.end())
	                {
	                    flag = 1;
                        cout << "NO" << endl;
                        break;
	                }
	            }
	        }
	        
            else if (c.find(count) != c.end())
            {
                flag = 1;
                cout << "NO" << endl;
                break;   
            }
            
            else 
            {
                m[curr] = count;
                c[count] = 1;
                
                if (m.find(a[i]) != m.end())
                {
                    flag = 1;
                    cout << "NO" << endl;
                    break;    
                }
                
                else
                {
                    count = 1;
                    curr = a[i];
                    
                    if (i == n-1)
                    {
                        if (c.find(count) != c.end())
                        {
                            flag = 1;
                            cout << "NO" << endl;
                            break;   
                        }
                    }
                    continue;
                }
            }
	    }
	    
	    if (flag == 0)
	        cout << "YES" << endl;
	}
}
