#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve(ll a, ll b, ll c, ll d) {
    if(a == 0 && c == 0)
        cout << 0 << "\n";
    else if(a == 0 || c == 0)
        cout << 1 << "\n";
    else {
        ll tN = a*d;
        ll tD = b*c;
        ll ans = 0;
        if(tN%tD == 0) {
            if(tN/tD == 1)
                cout << 0 << "\n";
            else
                cout << 1 << "\n";
        }
        else if(tD % tN == 0) {
            if(tD/tN == 1)
                cout << 0 << "\n";
            else
                cout << 1 << "\n";
        }
        else {
            cout << 2 << "\n";
        }
    }
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        ll a, b, c, d;
        cin >> a>> b >> c >> d;
        solve(a, b, c, d);
    }
    return 0;
}