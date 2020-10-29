//The solution of this problem is based on observation
//If you try to form further digits of the number then you could easily find a pattern
//For ex: if the sum of first two digits is a mulitple of 5 then it is guranteed that all the digits after third will be 0
//Thus if sum modulo 5 is 0 then you could simply print "NO"
//If the sum of first two digits is even then you could see that only 2,4,6,8 follows after second place
//If the sum of first two digits is odd then you could see that only 2,4,6,8 follows after third place
//So you could easily find out the sum of all digits till k, and get to know whether it is a mulitple of 3 or not :)

#include<bits/stdc++.h>
using namespace std;
void solve();
int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);
  int tcases;
  cin>>tcases;
  while(tcases) //To run all the test cases
  {
      solve();
      --tcases;
  }
   return 0;
}
void solve()
{
    long long int noOfDigits, first, second, sum=0, remaining, arr[4], temp;
    cin>>noOfDigits>>first>>second;
    sum+=first+second;
    if((first+second)%5==0) //logic explained above
    {
        cout<<"NO\n";
    }
    else if((first+second)%2==0)
    {
        noOfDigits-=2;    //as we have already added two digits sum in variable sum
        sum+=(noOfDigits/4)*20; //as (2+4+6+8=20)
        remaining=noOfDigits%4;
        arr[0]=(first+second)%10;
        arr[1]=(first+second+arr[0])%10;
        arr[2]=(first+second+arr[0]+arr[1])%10;
        arr[3]=(first+second+arr[0]+arr[1]+arr[2])%10;
        for(int i=0;i<remaining;i++)
        {
            sum+=arr[i];
        }
        if(sum%3==0)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    else
    {
        temp=first+second;
        first=temp;     //considering sum of first two digits as first digit
        second=temp%10; //third digit
        sum+=second;
        noOfDigits-=3;  //as we have already added two digits sum in variable sum
        sum+=(noOfDigits/4)*20;//as (2+4+6+8=20)   
        remaining=noOfDigits%4;
        arr[0]=(first+second)%10;
        arr[1]=(first+second+arr[0])%10;
        arr[2]=(first+second+arr[0]+arr[1])%10;
        arr[3]=(first+second+arr[0]+arr[1]+arr[2])%10;
        for(int i=0;i<remaining;i++)
        {
            sum+=arr[i];
        }
        if(sum%3==0)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
}
