#include<bits/stdc++.h>
using namespace std;
int main() {
    /*
         s (the amount of money Monica has),  
         n (the number of keyboard brands) and  
         m (the number of USB drive brands). 
         loop over the number of keyboard brands and the number of USB drive brands
         then if the keyboard and usb is smaller than or equal the amount of money Monica has then 
         it will be equal to the maximum of the result before the equal sign and keyboard + usb
    */
    int s, n, m, a, res = -1, keyboard[1001], usb[1001];

    cin >> s >> n >> m;
    for (int i = 0; i < n; i++)cin >> keyboard[i];
    for (int i = 0; i < m; i++)cin >> usb[i];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (keyboard[i] + usb[j] <= s)res = max(res, keyboard[i] + usb[j]);
        }
    }
    cout << res << endl;
    return 0;
}