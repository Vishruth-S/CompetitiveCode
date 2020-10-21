#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

/*
 * Complete the 'maximumStones' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts INTEGER_ARRAY arr as parameter.
 */

int maximumStones(vector<int> arr) {
    int sum = 0, carry_e = 0, carry_o = 0, even, odd, min, c_min;
    //sum keeps track of currently pickable stones, carry_e and carry_o stores extra stones on the even and odd sides
    //even, odd are respective indices
    
    int n = arr.size();
    
    for(even = 0, odd = 1; (even < n || odd < n); even += 2, odd += 2 ) {       //loop to iterate over array with evens and odds
        if(even < n && odd < n) {                                               // checks for two consecutive numbers still present in array
            min = (arr[even] < arr[odd])? arr[even] : arr[odd];                 // min stores min of the two and is added to sum
            sum += min;
            carry_e += arr[even] - min;                                         // remaining extra stones counted in carry
            carry_o += arr[odd] - min;
        }
        if(even < n && odd >= n) {                                               // when last element is left at even index without pair
            carry_e += arr[even];
        }
        if(even >= n && odd < n) {                                               // when last element is left at odd index without pair
            carry_o += arr[odd];
        }
    }
    c_min = (carry_e < carry_o)? carry_e : carry_o;                              // c_min counts minimum stones from the extras which can also be picked
    return (sum + c_min)*2;                                                      // adding c_min to sum and doubling to get total no. of stones 
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string n_temp;
    getline(cin, n_temp);

    int n = stoi(ltrim(rtrim(n_temp)));

    string arr_temp_temp;
    getline(cin, arr_temp_temp);

    vector<string> arr_temp = split(rtrim(arr_temp_temp));

    vector<int> arr(n);

    for (int i = 0; i < n; i++) {
        int arr_item = stoi(arr_temp[i]);

        arr[i] = arr_item;
    }

    int result = maximumStones(arr);

    fout << result << "\n";

    fout.close();

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}

vector<string> split(const string &str) {
    vector<string> tokens;

    string::size_type start = 0;
    string::size_type end = 0;

    while ((end = str.find(" ", start)) != string::npos) {
        tokens.push_back(str.substr(start, end - start));

        start = end + 1;
    }

    tokens.push_back(str.substr(start));

    return tokens;
}
