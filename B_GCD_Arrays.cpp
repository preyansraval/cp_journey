#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    int t;
    cin >> t;
    while(t--) {
        ll l, r, k;
        cin >> l >> r >> k;

        if(l == r && l == 1) {
            cout << "NO" << "\n";
            continue;
        }
        else if(l == r && l > 1) {
            cout << "YES" << "\n";
            continue;
        }

        if((r-l+1) % 2 == 0) {
            if(k >= (r-l+1)/2) {
                cout << "YES" << "\n";
            }
            else
                cout << "NO" << "\n";
        }
        else {
            int oddNums = 0;
            if(l % 2 != 0 || r % 2 != 0) {
                oddNums = ((r-l+1)/2) + 1;
            }
            else {
                oddNums = (r-l+1)/2;
            }

            if(k >= oddNums)    cout << "YES" << "\n";
            else    cout << "NO" << "\n";
        }
    }
    return 0;
}