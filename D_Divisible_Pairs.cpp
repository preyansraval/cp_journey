#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve() {
    ll n, x, y;
    cin >> n >> x >> y;
    vector<ll> v(n);
    
    for(auto &i : v)    cin >> i;

    ll count = 0;
    map<ll, map<ll, ll>> mp;

    for(int i = 0;i < n;i++) {
        ll a = v[i] % x;
        ll b = v[i] % y;

        count += mp[(x-a)%x][b];
        mp[a][b]++;
    }

    cout << count << "\n";
}

int main() {
    ll t;
    cin >> t;
    while(t--)
        solve();
    return 0;
}