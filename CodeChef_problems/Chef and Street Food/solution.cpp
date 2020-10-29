//The logic behind the solution is to go through each type of the food
//And compare the profits of each type of food at each iteration
//Num of people at chef's shop is (TotalNumOfPeople)/(TotalNumOfShops)
//Profit for each type of food is (NumOfPeople at chef's shop) * (Price of food)

#include<bits/stdc++.h>
using namespace std;
void solve();
int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);
  int tcases;
  cin>>tcases;
  while(tcases)//To run for all the test cases
  {
      solve();
      --tcases;
  }
   return 0;
}
void solve()
{
    long long int typesOfFood, shops, price, people, max=0, temp;
    cin>>typesOfFood;
    for(int i=0;i<typesOfFood;i++)
    {
        cin>>shops>>people>>price;
        temp = people/(shops+1)*price;//shops +1 because a new shop will be created by chef
        if(temp>max)//Because we need to maximise profit
            max=temp;
    }
    cout<<max<<"\n";
}
