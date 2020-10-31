#include <bits/stdc++.h>

using namespace std;

vector<string> split_string(string);


int restaurant(int l, int b) {
    //first find the lowest divider from both number
    int lowest_divider = __gcd(l,b);

    //then just divide the total area of both numbers with the lowest divider square
    return (l*b)/(lowest_divider*lowest_divider);
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int t;
    cin >> t;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int t_itr = 0; t_itr < t; t_itr++) {
        string lb_temp;
        getline(cin, lb_temp);
        vector<string> lb = split_string(lb_temp);
        int l = stoi(lb[0]);
        int b = stoi(lb[1]);
        int result = restaurant(l, b);
        fout << result << "\n";
    }
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
