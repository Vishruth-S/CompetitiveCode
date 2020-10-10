#include<bits/stdc++.h>
using namespace std;
int main( )
{
	int t;//to store the number of test cases
	cin>>t;
	for(int p=0;p<t;p++)
	{
		int n;//to store the number of dolls
		cin>>n;
		int arr[n];//creating an array
		for(int i=0;i<n;i++)
		cin>>arr[i];// entering the array elements 
		sort(arr,arr+n);// sorting the array in ascending order
		if(arr[0]!=arr[1])//checking if the first two dolls are in pair
		cout<<arr[0]<<endl;//the doll that is missing
		else if(arr[n-1]!=arr[n-2])//checking if the last two dolls are in pairs
		cout<<arr[n-1]<<endl;//the doll that is missing
		else 
		{
                  /*to check if all the in-between dolls are in pairs*/ 
			for(int i=2;i<n-2;i++)
			if(arr[i]==arr[i+1])
			i++;
			else
			{
			cout<<arr[i]<<endl;//the doll that is missing
			break;
		}
		}
	}
	return 0;
}
