#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int EquilibriumPoint(vector<int> arr, int n)
{
    vector<int> sumtillnow; //stores sum till current index
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
        sumtillnow.push_back(sum); //stores sum till ith index
    }
    for (int i = 1; i < n - 1; i++)
    {
        if (sumtillnow[i - 1] == sumtillnow[n - 1] - sumtillnow[i]) //if sum till previous (i-1)th index == total sum - sum till ith index
        {
            cout << i; //return equilibrium index
            return 0;
        }
    }
    return -1; //when no equilibrium exisits, return -1
}
int main()
{
    int n;
    cin >> n;//size of array
    vector<int> arr(n);//array elements
    for (auto &x : arr)
        cin >> x;

    int equilibriumPoint = -1;

    equilibriumPoint = EquilibriumPoint(arr, n);//function call
    cout << equilibriumPoint;

    return 0;
}
