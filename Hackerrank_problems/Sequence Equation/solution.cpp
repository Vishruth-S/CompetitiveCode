#include <bits/stdc++.h>

using namespace std;

/*
    LOGIC:
    The problem actually asking for the location of the location of a particular value,
    example if there exists an array with values [5,2,1,3,4]
    then the answer for the input of `2` will be `3`,
    because if we assign a 1-based index for the array like this
      array: [5,2,1,3,4]
      index:  1,2,3,4,5

    value of `2` is located at index `1`, 
    then the problem wants us to search the location of value `1`, 
    which is located at index `3`,
    therefore the answer for the input of `2` will be `3`,

    The problem is asking about where is the location of the location of value of `2`.
      -> the location of value of `2` = `1`
      -> the location of the location of value of `2` or which means the location of `1` = `3`

    1. so we can basically just store the position of all values of the given array (which I named `location`)
    2. for the particular asked value we can just recall from the `location` array, where is the location of the given value (which I store on a variable named `locationOfI`)
    3. then we can just recall again from the `location` array, where is the location of the `locationOfI` (which I store on a variable named `locationOfLocationOfI`), 
    and we have just found the answer
*/

vector<int> permutationEquation(vector<int> p, int n) {
    int location[n+5];
    vector<int> ans;
    
    for(int i = 0;i<n;i++){
        location[p[i]] = i+1;
    }

    for(int i = 1;i<=n;i++){
        int locationOfI = location[i];
        int locationOfLocationOfI = location[locationOfI];
        ans.push_back(locationOfLocationOfI);
    }

    return ans;
}

int main(){
    int n, inp;
    vector<int> inputs;

    cin>>n;
    for(int i = 0;i<n;i++){
        cin>>inp;
        inputs.push_back(inp);
    }
    
    vector<int> ans = permutationEquation(inputs, n);
    for(int i = 0;i<n;i++){
        cout<<ans[i]<<endl;
    }

    return 0;
}
