/*
We can solve this using a greedy approach, We shall try to maximize on the heights of the rectangles while trying to obtain
a decreasing order of the heights. Keeping the greates dimensions help us find the proper sequence of rectangles.
*/

#include <bits/stdc++.h>
using namespace std;
 
int main() {
	int n;
	cin>>n;
	int a[n][2];
	int s[n];
	int flag=0;
	for(int i=0;i<n;i++)
		cin>>a[i][0]>>a[i][1];                  //Taking Inputs
	s[0]=max(a[0][0],a[0][1]);                  //We want a greedy approach. Thus, we use the greatest dimension of the first rectangle.
	for(int i=1;i<n;i++)
	{
		if(max(a[i][0],a[i][1])<=s[i-1])	s[i]=max(a[i][0],a[i][1]);                      //Then we check if either of the two dimensions are smaller than the previous height.
		else if(min(a[i][0],a[i][1])<=s[i-1])	s[i]=min(a[i][0],a[i][1]);                  //IF both are smaller we choose the larger of the two smaller.
		else
		{   
			flag=1;
			break;                                  //If none are smaller we dont need to loop further, we can break here.
		}
	}
	
	if(flag==0)	cout<<"YES"<<endl;
	else cout<<"NO"<<endl;
	
	return 0;
}
