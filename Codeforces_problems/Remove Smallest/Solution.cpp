/* The main aim of the question is to identify whether on removing smaller number between a[i] and a[j] 
one by one which satisfies condition |a[i]-a[j]|<=1 , where i!=j, whether we could obtain an array consisting
of only one element at the last or not.
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int t;
    scanf("%lld", &t);
    
    while(t--)
    {
        long long int n , i , flag = 0;
        scanf("%lld", &n);
        long long int a[n];
        
        for( i = 0 ; i < n ; ++i)
        {
            scanf("%lld", &a[i]);
        }
        
        sort(a , a + n);                    // sorting array in ascending order to ensure minimum difference of the consecutive elements
        
        for(i = 0 ;  i < n - 1 ; ++i)
        {
            if(a[i + 1] - a[i] <= 1)         // checking if the difference between two consecutive elements of array is less than equal to one
            
            continue;                       // the loop executes from the beginning if the condition in 'if' is satisfied
            
			else
            {
                flag++;                      // increment the counter to validate that the condition has become false 
                break;                       // end for loop as soon as the condition becomes false
            }
        }
        
        if(flag == 1)                       // check if the counter has incremented after the condition became false
        printf("NO\n");                     // print 'NO' in that case
        else
        printf("YES\n");                    // else print 'YES'
        
    }
    
    return 0;
}
