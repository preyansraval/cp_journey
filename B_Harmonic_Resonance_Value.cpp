#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    int t;
    cin >> t;
    while(t--) {
        ll l, r;
        cin >> l >> r;

        if(2ll * l <= r) {
            cout << l << " " << 2ll*l << "\n"; 
        }
        else {
            cout << -1 << " " << -1 << "\n";
        }
    }
    return 0;
}