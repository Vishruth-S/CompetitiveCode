/* 
This problem is related to bitwise XOR operator. The property of XOR opeartor used here is- 
'If both bits in the compared position of the bit patterns are same, that bit in the resulting bit pattern is 0'.
So, XOR of a number with itself results Zero.
*/

/* 
LOGIC
Since the rectangles are axis-parallel, the coordinates are of the form (x1,y1), (x1,y2), (x2,y1), (x2,y2).
The result of XOR of all x-coordinates of a rectangle is Zero as each x-coordinate appears even times.
Similarly XOR of all y-coordinates is Zero.

So, the result XOR of x-coordinates of all the given points will be the required x-coordinate as there will be a
x-coordinate which appears odd number of times.
Similarly, we can find required y-coordinate
*/


#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t; // no of test cases
    while(t--){
        int n, counter, x, y, x_req=0, y_req=0;
        cin>>n; // no of rectangles
        
        counter = 4*n -1;  // co-ordinates of 4*n-1 vertices are given 
        while(counter--){  // loop for XOR of all x-coordinates and XOR of all y-coordinates
            cin>>x>>y;
            x_req ^= x;   
            y_req ^= y;
        }

        cout<<x_req<<" "<<y_req<<endl; //print required output
    }

    return 0;
}