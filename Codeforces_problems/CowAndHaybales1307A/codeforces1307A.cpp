//1307A Cow and Haybales
//Contributed by Mohd Warid (waridrox)

#include <bits/stdc++.h> 
using namespace std;

int main() {

    int t;
    cin >> t;
    while(t--) {
    //n = number of piles 
    //d = number of days
    //maxamise a1
    int N,D; cin >> N >> D; 
    int a[N+1];
    for (int i = 1; i <= N; i++)
    {
      cin >> a[i];
    }

while (D--)//D = 5 4 3 2 1
{ //loop over D days -> 2 3 4 5
  for (int i=2;i<=N;i++)
	if (a[i]>0)//3>0|2>0 || 1 2 2
  { //move closest haybale over
	  a[i]--;  //3->2->1
	  a[i-1]++;//0->1->2  1 2 1 2   
	  break;
	}
}

cout<<a[1]<<endl;
    }
      return 0;
}