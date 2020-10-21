#include <bits/stdc++.h>

using namespace std;

vector<string> split_string(string);


// we are making a finction to reverse the given string
int reverse(int x){
       int fin = 0;
        while (x>=1){
            fin = (fin*10)+ x%10;
            x = x/10;
            }
        return(fin) ;
        }

int beautifulDays(int i, int j, int k) {

    //interating from i to j and increasing the counter in reverse(x)-x is divisible by K
    // at the end returning te count which is the answer
        int count = 0;
        for (int x = i; x <= j ; x++){
           int backVal = reverse(x);
            if ((backVal - x)%k == 0){
                count +=1;
            }
        }
        return count;

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string ijk_temp;
    getline(cin, ijk_temp);

    vector<string> ijk = split_string(ijk_temp);

    int i = stoi(ijk[0]);

    int j = stoi(ijk[1]);

    int k = stoi(ijk[2]);

    int result = beautifulDays(i, j, k);

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
