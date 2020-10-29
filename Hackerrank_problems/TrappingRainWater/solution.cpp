#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int TrapRainWater(vector<int> &b, int n)
{
   
    int i = 1;
    int trap_water = 0;//stores maximum rain water trapped b/w all bars
    int z = 0, zz = 0;
    while (i < n - 1)
    {

        int curr = b[i];//height of current bar
        z = curr, zz = curr;
        for (int j = 0; j < i; j++)
        {

            z = max(z, b[j]);//find heighest bar on left
        }
        for (int j = i + 1; j < n; j++)
        {

            zz = max(zz, b[j]);//find heighest bar on right
        }
        trap_water += min(z, zz) - curr;//the minimum of heights of bar on left and right traps water which gets added to total water trapped till current bar
        i++;
    }
    return trap_water;

}

int main()
{
    int n;
    cin >> n;
    vector<int> barElevation(n);//stores height of all bars or walls
    for (auto &x : barElevation)
        cin >> x;

    int waterTrapped;
    waterTrapped = TrapRainWater(barElevation, n);//function call
    cout<<waterTrapped;
    return 0;
}
