/*
There are n rectangles in a row. You can either turn each rectangle by 90 degrees or leave it as it is. If you turn a rectangle, its width will be height, and its height will be width. Notice that you can turn any number of rectangles, you also can turn all or none of them. You can not change the order of the rectangles.

Find out if there is a way to make the rectangles go in order of non-ascending height. In other words, after all the turns, a height of every rectangle has to be not greater than the height of the previous rectangle (if it is such).

Input
The first line contains a single integer n (1≤n≤105) — the number of rectangles.

Each of the next n lines contains two integers wi and hi (1≤wi,hi≤109) — the width and the height of the i-th rectangle.

Output
Print "YES" (without quotes) if there is a way to make the rectangles go in order of non-ascending height, otherwise print "NO".

You can print each letter in any case (upper or lower).
Examples
input
3
3 4
4 6
3 5
output
YES
input
2
3 4
5 5
output
NO
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
		cin>>a[i][0]>>a[i][1];                  //Tahking Inputs
	s[0]=max(a[0][0],a[0][1]);                  //We want a greedy approach. THus, we use the greatest dimension of the first rectangle.
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
