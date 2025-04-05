#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    bool inc = false, cons = false, dec = false;
    int a = 0, b = 0;
    for(int i = 0;i < n;i++) {
        if(i == 0) {
            cin >> a;
            continue;
        }

        cin >> b;
        if(b-a > 0) {
            if(cons || dec) {
                cout << "NO" << "\n";
                return 0;
            }
            inc = true;

        }
        else if(b-a == 0) {
            if(dec) {
                cout << "NO" << "\n";
                return 0;
            }
            cons = true;
        }
        else {
            dec = true;
        }

        a = b;
    }
    cout << "YES" << "\n";
    return 0;
}