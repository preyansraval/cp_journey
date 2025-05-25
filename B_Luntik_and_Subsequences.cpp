#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve() {
    ll n;
    cin >> n;
    vector<ll> arr(n);
    for(auto& a : arr) {
        cin >> a;
    }

    ll zero = 0, one = 0;
    for(auto& a : arr) {
        if(a == 0)
            zero++;
        if(a == 1)
            one++;
    }

    ll res = one * (1ll << zero);
    cout << res << "\n";
}

int main() {
    ll t;
    cin >> t;
    while(t--)
        solve();
    return 0;
}