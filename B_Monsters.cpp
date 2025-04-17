#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve() {
    ll n, k;
    cin >> n >> k;
    vector<ll> v(n);
    for(auto &i : v)
        cin >> i;
    
    vector<pair<ll, ll>> pairs(n);
    for(int i = 0;i < n;i++) {
        v[i] %= k;
        if(v[i] == 0)
            v[i] = k;
        pairs[i] = {v[i], i+1};
    }

    sort(pairs.begin(), pairs.end(), [](const pair<ll, ll> a, const pair<ll, ll> b) {
        if(a.first == b.first)
            return a.second < b.second;
        return a.first > b.first;
    });

    for(int i = 0;i < n;i++) {
        cout << pairs[i].second << " ";
    }
    cout << endl;
}

int main() {
    ll t;
    cin >> t;
    while(t--) {
        solve();
    }
}