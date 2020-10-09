// Largest Rectangular Area in a Histogram

// Find the largest rectangular area possible in a given histogram where the largest rectangle can be made of a number of contiguous bars.

#include <iostream>
#include <algorithm>
#include <vector>
#include <stack>
using namespace std;

int maxHistogram(vector<int> v)
{
    int maxArea = 0; // Initialize max area 
    int area = 0; // To store area with top bar as the smallest bar 
    int i;
    int top; // To store top of stack 
    stack<int> s;
    
    // Run through all bars of given histogram 
    for(i=0;i<v.size();)
    {
        // If this bar is higher than the bar on top stack, push it to stack 
        if(s.empty() || v[i]>=v[s.top()])
        {
            s.push(i++);
        }

        // If this bar is lower than top of stack, then calculate area of rectangle with stack top as the smallest (or minimum height) bar.  
        else
        {
            top = s.top();
            s.pop();
            
            // Calculate the area with hist[tp] stack as smallest bar 
            if(s.empty())
                area=v[top]*i;
            else
                area=v[top]*(i-s.top()-1);
            
            if(area>maxArea)
                maxArea = area;
        }
    }

    // Pop the remaining bars from stack and calculate area with every popped bar as the smallest bar 
    while(s.empty() == false)
    {
        top = s.top();
        s.pop();
        if(s.empty())
            area=v[top]*i;
        else
            area=v[top]*(i-s.top()-1);
        
        if(area>maxArea)
            maxArea = area;
    }
    return maxArea;
}

int main() 
{ 
    int input;
    vector<int> v;
    while(cin>>input)
        v.push_back(input);
    cout << "Maximum area is " << maxHistogram(v); 
    return 0; 
}