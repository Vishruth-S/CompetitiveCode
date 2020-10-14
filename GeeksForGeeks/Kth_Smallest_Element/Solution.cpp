#include <bits/stdc++.h>
using namespace std;


int main() {
    int t;
    cin>>t; //Input the number of test cases

    while(t--){
        int n;
        cin>>n; //Input the length of the array entered
        int a[n];
        int freq[100001]={0}; //Initializing a frequency array with 0 to keep a count of the frequency of each inputted element

        //Loop to input the elements
        for(int i=0;i<n;i++){
        cin>>a[i];
            freq[a[i]]++; //Increasing the count of the ith element in the frequency array
        }

        int k;
        cin>>k;//Input the number k to find the kth smallest element


        for(int i=1;i<=100000;i++){
            if(freq[i]>=1)//To check if the ith element is present in the array by checking its frequency from the frequency array
            k=k-freq[i];

            //If k becomes 0 or less than 0, it implies that the ith element is the kth smallest element
            if(k<=0){
            cout<<i<<endl; //Print the kth smallest element
            break;
            }
        }

    }
	return 0;
}
