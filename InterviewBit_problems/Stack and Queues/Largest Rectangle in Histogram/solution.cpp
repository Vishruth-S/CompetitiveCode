/*
Given an array of integers A, which is then assumed to be making a histogram with values of indexes in the array.
The aim is to find the largest possible rectangle we could find from this histogram.
This solution is a OPTIMAL solution written in cpp , similar concept could be applied to write this program in other languages.
TIME COMPLEXITY: O(n)
SPACE COMPLEXITY: O(n)
APPROACH:

For each index we find and store the left_boundary and the right_boundary.
Boundary is defined as the index upto which the magnitage(values at the index) is greater than or equal to the value at the current index.
Two arrays - for left and right boundaries are made using stacks in 0(n)
In the end the only task left out is to find the max area which could be made by any index in the given array.
This is done by, AREA =  value(at index) * width(right_boundary - left_boundary - 1)
This max area is returned.

NOTE: for first element i.e. at index '0' left boundary is presumed -1 
      for last element i.e. at index 'array.size() -1' right boundary is presumed array.size()
This fits well with our width formula
*/

#include <bits/stdc++.h>
using namespace std;

// helper function
int largestRectangleArea(vector<int> &A) {
    int len = A.size();
    if(len == 0) return 0;
    
    vector<int> rb(len);
    vector<int> lb(len);
    stack<int> stone;
    
// next smallest on right index
    rb[len-1] = len;
    stone.push(len-1);
    for(int i=len-2; i > -1; i--) {
        while(!stone.empty() && A[i] <= A[stone.top()]) {
            stone.pop();
        }
        if(stone.empty()) rb[i] = len;
        else rb[i] = stone.top();
        
        stone.push(i);
    }
    
// flushing
    while(!stone.empty()) stone.pop();
    
// next smallest on left index
    lb[0] = -1;
    stone.push(0);
    for(int i=1; i < len; i++) {
        while(!stone.empty() && A[i] <= A[stone.top()]) {
            stone.pop();
        }
        if(stone.empty()) lb[i] = -1;
        else lb[i] = stone.top();
        
        stone.push(i);
    }
    
    int rel = -1;
    int area;
    int width;
    for(int i=0; i < len; i++) {
        width = rb[i] - lb[i] - 1;
        area = A[i] * width;
        rel = max(rel, area);
    }
    return rel;
}

// driver function
int main() {
    int N;
    // Enter the number of elements you want to register
    cin>>N;
    vector<int> input(N);
    // Input
    for(int i=0; i < N; i++) {
        cin>>input[i];
    }
    // Answer
    cout<<largestRectangleArea(input);
    return 0;
}

