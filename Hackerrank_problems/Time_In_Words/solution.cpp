#include <bits/stdc++.h>

using namespace std;

// create function for load vocab from number base on index
vector<string> numberVocab() {
    return {
        "zero", "one", "two", "three", "four", "five",
        "six", "seven", "eight", "nine", "ten", "eleven",
        "twelve", "thirteen", "fourteen", "fifteen", 
        "sixteen", "seventeen", "eighteen", "nineteen", 
        "twenty", "twenty one", "twenty two", "twenty three", 
        "twenty four", "twenty five", "twenty six", "twenty seven", 
        "twenty eight", "twenty nine"
    };
}

string timeInWords(int h, int m) {
    // initialize string for collecting timeInWords answer
    string result = "";

    // load number vocab for reading purpose hour and minute 
    vector<string> vocab = numberVocab();

    // just concate "o' clock" usual if minute = 0
    if (m == 0) {
        result = vocab[h] + " o' clock";
    } 
    else if (1 <= m && m <= 30) {
        if (m == 15 || m == 30) {
            // select between 15 or 30
            result += m == 15 ? "quarter" : "half";
        } else {
            // convert minute into vocab and check minute unit vocab
            result += vocab[m];
            result += m == 1 ? " minute" : " minutes";
        }

        result += " past " + vocab[h]; 
    } else if (m > 30) {
        // display quarter if minute == 45
        if (m == 45) {
            result += "quarter";
        } else {
            // find how many minute left before going into next hour
            result += vocab[abs(m-60)];
            result += abs(m-60) == 1 ? " minute" : " minutes";
        }
        
        result += " to " + vocab[h+1];
    }

    return result;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int h;
    cin >> h;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    int m;
    cin >> m;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    string result = timeInWords(h, m);

    fout << result << "\n";

    fout.close();

    return 0;
}
