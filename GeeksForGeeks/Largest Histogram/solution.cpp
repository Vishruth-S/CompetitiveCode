// Largest Rectangular Area in a Histogram

// Find the largest rectangular area possible in a given histogram where the largest rectangle can be made of a number of contiguous bars.

#include <iostream>
#include <algorithm>
#include <vector>
#include <stack>
using namespace std;

int maxHistogram(vector<int> v)
{
    int maxArea = 0;
    int area = 0;
    int i;
    int top;
    stack<int> s;
    
    for(i=0;i<v.size();)
    {
        if(s.empty() || v[i]>=v[s.top()])
        {
            s.push(i++);
        }
        else
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
    }
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