#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve(ll x) {
    ll y = 0;
    ll k = 31;
    while((x & (1 << k)) == 0)
        k--;
    for(int i = 0;i < k;i++) {
        y += (1 << i);
    }

    ll xorVal = (x ^ y);
    if(x+y > xorVal && y + xorVal > x && x + xorVal > y)
        cout << y << "\n";
    else
        cout << -1 << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    ll t;
    cin >> t;
    while(t-- > 0) {
        ll x;
        cin >> x;

        solve(x);
    }
    return 0;
}