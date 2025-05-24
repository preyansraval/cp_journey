#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve() {
    ll a, b;
    cin >> a >> b;

    if(a == 0) {
        cout << b << " " << 0 << "\n";
    }
    else if(b == 0) {
        cout << a << " " << 0 << "\n";
    }
    else if(a == b) {
        cout << "0 0\n";
    }
    else {
        ll maxVal = abs(a - b);
        ll minVal = min(b % maxVal, maxVal - b % maxVal);
        cout << maxVal << " " << minVal << "\n";
    }
}

int main() {
    ll t;
    cin >> t;
    while(t--)
        solve();
    return 0;
}