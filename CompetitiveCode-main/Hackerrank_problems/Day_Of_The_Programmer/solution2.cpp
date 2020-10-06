#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
/*
The following logic
- Check if the year is equal to 1918 then will print 26.09.1918
- else if the year more than 1918 and the year is divisible by 4 or year is divisible by 4 and year is not is divisible by 100 or year is divisible by 400
    then print 12.09.year
- else print 13.09.year
*/

int main() {
    int year;
    cin >> year;
    if (year == 1918) { // transition
        cout << "26.09.1918\n";
    }
    else { // gregorian and/or julian
        if ((year < 1918 && year % 4 == 0) || (year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
            cout << "12.09." << year << '\n';
        }
        else {
            cout << "13.09." << year << '\n';
        }
    }

    return 0;
}
