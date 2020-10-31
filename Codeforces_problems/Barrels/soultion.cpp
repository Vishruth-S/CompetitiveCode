//The main idea of the problem is that you are given n numbers and k operations you can do
//what we want to maximize the difference between the maximum element and minimum elements
//In one operation you could add any element to maximize one and minimize the another
//so the idea of solution we have to sort the array in descending order to make all the bigger elements in the first
//then we have to get the sum of all k elements as we gonna add all them together to get the maximum difference possible
#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    int t; //define the variable that gonna hold the number of test cases
    cin>>t; //take input
    while(t--){
        int n,k;  //define n and k numbers that we gonna work with
        long long int sum=0;  //the maximum sum we gonna get *notation*:we define it as Long long because it will overflow int
        cin>>n>>k;  //take inputs
        vector <int> v(n);  //define vector of numbers of size n
        for(int i=0;i<n;i++)    cin>>v[i];  //taking input
        sort(v.rbegin(),v.rend());  //sortthe vector in descending order
        sum=v[0];
        for(int i=1;i<=k;i++)    sum+=v[i]; //calculating the maximum difference we could reach to
        cout<<sum<<endl;
    }
    return 0;
}
//Happy Coding :))
