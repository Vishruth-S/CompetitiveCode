#include<bits/stdc++.h>

using namespace std;

void solve(int num, int index){
    int arr[num];
    int number,count = 0;
    for(int i=0;i<num;i++){ // the loop takes the number as input and also check if the index is equal to the one passed
        cin >> arr[i];
        if((i+1)==index){
            number = arr[i];  // if the index is equal to the one passed, then it is assigned to a variable for comparison
        }
    }
    for(int i=0;i<num;i++){
        if(arr[i]>=number && arr[i]>0){ // checks if the number at the index is greater or equal to the number of the contestant at the given index
            count++;  // if the condition satisfies, then the count is incremented
        }
    }

    cout << count;  // the count is then printed (the answer)

}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int count,index;  
    cin >> count >> index;  // the number of contestants and the index of the contestant whose number is to be compared is taken as input here
    solve(count,index); // then these are passed to the function solve()
}
