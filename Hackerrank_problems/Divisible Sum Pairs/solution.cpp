#include <bits/stdc++.h>

using namespace std;

vector<string> split_string(string);

// Complete the divisibleSumPairs function below
int divisibleSumPairs(int n, int k, vector<int> ar) 
{
    // i & j used in loop. res to store the result. i.e., the required number of pairs.
    int i,j,res=0;

    // Running a nested loop to get all the possible pairs in the array 
    // just the way we do in Bubble Sort Algorithm.
    for(i=0; i<n-1; ++i)
    {
        j=i+1;
        while(j<n)
        {
            // Checking the divisiblity by k
            if((ar[i]+ar[j])%k==0)
                res++;
            j++;
        }
    }
    // returning the result. I/O was done by HackerRank itself.
    return res;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string nk_temp;
    getline(cin, nk_temp);

    vector<string> nk = split_string(nk_temp);

    int n = stoi(nk[0]);

    int k = stoi(nk[1]);

    string ar_temp_temp;
    getline(cin, ar_temp_temp);

    vector<string> ar_temp = split_string(ar_temp_temp);

    vector<int> ar(n);

    for (int i = 0; i < n; i++) {
        int ar_item = stoi(ar_temp[i]);

        ar[i] = ar_item;
    }

    int result = divisibleSumPairs(n, k, ar);

    fout << result << "\n";

    fout.close();

    return 0;
}

vector<string> split_string(string input_string) {
    string::iterator new_end = unique(input_string.begin(), input_string.end(), [] (const char &x, const char &y) {
        return x == y and x == ' ';
    });

    input_string.erase(new_end, input_string.end());

    while (input_string[input_string.length() - 1] == ' ') {
        input_string.pop_back();
    }

    vector<string> splits;
    char delimiter = ' ';

    size_t i = 0;
    size_t pos = input_string.find(delimiter);

    while (pos != string::npos) {
        splits.push_back(input_string.substr(i, pos - i));

        i = pos + 1;
        pos = input_string.find(delimiter, i);
    }

    splits.push_back(input_string.substr(i, min(pos, input_string.length()) - i + 1));

    return splits;
}

