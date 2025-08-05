#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve() {
    ll n, q;
    cin >> n >> q;
    vector<ll> a(n);
    for(auto &i : a)    cin >> i;

    vector<ll> x(q);
    for(auto &i : x)    cin >> i;

    ll prev = 31;
    for(int i = 0;i < q;i++) {
        if(x[i] >= prev)    continue;

        ll val = pow(2ll, x[i]);
        for(int j = 0;j < n;j++) {
            if(a[j] % val == 0)
                a[j] += (val / 2ll);
        }
        prev = x[i];
    }

    for(auto i : a)
        cout << i << " ";
    cout << "\n";
}

int main() {
    ll t;
    cin >> t;
    while(t--)
        solve();
    return 0;
}