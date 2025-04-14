#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    int t;
    cin >> t;
    while(t--) {
        ll a, b, c;
        cin >> a >> b >> c;

        ll ad, bd;
        if(c%2 != 0) {
            ad = c/2 + 1;
            bd = c/2;
        }
        else {
            ad = bd = c/2;
        }

        if(a + ad > b + bd)
            cout << "First\n";
        else
            cout << "Second\n";
    }
    return 0;
}