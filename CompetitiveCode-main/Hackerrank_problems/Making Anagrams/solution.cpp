#include <bits/stdc++.h>

using namespace std;

// Complete the makeAnagram function below.
int makeAnagram(string a, string b)
{
    int i, cut = 0;
    set<char> s;
    int maiorS = max(a.size(), b.size());  //Create a variable to storage the len of the bigger string
    int menorS = min(a.size(), b.size()); //Create a variable to storage the len of the smaller string

    // We have a for and 2 ifs above below, i'm storing these char, from string a and string b in a set called s;

    for (i = 0; i < menorS; i++){
        s.insert(a[i]);
        s.insert(b[i]);
    }

    if (a.size() > b.size()){
        for (; i < maiorS; i++){
            s.insert(a[i]);
        }
    }

    if (b.size() > a.size()){
        for (; i < maiorS; i++){
            s.insert(b[i]);
        }
    }

    // Now the set s have all the char occurrences, and now we will count the occurrences of each string

    for (auto let : s){
        int ocurA = count(a.begin(), a.end(), let);
        int ocurB = count(b.begin(), b.end(), let);
        cut += abs(ocurA - ocurB); // The int cut stores the differences of occurrences on each string, and compare the difference between these two occurrences
    }
    // Now we have the number of same occurrences between string a and b
    return cut;
}

int main(){
    ofstream fout(getenv("OUTPUT_PATH"));

    string a;
    getline(cin, a);

    string b;
    getline(cin, b);

    int res = makeAnagram(a, b);

    fout << res << "\n";

    fout.close();

    return 0;
}
