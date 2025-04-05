#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ll l, r;
    cin >> l >> r;

    ll a = l, b = l+1, d = -1;
    bool flag = true;
    for(ll x = l;x <= r;x++) {
        for(ll c = x+2;c <= r;c++) {
            if(__gcd(x,c) > 1 && __gcd(x+1, c) == 1) {
                a = x;
                b = x+1;
                d = c;
                break;
            }
        }
    }

    if(d == -1)
        cout << -1 << "\n";
    else
        cout << a << " " << b << " " << d;
}